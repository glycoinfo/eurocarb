
#ifndef __incl__ccp_api_general_Citation_ThesisCitation_h__
#define __incl__ccp_api_general_Citation_ThesisCitation_h__

#include "ccp.h"

/*
  Citation (litterature reference) to  a Thesis.
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_ThesisCitation_AddApplicationData(Cita_ThesisCitation self, Impl_ApplicationData value);

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
extern void *Cita_ThesisCitation_AddAuthor(Cita_ThesisCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
extern void *Cita_ThesisCitation_AddEditor(Cita_ThesisCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_AddKeyword(Cita_ThesisCitation self, ApiString value);

/**
  Add for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ThesisCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_ThesisCitation_AddMolSystem(Cita_ThesisCitation self, Mols_MolSystem value);

/**
  Add for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ThesisCitation_AddNmrEntry(Cita_ThesisCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ThesisCitation_AddNmrEntryPrimary(Cita_ThesisCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ThesisCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_ThesisCitation_AddProtocol(Cita_ThesisCitation self, Prot_Protocol value);

/**
  Add for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ThesisCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_ThesisCitation_AddShiftReference(Cita_ThesisCitation self, Nmr_ShiftReference value);

/**
  Add for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  Targ_Target value
**/
extern void *Cita_ThesisCitation_AddTarget(Cita_ThesisCitation self, Targ_Target value);

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_ThesisCitation_AddTargetGroup(Cita_ThesisCitation self, Targ_TargetGroup value);

/**
  CheckAllValid for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_ThesisCitation_CheckAllValid(Cita_ThesisCitation self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_ThesisCitation_CheckValid(Cita_ThesisCitation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllApplicationData(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllApplicationData_keyval0(Cita_ThesisCitation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllApplicationData_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllApplicationData_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllApplicationData_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
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
extern ApiList Cita_ThesisCitation_FindAllApplicationData_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllAuthors(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllAuthors_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllAuthors_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllAuthors_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllAuthors_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
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
extern ApiList Cita_ThesisCitation_FindAllAuthors_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllDataLists(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllDataLists_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllDataLists_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllDataLists_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllDataLists_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllDataLists_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllEditors(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllEditors_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllEditors_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllEditors_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllEditors_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
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
extern ApiList Cita_ThesisCitation_FindAllEditors_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllExperiments(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllExperiments_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllExperiments_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllExperiments_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllExperiments_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllExperiments_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMethods(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMethods_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMethods_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMethods_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMethods_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllMethods_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolSystems(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolecules(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolecules_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolecules_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolecules_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllMolecules_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllMolecules_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
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
extern ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllProtocols(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllProtocols_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllProtocols_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllProtocols_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllProtocols_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllProtocols_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval0(Cita_ThesisCitation self);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSoftware(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSoftware_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSoftware_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSoftware_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllSoftware_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllSoftware_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargets(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargets_keyval0(Cita_ThesisCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargets_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargets_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_ThesisCitation_FindAllTargets_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
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
extern ApiSet Cita_ThesisCitation_FindAllTargets_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
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
extern Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
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
extern Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
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
extern Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstEditor(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
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
extern Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
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
extern Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ThesisCitation_FindFirstMethod(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
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
extern Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
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
extern Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
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
extern Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
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
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
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
extern Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
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
extern Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
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
extern Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
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
extern Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
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
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
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
extern Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
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
extern Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
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
extern Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ThesisCitation_FindFirstTarget(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup(Cita_ThesisCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
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
extern Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval0(Cita_ThesisCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval1(Cita_ThesisCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
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
extern Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cita_ThesisCitation_Get(Cita_ThesisCitation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern Acco_AccessObject Cita_ThesisCitation_GetAccess(Cita_ThesisCitation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetApplicationData(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetAuthors(Cita_ThesisCitation self);

/**
  GetByKey for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cita_ThesisCitation Cita_ThesisCitation_GetByKey(Cita_ThesisCitation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetCasAbstractCode(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_ThesisCitation_GetCitationStore(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.ThesisCitation.city

City where institution 
is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetCity(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetClassName(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.ThesisCitation.country

Country where 
institution is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetCountry(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetDataLists(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetDetails(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetDoi(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetEditors(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetExperiments(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetFieldNames(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetFirstPage(Cita_ThesisCitation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiBoolean Cita_ThesisCitation_GetInConstructor(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.ThesisCitation.institution

Institution 
where thesis is submitted
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetInstitution(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiBoolean Cita_ThesisCitation_GetIsDeleted(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetKeywords(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetLastPage(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetMedlineUiCode(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetMethods(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetMolSystems(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetMolecules(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetNmrEntries(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_GetNmrEntriesPrimary(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetNmrProbes(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetNmrSpectrometers(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetPackageName(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetPackageShortName(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.parent

link to parent object - 
synonym for citationStore
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_ThesisCitation_GetParent(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetProtocols(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetPubMedId(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetQualifiedName(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetRatioShiftReferences(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern Impl_MemopsRoot Cita_ThesisCitation_GetRoot(Cita_ThesisCitation self);

/**
  Get for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetSampleConditionSets(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiInteger Cita_ThesisCitation_GetSerial(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetShiftReferences(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetSoftware(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.ThesisCitation.stateProvince

State or 
province where institution is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetStateProvince(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetStatus(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetTargetGroups(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiSet Cita_ThesisCitation_GetTargets(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiString Cita_ThesisCitation_GetTitle(Cita_ThesisCitation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern Impl_TopObject Cita_ThesisCitation_GetTopObject(Cita_ThesisCitation self);

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiInteger Cita_ThesisCitation_GetYear(Cita_ThesisCitation self);

/**
  Constructor for ccp.general.Citation.ThesisCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cita_ThesisCitation Cita_ThesisCitation_Init(Cita_CitationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Citation.ThesisCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
extern Cita_ThesisCitation Cita_ThesisCitation_Init_reqd(Cita_CitationStore parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_ThesisCitation_RemoveApplicationData(Cita_ThesisCitation self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
extern void *Cita_ThesisCitation_RemoveAuthor(Cita_ThesisCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.editors

People who are editors 
of Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
extern void *Cita_ThesisCitation_RemoveEditor(Cita_ThesisCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.keywords

Keywords 
characterising Citation
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_RemoveKeyword(Cita_ThesisCitation self, ApiString value);

/**
  Remove for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_ThesisCitation_RemoveMolSystem(Cita_ThesisCitation self, Mols_MolSystem value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ThesisCitation_RemoveNmrEntry(Cita_ThesisCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
extern void *Cita_ThesisCitation_RemoveNmrEntryPrimary(Cita_ThesisCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_ThesisCitation_RemoveProtocol(Cita_ThesisCitation self, Prot_Protocol value);

/**
  Remove for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_ThesisCitation_RemoveShiftReference(Cita_ThesisCitation self, Nmr_ShiftReference value);

/**
  Remove for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  Targ_Target value
**/
extern void *Cita_ThesisCitation_RemoveTarget(Cita_ThesisCitation self, Targ_Target value);

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_ThesisCitation_RemoveTargetGroup(Cita_ThesisCitation self, Targ_TargetGroup value);

