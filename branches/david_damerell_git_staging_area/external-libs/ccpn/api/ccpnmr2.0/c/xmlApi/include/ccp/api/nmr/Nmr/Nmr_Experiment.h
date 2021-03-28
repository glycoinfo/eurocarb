
#ifndef __incl__ccp_api_nmr_Nmr_Experiment_h__
#define __incl__ccp_api_nmr_Nmr_Experiment_h__

#include "ccp.h"

/*
  A description of an NMR experiment. This corresponds to a single collection of data and so is roughly equivalent to a single Bruker expName/n or a Varian .. directory. The data model contains no description of either a generic experiment or a combination of pulse sequence, sample, conditions and so on that may be recorded several times.
  
  Creating an Experiment autiomatically creates the
  correct number of ExpDims as well.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Experiment_AddApplicationData(Nmr_Experiment self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  Nmr_DataList value
**/
extern void *Nmr_Experiment_AddDataList(Nmr_Experiment self, Nmr_DataList value);

/**
  Add for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
extern void *Nmr_Experiment_AddDerivedFrom(Nmr_Experiment self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
extern void *Nmr_Experiment_AddDerivedTo(Nmr_Experiment self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @param  Entr_Entry value
**/
extern void *Nmr_Experiment_AddEntry(Nmr_Experiment self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  Lmol_LabeledMixture value
**/
extern void *Nmr_Experiment_AddLabeledMixture(Nmr_Experiment self, Lmol_LabeledMixture value);

/**
  Add for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  Mols_MolSystem value
**/
extern void *Nmr_Experiment_AddMolSystem(Nmr_Experiment self, Mols_MolSystem value);

/**
  Add for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  Nmr_NmrExpSeries value
**/
extern void *Nmr_Experiment_AddNmrExpSeries(Nmr_Experiment self, Nmr_NmrExpSeries value);

/**
  Add for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftReference value
**/
extern void *Nmr_Experiment_AddShiftReference(Nmr_Experiment self, Nmr_ShiftReference value);

/**
  CheckAllValid for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean complete
**/
extern void *Nmr_Experiment_CheckAllValid(Nmr_Experiment self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean complete
**/
extern void *Nmr_Experiment_CheckValid(Nmr_Experiment self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Experiment_FindAllApplicationData(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Experiment_FindAllApplicationData_keyval0(Nmr_Experiment self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Experiment_FindAllApplicationData_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Experiment_FindAllApplicationData_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_Experiment_FindAllApplicationData_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
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
extern ApiList Nmr_Experiment_FindAllApplicationData_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllCitations(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllCitations_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllCitations_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllCitations_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllCitations_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllCitations_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataLists(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataLists_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataLists_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataLists_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataLists_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllDataLists_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataSources(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataSources_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataSources_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataSources_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDataSources_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllDataSources_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedFrom(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedTo(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedTo_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedTo_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedTo_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllDerivedTo_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllDerivedTo_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllEntries(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllEntries_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllEntries_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllEntries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllEntries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllEntries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpChainStates(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpChainStates_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpChainStates_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpChainStates_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpChainStates_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllExpChainStates_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpDims(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpDims_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpDims_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpDims_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpDims_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllExpDims_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpTransfers(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpTransfers_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpTransfers_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpTransfers_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllExpTransfers_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllExpTransfers_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllMolSystems(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllMolSystems_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllMolSystems_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllMolSystems_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllMolSystems_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllMolSystems_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllShiftReferences(Nmr_Experiment self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllShiftReferences_keyval0(Nmr_Experiment self);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllShiftReferences_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllShiftReferences_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_Experiment_FindAllShiftReferences_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
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
extern ApiSet Nmr_Experiment_FindAllShiftReferences_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval0(Nmr_Experiment self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
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
extern Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_Experiment_FindFirstCitation(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_Experiment_FindFirstCitation_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_Experiment_FindFirstCitation_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_Experiment_FindFirstCitation_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_Experiment_FindFirstCitation_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
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
extern Cita_Citation Nmr_Experiment_FindFirstCitation_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Nmr_Experiment_FindFirstDataList(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
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
extern Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
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
extern Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
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
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
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
extern Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_Experiment_FindFirstEntry(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_Experiment_FindFirstEntry_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_Experiment_FindFirstEntry_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_Experiment_FindFirstEntry_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_Experiment_FindFirstEntry_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
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
extern Entr_Entry Nmr_Experiment_FindFirstEntry_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
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
extern Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
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
extern Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
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
extern Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
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
extern Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
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
extern Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
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
extern Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference(Nmr_Experiment self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval0(Nmr_Experiment self);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval1(Nmr_Experiment self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
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
extern Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_Experiment_Get(Nmr_Experiment self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Acco_AccessObject Nmr_Experiment_GetAccess(Nmr_Experiment self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_GetApplicationData(Nmr_Experiment self);

/**
  GetByKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_Experiment Nmr_Experiment_GetByKey(Nmr_Experiment self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetCitations(Nmr_Experiment self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetClassName(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetDataLists(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetDataSources(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.date

Date experiment was acquired 
(starting date).
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetDate(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.derivationMethod

Method used to derive 
Experiment - only meaningful for Experiments where derivedFrom is not 
empty
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Meth_Method Nmr_Experiment_GetDerivationMethod(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetDerivedFrom(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetDerivedTo(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetDetails(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.dipolarRelaxList

Dipole-diploe 
relaxation list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_DipolarRelaxList Nmr_Experiment_GetDipolarRelaxList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetEntries(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetExpChainStates(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetExpDims(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetExpTransfers(Nmr_Experiment self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_GetFieldNames(Nmr_Experiment self);

/**
  GetFullKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_Experiment_GetFullKey(Nmr_Experiment self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.Nmr.Experiment.hExchProtectionList

Hydrogen exchange 
protection factor list valid for experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_HExchProtectionList Nmr_Experiment_GetHExchProtectionList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.hExchRateList

Hydrogen exchange rate 
list valid for experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_HExchRateList Nmr_Experiment_GetHExchRateList(Nmr_Experiment self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiBoolean Nmr_Experiment_GetInConstructor(Nmr_Experiment self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiBoolean Nmr_Experiment_GetIsDeleted(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.isotropicS2List

isotroisc order 
parameter list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_IsotropicS2List Nmr_Experiment_GetIsotropicS2List(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.jCouplingList

JcouplingList valid for 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_JCouplingList Nmr_Experiment_GetJCouplingList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetLabeledMixtures(Nmr_Experiment self);

/**
  GetLocalKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @returns  Local object key
**/
extern ApiObject Nmr_Experiment_GetLocalKey(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetMolSystems(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.name

name of Experiment, freely chosen 
and modifiable.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetName(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetNmrExpSeries(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.nmrProject

parent link
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_Experiment_GetNmrProject(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.nmrTubeType

text field describing NMR 
tube type. E.g. "Shigemi 10mm"
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetNmrTubeType(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.noeList

List of homonuclear NOEs for 
experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_NoeList Nmr_Experiment_GetNoeList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.numDim

number of dimensions.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiInteger Nmr_Experiment_GetNumDim(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.numScans

Number of transients averaged 
per data point. A single scan for a complex point counts as numScans 1, 
not 2.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiInteger Nmr_Experiment_GetNumScans(Nmr_Experiment self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetPackageName(Nmr_Experiment self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetPackageShortName(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.parent

link to parent object - synonym 
for nmrProject
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_Experiment_GetParent(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.pkaList

pKa list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_PkaList Nmr_Experiment_GetPkaList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.probe

Probe used for acquiring 
experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Inst_NmrProbe Nmr_Experiment_GetProbe(Nmr_Experiment self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetQualifiedName(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.rawData

DataSource containing raw 
unprocessed data for experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_DataSource Nmr_Experiment_GetRawData(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.rdcList

List of Reduced Dipolar 
Couplings for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_RdcList Nmr_Experiment_GetRdcList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.refExperiment

Reference experiment 
corresponding to Experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmrx_RefExperiment Nmr_Experiment_GetRefExperiment(Nmr_Experiment self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_Experiment_GetRoot(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.sample

Sample on which experiment is 
carried out.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Sam_Sample Nmr_Experiment_GetSample(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.sampleConditionSet

Set of sample 
conditions that apply to an experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_SampleConditionSet Nmr_Experiment_GetSampleConditionSet(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.sampleState

State of sample during 
experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetSampleState(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.sampleVolume

Sample volume
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiFloat Nmr_Experiment_GetSampleVolume(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiInteger Nmr_Experiment_GetSerial(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.shiftAnisotropyList

ShiftAnisotropyList 
valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_ShiftAnisotropyList Nmr_Experiment_GetShiftAnisotropyList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.shiftDifferenceList

Chemical shift 
difference list relevant for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_ShiftDifferenceList Nmr_Experiment_GetShiftDifferenceList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.shiftList

Chemical shift list relevant 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_ShiftList Nmr_Experiment_GetShiftList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiSet Nmr_Experiment_GetShiftReferences(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.spectralDensityList

List of spectral 
densities valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_SpectralDensityList Nmr_Experiment_GetSpectralDensityList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.spectrometer

Spectrometer used for 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Inst_NmrSpectrometer Nmr_Experiment_GetSpectrometer(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.spinningAngle

NMR tube spinning angle 
(in degrees) relative to the magnet bore axis.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiFloat Nmr_Experiment_GetSpinningAngle(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.spinningRate

NMR tube spinning rate (in 
Hz)
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiFloat Nmr_Experiment_GetSpinningRate(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.t1List

T1 measurement list valid for 
Experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_T1List Nmr_Experiment_GetT1List(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.t1rhoList

List of T1rho relaxation valid 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_T1rhoList Nmr_Experiment_GetT1rhoList(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.t2List

T2 list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Nmr_T2List Nmr_Experiment_GetT2List(Nmr_Experiment self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern Impl_TopObject Nmr_Experiment_GetTopObject(Nmr_Experiment self);

/**
  Get for ccp.nmr.Nmr.Experiment.volumeUnit

Unit for sample volume.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiString Nmr_Experiment_GetVolumeUnit(Nmr_Experiment self);

/**
  Constructor for ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Experiment Nmr_Experiment_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject parent
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
extern Nmr_Experiment Nmr_Experiment_Init_reqd(Nmr_NmrProject parent, char * name, ApiInteger numDim);

/**
  Factory function to create ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_DataSource Nmr_Experiment_NewDataSource(Nmr_Experiment self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment self
  @param  char * dataType
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
extern Nmr_DataSource Nmr_Experiment_NewDataSource_reqd(Nmr_Experiment self, char * dataType, char * name, ApiInteger numDim);

/**
  Factory function to create ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpChainState Nmr_Experiment_NewExpChainState(Nmr_Experiment self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment self
  @param  Nmr_ChainState chainState
  @returns  the new object
**/
extern Nmr_ExpChainState Nmr_Experiment_NewExpChainState_reqd(Nmr_Experiment self, Nmr_ChainState chainState);

/**
  Factory function to create ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpDim Nmr_Experiment_NewExpDim(Nmr_Experiment self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment self
  @param  ApiInteger dim
  @returns  the new object
**/
extern Nmr_ExpDim Nmr_Experiment_NewExpDim_reqd(Nmr_Experiment self, ApiInteger dim);

/**
  Factory function to create ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ExpTransfer Nmr_Experiment_NewExpTransfer(Nmr_Experiment self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiSet expDimRefs
  @returns  the new object
**/
extern Nmr_ExpTransfer Nmr_Experiment_NewExpTransfer_reqd(Nmr_Experiment self, ApiSet expDimRefs);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_Experiment_RemoveApplicationData(Nmr_Experiment self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  Nmr_DataList value
**/
extern void *Nmr_Experiment_RemoveDataList(Nmr_Experiment self, Nmr_DataList value);

/**
  Remove for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
extern void *Nmr_Experiment_RemoveDerivedFrom(Nmr_Experiment self, Nmr_Experiment value);

/**
  Remove for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
extern void *Nmr_Experiment_RemoveDerivedTo(Nmr_Experiment self, Nmr_Experiment value);

/**
  Remove for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  Entr_Entry value
**/
extern void *Nmr_Experiment_RemoveEntry(Nmr_Experiment self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  Lmol_LabeledMixture value
**/
extern void *Nmr_Experiment_RemoveLabeledMixture(Nmr_Experiment self, Lmol_LabeledMixture value);

/**
  Remove for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  Mols_MolSystem value
**/
extern void *Nmr_Experiment_RemoveMolSystem(Nmr_Experiment self, Mols_MolSystem value);

/**
  Remove for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  Nmr_NmrExpSeries value
**/
extern void *Nmr_Experiment_RemoveNmrExpSeries(Nmr_Experiment self, Nmr_NmrExpSeries value);

/**
  Remove for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftReference value
**/
extern void *Nmr_Experiment_RemoveShiftReference(Nmr_Experiment self, Nmr_ShiftReference value);

/**
  SetAttr for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_Experiment_Set(Nmr_Experiment self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Experiment self
  @param  Acco_AccessObject value
**/
extern void *Nmr_Experiment_SetAccess(Nmr_Experiment self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  ApiList values
**/
extern void *Nmr_Experiment_SetApplicationData(Nmr_Experiment self, ApiList values);

/**
  Set for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetCitations(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetDataLists(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.date

Date experiment was acquired 
(starting date).
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetDate(Nmr_Experiment self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Experiment.derivationMethod

Method used to derive 
Experiment - only meaningful for Experiments where derivedFrom is not 
empty
  @param  Nmr_Experiment self
  @param  Meth_Method value
**/
extern void *Nmr_Experiment_SetDerivationMethod(Nmr_Experiment self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetDerivedFrom(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetDerivedTo(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetDetails(Nmr_Experiment self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Experiment.dipolarRelaxList

Dipole-diploe 
relaxation list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_DipolarRelaxList value
**/
extern void *Nmr_Experiment_SetDipolarRelaxList(Nmr_Experiment self, Nmr_DipolarRelaxList value);

/**
  Set for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetEntries(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.hExchProtectionList

Hydrogen exchange 
protection factor list valid for experiment
  @param  Nmr_Experiment self
  @param  Nmr_HExchProtectionList value
**/
extern void *Nmr_Experiment_SetHExchProtectionList(Nmr_Experiment self, Nmr_HExchProtectionList value);

/**
  Set for ccp.nmr.Nmr.Experiment.hExchRateList

Hydrogen exchange rate 
list valid for experiment
  @param  Nmr_Experiment self
  @param  Nmr_HExchRateList value
**/
extern void *Nmr_Experiment_SetHExchRateList(Nmr_Experiment self, Nmr_HExchRateList value);

/**
  Set for ccp.nmr.Nmr.Experiment.isotropicS2List

isotroisc order 
parameter list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_IsotropicS2List value
**/
extern void *Nmr_Experiment_SetIsotropicS2List(Nmr_Experiment self, Nmr_IsotropicS2List value);

/**
  Set for ccp.nmr.Nmr.Experiment.jCouplingList

JcouplingList valid for 
Experiment
  @param  Nmr_Experiment self
  @param  Nmr_JCouplingList value
**/
extern void *Nmr_Experiment_SetJCouplingList(Nmr_Experiment self, Nmr_JCouplingList value);

/**
  Set for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetLabeledMixtures(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetMolSystems(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.name

name of Experiment, freely chosen 
and modifiable.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetName(Nmr_Experiment self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetNmrExpSeries(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.nmrTubeType

text field describing NMR 
tube type. E.g. "Shigemi 10mm"
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetNmrTubeType(Nmr_Experiment self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Experiment.noeList

List of homonuclear NOEs for 
experiment
  @param  Nmr_Experiment self
  @param  Nmr_NoeList value
**/
extern void *Nmr_Experiment_SetNoeList(Nmr_Experiment self, Nmr_NoeList value);

/**
  Set for ccp.nmr.Nmr.Experiment.numDim

number of dimensions.
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
extern void *Nmr_Experiment_SetNumDim(Nmr_Experiment self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.Experiment.numScans

Number of transients averaged 
per data point. A single scan for a complex point counts as numScans 1, 
not 2.
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
extern void *Nmr_Experiment_SetNumScans(Nmr_Experiment self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.Experiment.pkaList

pKa list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_PkaList value
**/
extern void *Nmr_Experiment_SetPkaList(Nmr_Experiment self, Nmr_PkaList value);

/**
  Set for ccp.nmr.Nmr.Experiment.probe

Probe used for acquiring 
experiment
  @param  Nmr_Experiment self
  @param  Inst_NmrProbe value
**/
extern void *Nmr_Experiment_SetProbe(Nmr_Experiment self, Inst_NmrProbe value);

/**
  Set for ccp.nmr.Nmr.Experiment.rawData

DataSource containing raw 
unprocessed data for experiment.
  @param  Nmr_Experiment self
  @param  Nmr_DataSource value
**/
extern void *Nmr_Experiment_SetRawData(Nmr_Experiment self, Nmr_DataSource value);

/**
  Set for ccp.nmr.Nmr.Experiment.rdcList

List of Reduced Dipolar 
Couplings for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_RdcList value
**/
extern void *Nmr_Experiment_SetRdcList(Nmr_Experiment self, Nmr_RdcList value);

/**
  Set for ccp.nmr.Nmr.Experiment.refExperiment

Reference experiment 
corresponding to Experiment.
  @param  Nmr_Experiment self
  @param  Nmrx_RefExperiment value
**/
extern void *Nmr_Experiment_SetRefExperiment(Nmr_Experiment self, Nmrx_RefExperiment value);

/**
  Set for ccp.nmr.Nmr.Experiment.sample

Sample on which experiment is 
carried out.
  @param  Nmr_Experiment self
  @param  Sam_Sample value
**/
extern void *Nmr_Experiment_SetSample(Nmr_Experiment self, Sam_Sample value);

/**
  Set for ccp.nmr.Nmr.Experiment.sampleConditionSet

Set of sample 
conditions that apply to an experiment
  @param  Nmr_Experiment self
  @param  Nmr_SampleConditionSet value
**/
extern void *Nmr_Experiment_SetSampleConditionSet(Nmr_Experiment self, Nmr_SampleConditionSet value);

/**
  Set for ccp.nmr.Nmr.Experiment.sampleState

State of sample during 
experiment.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetSampleState(Nmr_Experiment self, ApiString value);

/**
  Set for ccp.nmr.Nmr.Experiment.sampleVolume

Sample volume
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
extern void *Nmr_Experiment_SetSampleVolume(Nmr_Experiment self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.Experiment.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
extern void *Nmr_Experiment_SetSerial(Nmr_Experiment self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.Experiment.shiftAnisotropyList

ShiftAnisotropyList 
valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftAnisotropyList value
**/
extern void *Nmr_Experiment_SetShiftAnisotropyList(Nmr_Experiment self, Nmr_ShiftAnisotropyList value);

/**
  Set for ccp.nmr.Nmr.Experiment.shiftDifferenceList

Chemical shift 
difference list relevant for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftDifferenceList value
**/
extern void *Nmr_Experiment_SetShiftDifferenceList(Nmr_Experiment self, Nmr_ShiftDifferenceList value);

/**
  Set for ccp.nmr.Nmr.Experiment.shiftList

Chemical shift list relevant 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftList value
**/
extern void *Nmr_Experiment_SetShiftList(Nmr_Experiment self, Nmr_ShiftList value);

/**
  Set for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
extern void *Nmr_Experiment_SetShiftReferences(Nmr_Experiment self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.Experiment.spectralDensityList

List of spectral 
densities valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_SpectralDensityList value
**/
extern void *Nmr_Experiment_SetSpectralDensityList(Nmr_Experiment self, Nmr_SpectralDensityList value);

/**
  Set for ccp.nmr.Nmr.Experiment.spectrometer

Spectrometer used for 
Experiment
  @param  Nmr_Experiment self
  @param  Inst_NmrSpectrometer value
**/
extern void *Nmr_Experiment_SetSpectrometer(Nmr_Experiment self, Inst_NmrSpectrometer value);

/**
  Set for ccp.nmr.Nmr.Experiment.spinningAngle

NMR tube spinning angle 
(in degrees) relative to the magnet bore axis.
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
extern void *Nmr_Experiment_SetSpinningAngle(Nmr_Experiment self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.Experiment.spinningRate

NMR tube spinning rate (in 
Hz)
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
extern void *Nmr_Experiment_SetSpinningRate(Nmr_Experiment self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.Experiment.t1List

T1 measurement list valid for 
Experiment.
  @param  Nmr_Experiment self
  @param  Nmr_T1List value
**/
extern void *Nmr_Experiment_SetT1List(Nmr_Experiment self, Nmr_T1List value);

/**
  Set for ccp.nmr.Nmr.Experiment.t1rhoList

List of T1rho relaxation valid 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_T1rhoList value
**/
extern void *Nmr_Experiment_SetT1rhoList(Nmr_Experiment self, Nmr_T1rhoList value);

/**
  Set for ccp.nmr.Nmr.Experiment.t2List

T2 list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_T2List value
**/
extern void *Nmr_Experiment_SetT2List(Nmr_Experiment self, Nmr_T2List value);

/**
  Set for ccp.nmr.Nmr.Experiment.volumeUnit

Unit for sample volume.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
extern void *Nmr_Experiment_SetVolumeUnit(Nmr_Experiment self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedCitations(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedDataLists(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedDataSources(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedDerivedFrom(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedDerivedTo(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedEntries(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedExpChainStates(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedExpDims(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedExpTransfers(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedLabeledMixtures(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedMolSystems(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedNmrExpSeries(Nmr_Experiment self);

/**
  Sorted for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
extern ApiList Nmr_Experiment_SortedShiftReferences(Nmr_Experiment self);

#endif /* __incl__ccp_api_nmr_Nmr_Experiment_h__ */
