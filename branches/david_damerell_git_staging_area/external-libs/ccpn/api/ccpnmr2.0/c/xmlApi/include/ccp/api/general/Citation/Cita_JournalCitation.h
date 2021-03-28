
#ifndef __incl__ccp_api_general_Citation_JournalCitation_h__
#define __incl__ccp_api_general_Citation_JournalCitation_h__

#include "ccp.h"

/*
  Citation (litterature reference) to Journal article
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_JournalCitation_AddApplicationData(Cita_JournalCitation self, Impl_ApplicationData value);

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
extern void *Cita_JournalCitation_AddAuthor(Cita_JournalCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
extern void *Cita_JournalCitation_AddEditor(Cita_JournalCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_AddKeyword(Cita_JournalCitation self, ApiString value);

/**
  Add for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_JournalCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_JournalCitation_AddMolSystem(Cita_JournalCitation self, Mols_MolSystem value);

/**
  Add for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
extern void *Cita_JournalCitation_AddNmrEntry(Cita_JournalCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
extern void *Cita_JournalCitation_AddNmrEntryPrimary(Cita_JournalCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_JournalCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_JournalCitation_AddProtocol(Cita_JournalCitation self, Prot_Protocol value);

/**
  Add for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_JournalCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_JournalCitation_AddShiftReference(Cita_JournalCitation self, Nmr_ShiftReference value);

/**
  Add for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  Targ_Target value
**/
extern void *Cita_JournalCitation_AddTarget(Cita_JournalCitation self, Targ_Target value);

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_JournalCitation_AddTargetGroup(Cita_JournalCitation self, Targ_TargetGroup value);

/**
  CheckAllValid for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_JournalCitation_CheckAllValid(Cita_JournalCitation self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_JournalCitation_CheckValid(Cita_JournalCitation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllApplicationData(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllApplicationData_keyval0(Cita_JournalCitation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllApplicationData_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllApplicationData_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllApplicationData_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
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
extern ApiList Cita_JournalCitation_FindAllApplicationData_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllAuthors(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllAuthors_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllAuthors_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllAuthors_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllAuthors_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
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
extern ApiList Cita_JournalCitation_FindAllAuthors_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllDataLists(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllDataLists_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllDataLists_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllDataLists_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllDataLists_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllDataLists_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllEditors(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllEditors_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllEditors_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllEditors_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllEditors_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
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
extern ApiList Cita_JournalCitation_FindAllEditors_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllExperiments(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllExperiments_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllExperiments_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllExperiments_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllExperiments_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllExperiments_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMethods(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMethods_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMethods_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMethods_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMethods_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllMethods_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolSystems(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolSystems_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolSystems_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolSystems_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolSystems_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllMolSystems_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolecules(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolecules_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolecules_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolecules_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllMolecules_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllMolecules_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrEntries(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
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
extern ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrProbes(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllProtocols(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllProtocols_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllProtocols_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllProtocols_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllProtocols_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllProtocols_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval0(Cita_JournalCitation self);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllShiftReferences(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSoftware(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSoftware_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSoftware_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSoftware_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllSoftware_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllSoftware_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargetGroups(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargets(Cita_JournalCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargets_keyval0(Cita_JournalCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargets_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargets_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_JournalCitation_FindAllTargets_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
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
extern ApiSet Cita_JournalCitation_FindAllTargets_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval0(Cita_JournalCitation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
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
extern Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstAuthor(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
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
extern Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
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
extern Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstEditor(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstEditor_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstEditor_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstEditor_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_JournalCitation_FindFirstEditor_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
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
extern Affi_Person Cita_JournalCitation_FindFirstEditor_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
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
extern Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_JournalCitation_FindFirstMethod(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_JournalCitation_FindFirstMethod_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_JournalCitation_FindFirstMethod_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_JournalCitation_FindFirstMethod_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_JournalCitation_FindFirstMethod_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
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
extern Meth_Method Cita_JournalCitation_FindFirstMethod_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
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
extern Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
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
extern Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
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
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
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
extern Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
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
extern Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
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
extern Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
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
extern Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
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
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval0(Cita_JournalCitation self);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
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
extern Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
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
extern Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_JournalCitation_FindFirstSoftware(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
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
extern Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_JournalCitation_FindFirstTarget(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup(Cita_JournalCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
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
extern Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_JournalCitation_FindFirstTarget_keyval0(Cita_JournalCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_JournalCitation_FindFirstTarget_keyval1(Cita_JournalCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_JournalCitation_FindFirstTarget_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_JournalCitation_FindFirstTarget_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
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
extern Targ_Target Cita_JournalCitation_FindFirstTarget_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cita_JournalCitation_Get(Cita_JournalCitation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern Acco_AccessObject Cita_JournalCitation_GetAccess(Cita_JournalCitation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetApplicationData(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.astm

ASTM code .
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetAstm(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetAuthors(Cita_JournalCitation self);

/**
  GetByKey for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cita_JournalCitation Cita_JournalCitation_GetByKey(Cita_JournalCitation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetCasAbstractCode(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_JournalCitation_GetCitationStore(Cita_JournalCitation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetClassName(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.csd

CSD code
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetCsd(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetDataLists(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetDetails(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetDoi(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetEditors(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetExperiments(Cita_JournalCitation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetFieldNames(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetFirstPage(Cita_JournalCitation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiBoolean Cita_JournalCitation_GetInConstructor(Cita_JournalCitation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiBoolean Cita_JournalCitation_GetIsDeleted(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.issn

ISSN code
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetIssn(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.issue

Journal issue 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetIssue(Cita_JournalCitation self);

/**
  Get for 
ccp.general.Citation.JournalCitation.journalAbbreviation

Journal 
abbreviation according to ACS standard abbreviations
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetJournalAbbreviation(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.journalFullName

Full name 
of Journal
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetJournalFullName(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetKeywords(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetLastPage(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetMedlineUiCode(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetMethods(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetMolSystems(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetMolecules(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetNmrEntries(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_GetNmrEntriesPrimary(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetNmrProbes(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetNmrSpectrometers(Cita_JournalCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetPackageName(Cita_JournalCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetPackageShortName(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.parent

link to parent object - 
synonym for citationStore
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_JournalCitation_GetParent(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetProtocols(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetPubMedId(Cita_JournalCitation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetQualifiedName(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetRatioShiftReferences(Cita_JournalCitation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern Impl_MemopsRoot Cita_JournalCitation_GetRoot(Cita_JournalCitation self);

/**
  Get for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetSampleConditionSets(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiInteger Cita_JournalCitation_GetSerial(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetShiftReferences(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetSoftware(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetStatus(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetTargetGroups(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiSet Cita_JournalCitation_GetTargets(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetTitle(Cita_JournalCitation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern Impl_TopObject Cita_JournalCitation_GetTopObject(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.JournalCitation.volume

Journal volume 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiString Cita_JournalCitation_GetVolume(Cita_JournalCitation self);

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiInteger Cita_JournalCitation_GetYear(Cita_JournalCitation self);

/**
  Constructor for ccp.general.Citation.JournalCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cita_JournalCitation Cita_JournalCitation_Init(Cita_CitationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Citation.JournalCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
extern Cita_JournalCitation Cita_JournalCitation_Init_reqd(Cita_CitationStore parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_JournalCitation_RemoveApplicationData(Cita_JournalCitation self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
extern void *Cita_JournalCitation_RemoveAuthor(Cita_JournalCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.editors

People who are editors 
of Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
extern void *Cita_JournalCitation_RemoveEditor(Cita_JournalCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.keywords

Keywords 
characterising Citation
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_RemoveKeyword(Cita_JournalCitation self, ApiString value);

/**
  Remove for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_JournalCitation_RemoveMolSystem(Cita_JournalCitation self, Mols_MolSystem value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
extern void *Cita_JournalCitation_RemoveNmrEntry(Cita_JournalCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
extern void *Cita_JournalCitation_RemoveNmrEntryPrimary(Cita_JournalCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_JournalCitation_RemoveProtocol(Cita_JournalCitation self, Prot_Protocol value);

/**
  Remove for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_JournalCitation_RemoveShiftReference(Cita_JournalCitation self, Nmr_ShiftReference value);

/**
  Remove for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  Targ_Target value
**/
extern void *Cita_JournalCitation_RemoveTarget(Cita_JournalCitation self, Targ_Target value);

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_JournalCitation_RemoveTargetGroup(Cita_JournalCitation self, Targ_TargetGroup value);

