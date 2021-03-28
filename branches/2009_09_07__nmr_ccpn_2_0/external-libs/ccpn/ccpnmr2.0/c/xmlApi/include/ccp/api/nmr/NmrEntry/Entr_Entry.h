
#ifndef __incl__ccp_api_nmr_NmrEntry_Entry_h__
#define __incl__ccp_api_nmr_NmrEntry_Entry_h__

#include "ccp.h"

/*
  Deposition (entry) for deposition into BMRB (NB may be used also for other depositions?).
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  Impl_ApplicationData value
**/
extern void *Entr_Entry_AddApplicationData(Entr_Entry self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  Affi_Person value
**/
extern void *Entr_Entry_AddAuthor(Entr_Entry self, Affi_Person value);

/**
  Add for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @param  Affi_Person value
**/
extern void *Entr_Entry_AddContactPerson(Entr_Entry self, Affi_Person value);

/**
  Add for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  Nmr_DerivedDataList value
**/
extern void *Entr_Entry_AddDerivedDataList(Entr_Entry self, Nmr_DerivedDataList value);

/**
  Add for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @param  Nmr_Experiment value
**/
extern void *Entr_Entry_AddExperiment(Entr_Entry self, Nmr_Experiment value);

/**
  Add for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @param  Affi_Group value
**/
extern void *Entr_Entry_AddLaboratory(Entr_Entry self, Affi_Group value);

/**
  Add for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Entr_Entry_AddMeasurementList(Entr_Entry self, Nmr_AbstractMeasurementList value);

/**
  Add for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
extern void *Entr_Entry_AddOtherCitation(Entr_Entry self, Cita_Citation value);

/**
  Add for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @param  Meth_Software value
**/
extern void *Entr_Entry_AddSoftware(Entr_Entry self, Meth_Software value);

/**
  Add for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureAnalysis value
**/
extern void *Entr_Entry_AddStructureAnalysis(Entr_Entry self, Nmr_StructureAnalysis value);

/**
  Add for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureGeneration value
**/
extern void *Entr_Entry_AddStructureGeneration(Entr_Entry self, Nmr_StructureGeneration value);

/**
  Add for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  Mols_StructureGroup value
**/
extern void *Entr_Entry_AddStructureGroup(Entr_Entry self, Mols_StructureGroup value);

/**
  CheckAllValid for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean complete
**/
extern void *Entr_Entry_CheckAllValid(Entr_Entry self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean complete
**/
extern void *Entr_Entry_CheckValid(Entr_Entry self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllApplicationData(Entr_Entry self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllApplicationData_keyval0(Entr_Entry self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllApplicationData_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllApplicationData_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllApplicationData_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
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
extern ApiList Entr_Entry_FindAllApplicationData_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllAuthors(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllAuthors_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllAuthors_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllAuthors_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_Entry_FindAllAuthors_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
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
extern ApiList Entr_Entry_FindAllAuthors_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllContactPersons(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllContactPersons_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllContactPersons_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllContactPersons_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllContactPersons_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllContactPersons_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllDerivedDataLists(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllDerivedDataLists_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllDerivedDataLists_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllDerivedDataLists_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllDerivedDataLists_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllDerivedDataLists_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllExperiments(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllExperiments_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllExperiments_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllExperiments_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllExperiments_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllExperiments_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllLaboratories(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllLaboratories_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllLaboratories_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllLaboratories_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllLaboratories_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllLaboratories_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllMeasurementLists(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllMeasurementLists_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllMeasurementLists_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllMeasurementLists_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllMeasurementLists_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllMeasurementLists_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllOtherCitations(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllOtherCitations_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllOtherCitations_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllOtherCitations_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllOtherCitations_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllOtherCitations_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllRelatedEntries(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllRelatedEntries_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllRelatedEntries_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllRelatedEntries_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllRelatedEntries_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllRelatedEntries_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllSoftware(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllSoftware_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllSoftware_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllSoftware_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllSoftware_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllSoftware_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureAnalyses(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureAnalyses_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureAnalyses_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureAnalyses_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureAnalyses_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllStructureAnalyses_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGenerations(Entr_Entry self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGenerations_keyval0(Entr_Entry self);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGenerations_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGenerations_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGenerations_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllStructureGenerations_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGroups(Entr_Entry self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGroups_keyval0(Entr_Entry self);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGroups_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGroups_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_Entry_FindAllStructureGroups_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
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
extern ApiSet Entr_Entry_FindAllStructureGroups_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval0(Entr_Entry self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
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
extern Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstAuthor(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstAuthor_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstAuthor_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstAuthor_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstAuthor_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
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
extern Affi_Person Entr_Entry_FindFirstAuthor_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstContactPerson(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstContactPerson_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstContactPerson_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstContactPerson_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Entr_Entry_FindFirstContactPerson_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
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
extern Affi_Person Entr_Entry_FindFirstContactPerson_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
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
extern Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Entr_Entry_FindFirstExperiment(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
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
extern Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Group Entr_Entry_FindFirstLaboratory(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Group Entr_Entry_FindFirstLaboratory_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Group Entr_Entry_FindFirstLaboratory_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Group Entr_Entry_FindFirstLaboratory_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Group Entr_Entry_FindFirstLaboratory_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
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
extern Affi_Group Entr_Entry_FindFirstLaboratory_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
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
extern Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Entr_Entry_FindFirstOtherCitation(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
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
extern Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
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
extern Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Entr_Entry_FindFirstSoftware(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Entr_Entry_FindFirstSoftware_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Entr_Entry_FindFirstSoftware_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Entr_Entry_FindFirstSoftware_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Software Entr_Entry_FindFirstSoftware_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
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
extern Meth_Software Entr_Entry_FindFirstSoftware_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval0(Entr_Entry self);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
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
extern Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval0(Entr_Entry self);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
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
extern Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup(Entr_Entry self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval0(Entr_Entry self);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval1(Entr_Entry self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
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
extern Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Entr_Entry_Get(Entr_Entry self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Entry self
  @returns   the result
**/
extern Acco_AccessObject Entr_Entry_GetAccess(Entr_Entry self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_GetApplicationData(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_GetAuthors(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.bmrbProcessing

BioMagResBank processing 
information
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetBmrbProcessing(Entr_Entry self);

/**
  GetByKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Entr_Entry Entr_Entry_GetByKey(Entr_Entry self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetClassName(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetContactPersons(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetDerivedDataLists(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetDetails(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.experimentalSource

Organism source 
actually used to produce the molecule being investigated
  @param  Entr_Entry self
  @returns   the result
**/
extern Taxo_NaturalSource Entr_Entry_GetExperimentalSource(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetExperiments(Entr_Entry self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_GetFieldNames(Entr_Entry self);

/**
  GetFullKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Entr_Entry_GetFullKey(Entr_Entry self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiBoolean Entr_Entry_GetInConstructor(Entr_Entry self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiBoolean Entr_Entry_GetIsDeleted(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetLaboratories(Entr_Entry self);

/**
  GetLocalKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @returns  Local object key
**/
extern ApiObject Entr_Entry_GetLocalKey(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetMeasurementLists(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.molSystem

MolSystem definign the entry
  @param  Entr_Entry self
  @returns   the result
**/
extern Mols_MolSystem Entr_Entry_GetMolSystem(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.name

name of Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetName(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.naturalSource

Natural Source of 
MolSystem being deposited in entry
  @param  Entr_Entry self
  @returns   the result
**/
extern Taxo_NaturalSource Entr_Entry_GetNaturalSource(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.nmrEntryStore

parent link
  @param  Entr_Entry self
  @returns   the result
**/
extern Entr_NmrEntryStore Entr_Entry_GetNmrEntryStore(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetOtherCitations(Entr_Entry self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetPackageName(Entr_Entry self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetPackageShortName(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.parent

link to parent object - synonym 
for nmrEntryStore
  @param  Entr_Entry self
  @returns   the result
**/
extern Entr_NmrEntryStore Entr_Entry_GetParent(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.primaryCitation

Primary citation for 
BMRB entry
  @param  Entr_Entry self
  @returns   the result
**/
extern Cita_Citation Entr_Entry_GetPrimaryCitation(Entr_Entry self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetQualifiedName(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetRelatedEntries(Entr_Entry self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Entr_Entry self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_Entry_GetRoot(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetSoftware(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetStructureAnalyses(Entr_Entry self);

/**
  Get for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetStructureGenerations(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiSet Entr_Entry_GetStructureGroups(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.study

Study that Entry is part of
  @param  Entr_Entry self
  @returns   the result
**/
extern Entr_Study Entr_Entry_GetStudy(Entr_Entry self);

/**
  Get for ccp.nmr.NmrEntry.Entry.title

Official title of Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiString Entr_Entry_GetTitle(Entr_Entry self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Entr_Entry self
  @returns   the result
**/
extern Impl_TopObject Entr_Entry_GetTopObject(Entr_Entry self);

/**
  Constructor for ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_Entry Entr_Entry_Init(Entr_NmrEntryStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore parent
  @param  char * name
  @returns  the new object
**/
extern Entr_Entry Entr_Entry_Init_reqd(Entr_NmrEntryStore parent, char * name);

/**
  Factory function to create ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_RelatedEntry Entr_Entry_NewRelatedEntry(Entr_Entry self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry self
  @param  char * dbId
  @returns  the new object
**/
extern Entr_RelatedEntry Entr_Entry_NewRelatedEntry_reqd(Entr_Entry self, char * dbId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  Impl_ApplicationData value
**/
extern void *Entr_Entry_RemoveApplicationData(Entr_Entry self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  Affi_Person value
**/
extern void *Entr_Entry_RemoveAuthor(Entr_Entry self, Affi_Person value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  Affi_Person value
**/
extern void *Entr_Entry_RemoveContactPerson(Entr_Entry self, Affi_Person value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  Nmr_DerivedDataList value
**/
extern void *Entr_Entry_RemoveDerivedDataList(Entr_Entry self, Nmr_DerivedDataList value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  Nmr_Experiment value
**/
extern void *Entr_Entry_RemoveExperiment(Entr_Entry self, Nmr_Experiment value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  Affi_Group value
**/
extern void *Entr_Entry_RemoveLaboratory(Entr_Entry self, Affi_Group value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Entr_Entry_RemoveMeasurementList(Entr_Entry self, Nmr_AbstractMeasurementList value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
extern void *Entr_Entry_RemoveOtherCitation(Entr_Entry self, Cita_Citation value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  Meth_Software value
**/
extern void *Entr_Entry_RemoveSoftware(Entr_Entry self, Meth_Software value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureAnalysis value
**/
extern void *Entr_Entry_RemoveStructureAnalysis(Entr_Entry self, Nmr_StructureAnalysis value);

/**
  Remove for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureGeneration value
**/
extern void *Entr_Entry_RemoveStructureGeneration(Entr_Entry self, Nmr_StructureGeneration value);

/**
  Remove for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  Mols_StructureGroup value
**/
extern void *Entr_Entry_RemoveStructureGroup(Entr_Entry self, Mols_StructureGroup value);

/**
  SetAttr for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Entr_Entry_Set(Entr_Entry self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Entry self
  @param  Acco_AccessObject value
**/
extern void *Entr_Entry_SetAccess(Entr_Entry self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  ApiList values
**/
extern void *Entr_Entry_SetApplicationData(Entr_Entry self, ApiList values);

/**
  Set for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiList values
**/
extern void *Entr_Entry_SetAuthors(Entr_Entry self, ApiList values);

/**
  Set for ccp.nmr.NmrEntry.Entry.bmrbProcessing

BioMagResBank processing 
information
  @param  Entr_Entry self
  @param  ApiString value
**/
extern void *Entr_Entry_SetBmrbProcessing(Entr_Entry self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetContactPersons(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetDerivedDataLists(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Entry self
  @param  ApiString value
**/
extern void *Entr_Entry_SetDetails(Entr_Entry self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.Entry.experimentalSource

Organism source 
actually used to produce the molecule being investigated
  @param  Entr_Entry self
  @param  Taxo_NaturalSource value
**/
extern void *Entr_Entry_SetExperimentalSource(Entr_Entry self, Taxo_NaturalSource value);

/**
  Set for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetExperiments(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetLaboratories(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetMeasurementLists(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.molSystem

MolSystem definign the entry
  @param  Entr_Entry self
  @param  Mols_MolSystem value
**/
extern void *Entr_Entry_SetMolSystem(Entr_Entry self, Mols_MolSystem value);

/**
  Set for ccp.nmr.NmrEntry.Entry.name

name of Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
extern void *Entr_Entry_SetName(Entr_Entry self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.Entry.naturalSource

Natural Source of 
MolSystem being deposited in entry
  @param  Entr_Entry self
  @param  Taxo_NaturalSource value
**/
extern void *Entr_Entry_SetNaturalSource(Entr_Entry self, Taxo_NaturalSource value);

/**
  Set for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetOtherCitations(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.primaryCitation

Primary citation for 
BMRB entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
extern void *Entr_Entry_SetPrimaryCitation(Entr_Entry self, Cita_Citation value);

/**
  Set for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetSoftware(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetStructureAnalyses(Entr_Entry self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetStructureGenerations(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
extern void *Entr_Entry_SetStructureGroups(Entr_Entry self, ApiSet values);

/**
  Set for ccp.nmr.NmrEntry.Entry.study

Study that Entry is part of
  @param  Entr_Entry self
  @param  Entr_Study value
**/
extern void *Entr_Entry_SetStudy(Entr_Entry self, Entr_Study value);

/**
  Set for ccp.nmr.NmrEntry.Entry.title

Official title of Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
extern void *Entr_Entry_SetTitle(Entr_Entry self, ApiString value);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedContactPersons(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.derivedDataLists

Bmrb Entries for 
StructureGroup
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedDerivedDataLists(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedExperiments(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedLaboratories(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedMeasurementLists(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedOtherCitations(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedRelatedEntries(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedSoftware(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedStructureAnalyses(Entr_Entry self);

/**
  Sorted for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedStructureGenerations(Entr_Entry self);

/**
  Sorted for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns   the result
**/
extern ApiList Entr_Entry_SortedStructureGroups(Entr_Entry self);

#endif /* __incl__ccp_api_nmr_NmrEntry_Entry_h__ */
