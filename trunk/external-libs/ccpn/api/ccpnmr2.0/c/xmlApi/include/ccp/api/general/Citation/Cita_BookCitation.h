
#ifndef __incl__ccp_api_general_Citation_BookCitation_h__
#define __incl__ccp_api_general_Citation_BookCitation_h__

#include "ccp.h"

/*
  Citation (litterature reference) for book or book chapter.
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_BookCitation_AddApplicationData(Cita_BookCitation self, Impl_ApplicationData value);

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  Affi_Person value
**/
extern void *Cita_BookCitation_AddAuthor(Cita_BookCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_BookCitation self
  @param  Affi_Person value
**/
extern void *Cita_BookCitation_AddEditor(Cita_BookCitation self, Affi_Person value);

/**
  Add for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_AddKeyword(Cita_BookCitation self, ApiString value);

/**
  Add for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_BookCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_BookCitation_AddMolSystem(Cita_BookCitation self, Mols_MolSystem value);

/**
  Add for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  Entr_Entry value
**/
extern void *Cita_BookCitation_AddNmrEntry(Cita_BookCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  Entr_Entry value
**/
extern void *Cita_BookCitation_AddNmrEntryPrimary(Cita_BookCitation self, Entr_Entry value);

/**
  Add for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_BookCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_BookCitation_AddProtocol(Cita_BookCitation self, Prot_Protocol value);

/**
  Add for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_BookCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_BookCitation_AddShiftReference(Cita_BookCitation self, Nmr_ShiftReference value);

/**
  Add for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  Targ_Target value
**/
extern void *Cita_BookCitation_AddTarget(Cita_BookCitation self, Targ_Target value);

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_BookCitation_AddTargetGroup(Cita_BookCitation self, Targ_TargetGroup value);

/**
  CheckAllValid for ccp.general.Citation.BookCitation
  @param  Cita_BookCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_BookCitation_CheckAllValid(Cita_BookCitation self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Citation.BookCitation
  @param  Cita_BookCitation self
  @param  ApiBoolean complete
**/
extern void *Cita_BookCitation_CheckValid(Cita_BookCitation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllApplicationData(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllApplicationData_keyval0(Cita_BookCitation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllApplicationData_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllApplicationData_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllApplicationData_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
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
extern ApiList Cita_BookCitation_FindAllApplicationData_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllAuthors(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllAuthors_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllAuthors_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllAuthors_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllAuthors_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
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
extern ApiList Cita_BookCitation_FindAllAuthors_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllDataLists(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllDataLists_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllDataLists_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllDataLists_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllDataLists_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllDataLists_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllEditors(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllEditors_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllEditors_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllEditors_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllEditors_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
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
extern ApiList Cita_BookCitation_FindAllEditors_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllExperiments(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllExperiments_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllExperiments_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllExperiments_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllExperiments_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllExperiments_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMethods(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMethods_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMethods_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMethods_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMethods_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllMethods_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolSystems(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolSystems_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolSystems_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolSystems_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolSystems_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllMolSystems_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolecules(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolecules_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolecules_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolecules_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllMolecules_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllMolecules_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrEntries(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
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
extern ApiList Cita_BookCitation_FindAllNmrEntriesPrimary_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrEntries_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrEntries_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrEntries_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrEntries_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllNmrEntries_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrProbes(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrProbes_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrProbes_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrProbes_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrProbes_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllNmrProbes_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllNmrSpectrometers_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllProtocols(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllProtocols_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllProtocols_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllProtocols_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllProtocols_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllProtocols_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllRatioShiftReferences_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets_keyval0(Cita_BookCitation self);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllSampleConditionSets_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllShiftReferences(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllShiftReferences_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllShiftReferences_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllShiftReferences_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllShiftReferences_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllShiftReferences_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSoftware(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSoftware_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSoftware_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSoftware_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllSoftware_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllSoftware_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargetGroups(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargetGroups_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargetGroups_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargetGroups_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargetGroups_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllTargetGroups_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargets(Cita_BookCitation self, ApiMap conditions);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargets_keyval0(Cita_BookCitation self);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargets_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargets_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cita_BookCitation_FindAllTargets_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
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
extern ApiSet Cita_BookCitation_FindAllTargets_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData_keyval0(Cita_BookCitation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
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
extern Impl_ApplicationData Cita_BookCitation_FindFirstApplicationData_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstAuthor(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstAuthor_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstAuthor_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstAuthor_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstAuthor_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
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
extern Affi_Person Cita_BookCitation_FindFirstAuthor_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_BookCitation_FindFirstDataList(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_BookCitation_FindFirstDataList_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_BookCitation_FindFirstDataList_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_BookCitation_FindFirstDataList_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DataList Cita_BookCitation_FindFirstDataList_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
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
extern Nmr_DataList Cita_BookCitation_FindFirstDataList_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstEditor(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstEditor_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstEditor_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstEditor_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Cita_BookCitation_FindFirstEditor_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_BookCitation self
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
extern Affi_Person Cita_BookCitation_FindFirstEditor_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
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
extern Nmr_Experiment Cita_BookCitation_FindFirstExperiment_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_BookCitation_FindFirstMethod(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_BookCitation_FindFirstMethod_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_BookCitation_FindFirstMethod_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_BookCitation_FindFirstMethod_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Cita_BookCitation_FindFirstMethod_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_BookCitation self
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
extern Meth_Method Cita_BookCitation_FindFirstMethod_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
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
extern Mols_MolSystem Cita_BookCitation_FindFirstMolSystem_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_BookCitation self
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
extern Mole_Molecule Cita_BookCitation_FindFirstMolecule_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_BookCitation self
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
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntryPrimary_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
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
extern Entr_Entry Cita_BookCitation_FindFirstNmrEntry_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_BookCitation self
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
extern Inst_NmrProbe Cita_BookCitation_FindFirstNmrProbe_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
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
extern Inst_NmrSpectrometer Cita_BookCitation_FindFirstNmrSpectrometer_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
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
extern Prot_Protocol Cita_BookCitation_FindFirstProtocol_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
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
extern Nmr_ShiftReference Cita_BookCitation_FindFirstRatioShiftReference_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet_keyval0(Cita_BookCitation self);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
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
extern Nmr_SampleConditionSet Cita_BookCitation_FindFirstSampleConditionSet_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
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
extern Nmr_ShiftReference Cita_BookCitation_FindFirstShiftReference_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_BookCitation_FindFirstSoftware(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_BookCitation_FindFirstSoftware_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_BookCitation_FindFirstSoftware_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_BookCitation_FindFirstSoftware_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Cita_BookCitation_FindFirstSoftware_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_BookCitation self
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
extern Meth_Software Cita_BookCitation_FindFirstSoftware_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_BookCitation_FindFirstTarget(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup(Cita_BookCitation self, ApiMap conditions);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
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
extern Targ_TargetGroup Cita_BookCitation_FindFirstTargetGroup_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_BookCitation_FindFirstTarget_keyval0(Cita_BookCitation self);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_BookCitation_FindFirstTarget_keyval1(Cita_BookCitation self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_BookCitation_FindFirstTarget_keyval2(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Cita_BookCitation_FindFirstTarget_keyval3(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_BookCitation self
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
extern Targ_Target Cita_BookCitation_FindFirstTarget_keyval4(Cita_BookCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Citation.BookCitation
  @param  Cita_BookCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cita_BookCitation_Get(Cita_BookCitation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_BookCitation self
  @returns   the result
**/
extern Acco_AccessObject Cita_BookCitation_GetAccess(Cita_BookCitation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetApplicationData(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetAuthors(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.bookSeries

Series of which 
book forms part
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetBookSeries(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.bookTitle

Title of book
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetBookTitle(Cita_BookCitation self);

/**
  GetByKey for ccp.general.Citation.BookCitation
  @param  Cita_BookCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cita_BookCitation Cita_BookCitation_GetByKey(Cita_BookCitation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetCasAbstractCode(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_BookCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_BookCitation_GetCitationStore(Cita_BookCitation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetClassName(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetDataLists(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetDetails(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetDoi(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetEditors(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetExperiments(Cita_BookCitation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetFieldNames(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetFirstPage(Cita_BookCitation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiBoolean Cita_BookCitation_GetInConstructor(Cita_BookCitation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiBoolean Cita_BookCitation_GetIsDeleted(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.isbn

ISBN code for book
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetIsbn(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetKeywords(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetLastPage(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetMedlineUiCode(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetMethods(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetMolSystems(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetMolecules(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetNmrEntries(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_GetNmrEntriesPrimary(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetNmrProbes(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetNmrSpectrometers(Cita_BookCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetPackageName(Cita_BookCitation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetPackageShortName(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.parent

link to parent object - 
synonym for citationStore
  @param  Cita_BookCitation self
  @returns   the result
**/
extern Cita_CitationStore Cita_BookCitation_GetParent(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetProtocols(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetPubMedId(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.publisher

Book publisher
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetPublisher(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.publisherCity

City of book 
publisher
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetPublisherCity(Cita_BookCitation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetQualifiedName(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetRatioShiftReferences(Cita_BookCitation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern Impl_MemopsRoot Cita_BookCitation_GetRoot(Cita_BookCitation self);

/**
  Get for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetSampleConditionSets(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiInteger Cita_BookCitation_GetSerial(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetShiftReferences(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetSoftware(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetStatus(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetTargetGroups(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiSet Cita_BookCitation_GetTargets(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetTitle(Cita_BookCitation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern Impl_TopObject Cita_BookCitation_GetTopObject(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.BookCitation.volume

Volume 'number' (not 
an integer)
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiString Cita_BookCitation_GetVolume(Cita_BookCitation self);

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiInteger Cita_BookCitation_GetYear(Cita_BookCitation self);

/**
  Constructor for ccp.general.Citation.BookCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cita_BookCitation Cita_BookCitation_Init(Cita_CitationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Citation.BookCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
extern Cita_BookCitation Cita_BookCitation_Init_reqd(Cita_CitationStore parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  Impl_ApplicationData value
**/
extern void *Cita_BookCitation_RemoveApplicationData(Cita_BookCitation self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  Affi_Person value
**/
extern void *Cita_BookCitation_RemoveAuthor(Cita_BookCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.editors

People who are editors 
of Citation
  @param  Cita_BookCitation self
  @param  Affi_Person value
**/
extern void *Cita_BookCitation_RemoveEditor(Cita_BookCitation self, Affi_Person value);

/**
  Remove for ccp.general.Citation.Citation.keywords

Keywords 
characterising Citation
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_RemoveKeyword(Cita_BookCitation self, ApiString value);

/**
  Remove for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @param  Mols_MolSystem value
**/
extern void *Cita_BookCitation_RemoveMolSystem(Cita_BookCitation self, Mols_MolSystem value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  Entr_Entry value
**/
extern void *Cita_BookCitation_RemoveNmrEntry(Cita_BookCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  Entr_Entry value
**/
extern void *Cita_BookCitation_RemoveNmrEntryPrimary(Cita_BookCitation self, Entr_Entry value);

/**
  Remove for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @param  Prot_Protocol value
**/
extern void *Cita_BookCitation_RemoveProtocol(Cita_BookCitation self, Prot_Protocol value);

/**
  Remove for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @param  Nmr_ShiftReference value
**/
extern void *Cita_BookCitation_RemoveShiftReference(Cita_BookCitation self, Nmr_ShiftReference value);

/**
  Remove for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  Targ_Target value
**/
extern void *Cita_BookCitation_RemoveTarget(Cita_BookCitation self, Targ_Target value);

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  Targ_TargetGroup value
**/
extern void *Cita_BookCitation_RemoveTargetGroup(Cita_BookCitation self, Targ_TargetGroup value);

/**
  SetAttr for ccp.general.Citation.BookCitation
  @param  Cita_BookCitation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cita_BookCitation_Set(Cita_BookCitation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_BookCitation self
  @param  Acco_AccessObject value
**/
extern void *Cita_BookCitation_SetAccess(Cita_BookCitation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_BookCitation self
  @param  ApiList values
**/
extern void *Cita_BookCitation_SetApplicationData(Cita_BookCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_BookCitation self
  @param  ApiList values
**/
extern void *Cita_BookCitation_SetAuthors(Cita_BookCitation self, ApiList values);

/**
  Set for ccp.general.Citation.BookCitation.bookSeries

Series of which 
book forms part
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetBookSeries(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.BookCitation.bookTitle

Title of book
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetBookTitle(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetCasAbstractCode(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetDataLists(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetDetails(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetDoi(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_BookCitation self
  @param  ApiList values
**/
extern void *Cita_BookCitation_SetEditors(Cita_BookCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetExperiments(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetFirstPage(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.BookCitation.isbn

ISBN code for book
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetIsbn(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_BookCitation self
  @param  ApiList values
**/
extern void *Cita_BookCitation_SetKeywords(Cita_BookCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetLastPage(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetMedlineUiCode(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetMethods(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetMolSystems(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetMolecules(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetNmrEntries(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_BookCitation self
  @param  ApiList values
**/
extern void *Cita_BookCitation_SetNmrEntriesPrimary(Cita_BookCitation self, ApiList values);

/**
  Set for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetNmrProbes(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetNmrSpectrometers(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetProtocols(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetPubMedId(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.BookCitation.publisher

Book publisher
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetPublisher(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.BookCitation.publisherCity

City of book 
publisher
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetPublisherCity(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetRatioShiftReferences(Cita_BookCitation self, ApiSet values);

/**
  Set for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetSampleConditionSets(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_BookCitation self
  @param  ApiInteger value
**/
extern void *Cita_BookCitation_SetSerial(Cita_BookCitation self, ApiInteger value);

/**
  Set for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetShiftReferences(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetSoftware(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetStatus(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetTargetGroups(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @param  ApiSet values
**/
extern void *Cita_BookCitation_SetTargets(Cita_BookCitation self, ApiSet values);

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetTitle(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.BookCitation.volume

Volume 'number' (not 
an integer)
  @param  Cita_BookCitation self
  @param  ApiString value
**/
extern void *Cita_BookCitation_SetVolume(Cita_BookCitation self, ApiString value);

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_BookCitation self
  @param  ApiInteger value
**/
extern void *Cita_BookCitation_SetYear(Cita_BookCitation self, ApiInteger value);

/**
  Sorted for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedDataLists(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedExperiments(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedMethods(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedMolSystems(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedMolecules(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedNmrEntries(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedNmrProbes(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedNmrSpectrometers(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedProtocols(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedRatioShiftReferences(Cita_BookCitation self);

/**
  Sorted for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedSampleConditionSets(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedShiftReferences(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedSoftware(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedTargetGroups(Cita_BookCitation self);

/**
  Sorted for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_BookCitation self
  @returns   the result
**/
extern ApiList Cita_BookCitation_SortedTargets(Cita_BookCitation self);

#endif /* __incl__ccp_api_general_Citation_BookCitation_h__ */