/**
  SetAttr for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cita_JournalCitation_Set(Cita_JournalCitation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_JournalCitation self
  @param  Acco_AccessObject value
**/
extern void *Cita_JournalCitation_SetAccess(Cita_JournalCitation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
extern void *Cita_JournalCitation_SetApplicationData(Cita_JournalCitation self, ApiList values);

/**
  Set for ccp.general.Citation.JournalCitation.astm

ASTM code .
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetAstm(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
extern void *Cita_JournalCitation_SetAuthors(Cita_JournalCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetCasAbstractCode(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.JournalCitation.csd

CSD code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetCsd(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetDataLists(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetDetails(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetDoi(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
extern void *Cita_JournalCitation_SetEditors(Cita_JournalCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetExperiments(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetFirstPage(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.JournalCitation.issn

ISSN code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetIssn(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.JournalCitation.issue

Journal issue 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetIssue(Cita_JournalCitation self, ApiString value);

/**
  Set for 
ccp.general.Citation.JournalCitation.journalAbbreviation

Journal 
abbreviation according to ACS standard abbreviations
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetJournalAbbreviation(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.JournalCitation.journalFullName

Full name 
of Journal
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetJournalFullName(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
extern void *Cita_JournalCitation_SetKeywords(Cita_JournalCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetLastPage(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetMedlineUiCode(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetMethods(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetMolSystems(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetMolecules(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetNmrEntries(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
extern void *Cita_JournalCitation_SetNmrEntriesPrimary(Cita_JournalCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetNmrProbes(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetNmrSpectrometers(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetProtocols(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetPubMedId(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetRatioShiftReferences(Cita_JournalCitation self, ApiSet values);

/**
  Set for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetSampleConditionSets(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_JournalCitation self
  @param  ApiInteger value
**/
extern void *Cita_JournalCitation_SetSerial(Cita_JournalCitation self, ApiInteger value);

/**
  Set for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetShiftReferences(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetSoftware(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetStatus(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetTargetGroups(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
extern void *Cita_JournalCitation_SetTargets(Cita_JournalCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetTitle(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.JournalCitation.volume

Journal volume 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
extern void *Cita_JournalCitation_SetVolume(Cita_JournalCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_JournalCitation self
  @param  ApiInteger value
**/
extern void *Cita_JournalCitation_SetYear(Cita_JournalCitation self, ApiInteger value);

/**
  Sorted for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedDataLists(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedExperiments(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedMethods(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedMolSystems(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedMolecules(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedNmrEntries(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedNmrProbes(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedNmrSpectrometers(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedProtocols(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedRatioShiftReferences(Cita_JournalCitation self);

/**
  Sorted for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedSampleConditionSets(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedShiftReferences(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedSoftware(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedTargetGroups(Cita_JournalCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @returns   the result
**/
extern ApiList Cita_JournalCitation_SortedTargets(Cita_JournalCitation self);

#endif /* __incl__ccp_api_general_Citation_JournalCitation_h__ */
