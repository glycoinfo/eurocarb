
#ifndef __incl__ccp_api_general_Citation_ConferenceCitation_h__
#define __incl__ccp_api_general_Citation_ConferenceCitation_h__

#include "ccp.h"

/*
  Citation (litterature reference) to Conference presentation
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_ConferenceCitation_AddApplicationData(Cita_ConferenceCitation self, Impl_ApplicationData value);

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
extern void *Cita_ConferenceCitation_AddAuthor(Cita_ConferenceCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
extern void *Cita_ConferenceCitation_AddEditor(Cita_ConferenceCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_AddKeyword(Cita_ConferenceCitation self, ApiString value);

/**
  Add for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_ConferenceCitation_AddMolSystem(Cita_ConferenceCitation self, Mols_MolSystem value);

/**
  Add for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ConferenceCitation_AddNmrEntry(Cita_ConferenceCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ConferenceCitation_AddNmrEntryPrimary(Cita_ConferenceCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_ConferenceCitation_AddProtocol(Cita_ConferenceCitation self, Prot_Protocol value);

/**
  Add for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_ConferenceCitation_AddShiftReference(Cita_ConferenceCitation self, Nmr_ShiftReference value);

/**
  Add for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  Targ_Target value
**/
extern void *Cita_ConferenceCitation_AddTarget(Cita_ConferenceCitation self, Targ_Target value);

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_ConferenceCitation_AddTargetGroup(Cita_ConferenceCitation self, Targ_TargetGroup value);

/**
  CheckAllValid for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_ConferenceCitation_CheckAllValid(Cita_ConferenceCitation self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_ConferenceCitation_CheckValid(Cita_ConferenceCitation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllApplicationData(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
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
extern ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllAuthors(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllAuthors_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllAuthors_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllAuthors_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllAuthors_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
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
extern ApiList Cita_ConferenceCitation_FindAllAuthors_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllDataLists(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllEditors(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllEditors_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllEditors_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllEditors_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllEditors_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
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
extern ApiList Cita_ConferenceCitation_FindAllEditors_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllExperiments(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMethods(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMethods_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMethods_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMethods_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMethods_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllMethods_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolecules(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
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
extern ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllProtocols(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSoftware(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargets(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargets_keyval0(Cita_ConferenceCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargets_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargets_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ConferenceCitation_FindAllTargets_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
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
extern ApiSet Cita_ConferenceCitation_FindAllTargets_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
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
extern Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
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
extern Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
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
extern Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
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
extern Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
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
extern Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
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
extern Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
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
extern Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
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
extern Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
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
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
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
extern Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
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
extern Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
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
extern Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
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
extern Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
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
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
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
extern Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
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
extern Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
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
extern Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup(Cita_ConferenceCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
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
extern Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval0(Cita_ConferenceCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
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
extern Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cita_ConferenceCitation_Get(Cita_ConferenceCitation self, ApiString name);

/**
  Get for ccp.general.Citation.ConferenceCitation.abstractNumber

Abstract 
'number' (not an integer) of presentation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetAbstractNumber(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern Acco_AccessObject Cita_ConferenceCitation_GetAccess(Cita_ConferenceCitation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetApplicationData(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetAuthors(Cita_ConferenceCitation self);

/**
  GetByKey for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cita_ConferenceCitation Cita_ConferenceCitation_GetByKey(Cita_ConferenceCitation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetCasAbstractCode(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_ConferenceCitation_GetCitationStore(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.city

City where 
conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetCity(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetClassName(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.conferenceSite

Location 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetConferenceSite(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.conferenceTitle

Title 
of cnference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetConferenceTitle(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.country

Country where 
conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetCountry(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetDataLists(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetDetails(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetDoi(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetEditors(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.endDate

Finishing date 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetEndDate(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetExperiments(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetFieldNames(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetFirstPage(Cita_ConferenceCitation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiBoolean Cita_ConferenceCitation_GetInConstructor(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiBoolean Cita_ConferenceCitation_GetIsDeleted(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetKeywords(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetLastPage(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetMedlineUiCode(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetMethods(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetMolSystems(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetMolecules(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetNmrEntries(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_GetNmrEntriesPrimary(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetNmrProbes(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetNmrSpectrometers(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetPackageName(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetPackageShortName(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.parent

link to parent object - 
synonym for citationStore
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_ConferenceCitation_GetParent(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetProtocols(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetPubMedId(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetQualifiedName(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetRatioShiftReferences(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern Impl_MemopsRoot Cita_ConferenceCitation_GetRoot(Cita_ConferenceCitation self);

/**
  Get for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetSampleConditionSets(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiInteger Cita_ConferenceCitation_GetSerial(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetShiftReferences(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetSoftware(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.startDate

Starting date 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetStartDate(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.ConferenceCitation.stateProvince

State or 
provinde where conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetStateProvince(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetStatus(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetTargetGroups(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiSet Cita_ConferenceCitation_GetTargets(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiString Cita_ConferenceCitation_GetTitle(Cita_ConferenceCitation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern Impl_TopObject Cita_ConferenceCitation_GetTopObject(Cita_ConferenceCitation self);

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiInteger Cita_ConferenceCitation_GetYear(Cita_ConferenceCitation self);

/**
  Constructor for ccp.general.Citation.ConferenceCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cita_ConferenceCitation Cita_ConferenceCitation_Init(Cita_CitationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Citation.ConferenceCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
extern Cita_ConferenceCitation Cita_ConferenceCitation_Init_reqd(Cita_CitationStore parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_ConferenceCitation_RemoveApplicationData(Cita_ConferenceCitation self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
extern void *Cita_ConferenceCitation_RemoveAuthor(Cita_ConferenceCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.editors

People who are editors 
of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
extern void *Cita_ConferenceCitation_RemoveEditor(Cita_ConferenceCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.keywords

Keywords 
characterising Citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_RemoveKeyword(Cita_ConferenceCitation self, ApiString value);

/**
  Remove for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_ConferenceCitation_RemoveMolSystem(Cita_ConferenceCitation self, Mols_MolSystem value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ConferenceCitation_RemoveNmrEntry(Cita_ConferenceCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ConferenceCitation_RemoveNmrEntryPrimary(Cita_ConferenceCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_ConferenceCitation_RemoveProtocol(Cita_ConferenceCitation self, Prot_Protocol value);

/**
  Remove for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_ConferenceCitation_RemoveShiftReference(Cita_ConferenceCitation self, Nmr_ShiftReference value);

/**
  Remove for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  Targ_Target value
**/
extern void *Cita_ConferenceCitation_RemoveTarget(Cita_ConferenceCitation self, Targ_Target value);

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_ConferenceCitation_RemoveTargetGroup(Cita_ConferenceCitation self, Targ_TargetGroup value);