/**
  SetAttr for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cita_ThesisCitation_Set(Cita_ThesisCitation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ThesisCitation self
  @param  Acco_AccessObject value
**/
extern void *Cita_ThesisCitation_SetAccess(Cita_ThesisCitation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
extern void *Cita_ThesisCitation_SetApplicationData(Cita_ThesisCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
extern void *Cita_ThesisCitation_SetAuthors(Cita_ThesisCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetCasAbstractCode(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ThesisCitation.city

City where institution 
is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetCity(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ThesisCitation.country

Country where 
institution is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetCountry(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetDataLists(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetDetails(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetDoi(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
extern void *Cita_ThesisCitation_SetEditors(Cita_ThesisCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetExperiments(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetFirstPage(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.ThesisCitation.institution

Institution 
where thesis is submitted
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetInstitution(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
extern void *Cita_ThesisCitation_SetKeywords(Cita_ThesisCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetLastPage(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetMedlineUiCode(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetMethods(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetMolSystems(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetMolecules(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetNmrEntries(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
extern void *Cita_ThesisCitation_SetNmrEntriesPrimary(Cita_ThesisCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetNmrProbes(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetNmrSpectrometers(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetProtocols(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetPubMedId(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetRatioShiftReferences(Cita_ThesisCitation self, ApiSet values);

/**
  Set for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetSampleConditionSets(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ThesisCitation self
  @param  ApiInteger value
**/
extern void *Cita_ThesisCitation_SetSerial(Cita_ThesisCitation self, ApiInteger value);

/**
  Set for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetShiftReferences(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetSoftware(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.ThesisCitation.stateProvince

State or 
province where institution is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetStateProvince(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetStatus(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetTargetGroups(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
extern void *Cita_ThesisCitation_SetTargets(Cita_ThesisCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
extern void *Cita_ThesisCitation_SetTitle(Cita_ThesisCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ThesisCitation self
  @param  ApiInteger value
**/
extern void *Cita_ThesisCitation_SetYear(Cita_ThesisCitation self, ApiInteger value);

/**
  Sorted for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedDataLists(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedExperiments(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedMethods(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedMolSystems(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedMolecules(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedNmrEntries(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedNmrProbes(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedNmrSpectrometers(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedProtocols(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedRatioShiftReferences(Cita_ThesisCitation self);

/**
  Sorted for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedSampleConditionSets(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedShiftReferences(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedSoftware(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedTargetGroups(Cita_ThesisCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @returns   the result
**/
extern ApiList Cita_ThesisCitation_SortedTargets(Cita_ThesisCitation self);

#endif /* __incl__ccp_api_general_Citation_ThesisCitation_h__ */