/**
  SetAttr for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cita_ConferenceCitation_Set(Cita_ConferenceCitation self, ApiString name, ApiObject value);

/**
  Set for ccp.general.Citation.ConferenceCitation.abstractNumber

Abstract 
'number' (not an integer) of presentation.
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetAbstractNumber(Cita_ConferenceCitation self, ApiString value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ConferenceCitation self
  @param  Acco_AccessObject value
**/
extern void *Cita_ConferenceCitation_SetAccess(Cita_ConferenceCitation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
extern void *Cita_ConferenceCitation_SetApplicationData(Cita_ConferenceCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
extern void *Cita_ConferenceCitation_SetAuthors(Cita_ConferenceCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetCasAbstractCode(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ConferenceCitation.city

City where 
conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetCity(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ConferenceCitation.conferenceSite

Location 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetConferenceSite(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ConferenceCitation.conferenceTitle

Title 
of cnference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetConferenceTitle(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ConferenceCitation.country

Country where 
conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetCountry(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetDataLists(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetDetails(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetDoi(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
extern void *Cita_ConferenceCitation_SetEditors(Cita_ConferenceCitation self, ApiList values);

/**
  Set for ccp.general.Citation.ConferenceCitation.endDate

Finishing date 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetEndDate(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetExperiments(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetFirstPage(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
extern void *Cita_ConferenceCitation_SetKeywords(Cita_ConferenceCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetLastPage(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetMedlineUiCode(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetMethods(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetMolSystems(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetMolecules(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetNmrEntries(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
extern void *Cita_ConferenceCitation_SetNmrEntriesPrimary(Cita_ConferenceCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetNmrProbes(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetNmrSpectrometers(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetProtocols(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetPubMedId(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetRatioShiftReferences(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetSampleConditionSets(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ConferenceCitation self
  @param  ApiInteger value
**/
extern void *Cita_ConferenceCitation_SetSerial(Cita_ConferenceCitation self, ApiInteger value);

/**
  Set for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetShiftReferences(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetSoftware(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.ConferenceCitation.startDate

Starting date 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetStartDate(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ConferenceCitation.stateProvince

State or 
provinde where conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetStateProvince(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetStatus(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetTargetGroups(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
extern void *Cita_ConferenceCitation_SetTargets(Cita_ConferenceCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
extern void *Cita_ConferenceCitation_SetTitle(Cita_ConferenceCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ConferenceCitation self
  @param  ApiInteger value
**/
extern void *Cita_ConferenceCitation_SetYear(Cita_ConferenceCitation self, ApiInteger value);

/**
  Sorted for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedDataLists(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedExperiments(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedMethods(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedMolSystems(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedMolecules(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedNmrEntries(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedNmrProbes(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedNmrSpectrometers(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedProtocols(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedRatioShiftReferences(Cita_ConferenceCitation self);

/**
  Sorted for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedSampleConditionSets(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedShiftReferences(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedSoftware(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedTargetGroups(Cita_ConferenceCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
extern ApiList Cita_ConferenceCitation_SortedTargets(Cita_ConferenceCitation self);

#endif /* __incl__ccp_api_general_Citation_ConferenceCitation_h__ */
