
#ifndef __incl__ccp_api_general_Affiliation_Person_h__
#define __incl__ccp_api_general_Affiliation_Person_h__

#include "ccp.h"

/*
  An individual person.
*/

/* package ccp.api.general.Affiliation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  Impl_ApplicationData value
**/
extern void *Affi_Person_AddApplicationData(Affi_Person self, Impl_ApplicationData value);

/**
  Add for ccp.general.Affiliation.Person.authorCitations

Citations where 
Person is author
  @param  Affi_Person self
  @param  Cita_Citation value
**/
extern void *Affi_Person_AddAuthorCitation(Affi_Person self, Cita_Citation value);

/**
  Add for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  Entr_Entry value
**/
extern void *Affi_Person_AddAuthoredEntry(Affi_Person self, Entr_Entry value);

/**
  Add for ccp.general.Affiliation.Person.contactEntries

BMRBentries where 
person is contact person
  @param  Affi_Person self
  @param  Entr_Entry value
**/
extern void *Affi_Person_AddContactEntry(Affi_Person self, Entr_Entry value);

/**
  Add for ccp.general.Affiliation.Person.createdExps

Experiments created 
by Person
  @param  Affi_Person self
  @param  Expe_Experiment value
**/
extern void *Affi_Person_AddCreatedExp(Affi_Person self, Expe_Experiment value);

/**
  Add for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  Prot_Protocol value
**/
extern void *Affi_Person_AddCreatedProtocol(Affi_Person self, Prot_Protocol value);

/**
  Add for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  Expe_Experiment value
**/
extern void *Affi_Person_AddEditedExp(Affi_Person self, Expe_Experiment value);

/**
  Add for ccp.general.Affiliation.Person.editedProtocols

Protocols last 
modified by Person.
  @param  Affi_Person self
  @param  Prot_Protocol value
**/
extern void *Affi_Person_AddEditedProtocol(Affi_Person self, Prot_Protocol value);

/**
  Add for ccp.general.Affiliation.Person.editorCitations

Citations wher 
Person is editor
  @param  Affi_Person self
  @param  Cita_Citation value
**/
extern void *Affi_Person_AddEditorCitation(Affi_Person self, Cita_Citation value);

/**
  Add for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  Expb_ExpBlueprint value
**/
extern void *Affi_Person_AddExpBlueprint(Affi_Person self, Expb_ExpBlueprint value);

/**
  Add for ccp.general.Affiliation.Person.middleInitials

Middle initials 
(including first one).
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_AddMiddleInitial(Affi_Person self, ApiString value);

/**
  Add for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  Targ_Target value
**/
extern void *Affi_Person_AddTarget(Affi_Person self, Targ_Target value);

/**
  Add for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  Acco_User value
**/
extern void *Affi_Person_AddUser(Affi_Person self, Acco_User value);

/**
  CheckAllValid for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  ApiBoolean complete
**/
extern void *Affi_Person_CheckAllValid(Affi_Person self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  ApiBoolean complete
**/
extern void *Affi_Person_CheckValid(Affi_Person self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_Person_FindAllApplicationData(Affi_Person self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_Person_FindAllApplicationData_keyval0(Affi_Person self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_Person_FindAllApplicationData_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_Person_FindAllApplicationData_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_Person_FindAllApplicationData_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
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
extern ApiList Affi_Person_FindAllApplicationData_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthorCitations(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthorCitations_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthorCitations_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthorCitations_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthorCitations_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllAuthorCitations_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthoredEntries(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthoredEntries_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthoredEntries_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthoredEntries_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllAuthoredEntries_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllAuthoredEntries_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllContactEntries(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllContactEntries_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllContactEntries_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllContactEntries_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllContactEntries_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllContactEntries_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedExps(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedExps_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedExps_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedExps_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedExps_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllCreatedExps_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedProtocols(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedProtocols_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedProtocols_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedProtocols_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllCreatedProtocols_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllCreatedProtocols_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllDropAnnotations(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllDropAnnotations_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllDropAnnotations_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllDropAnnotations_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllDropAnnotations_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllDropAnnotations_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedExps(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedExps_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedExps_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedExps_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedExps_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllEditedExps_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedProtocols(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedProtocols_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedProtocols_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedProtocols_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditedProtocols_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllEditedProtocols_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditorCitations(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditorCitations_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditorCitations_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditorCitations_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllEditorCitations_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllEditorCitations_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllExpBlueprints(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllExpBlueprints_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllExpBlueprints_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllExpBlueprints_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllExpBlueprints_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllExpBlueprints_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllPersonInGroups(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllPersonInGroups_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllPersonInGroups_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllPersonInGroups_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllPersonInGroups_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllPersonInGroups_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllTargets(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllTargets_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllTargets_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllTargets_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllTargets_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllTargets_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllUsers(Affi_Person self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllUsers_keyval0(Affi_Person self);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllUsers_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllUsers_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_Person_FindAllUsers_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
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
extern ApiSet Affi_Person_FindAllUsers_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData(Affi_Person self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData_keyval0(Affi_Person self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
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
extern Impl_ApplicationData Affi_Person_FindFirstApplicationData_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstAuthorCitation(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstAuthorCitation_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstAuthorCitation_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstAuthorCitation_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstAuthorCitation_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
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
extern Cita_Citation Affi_Person_FindFirstAuthorCitation_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry(Affi_Person self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry_keyval0(Affi_Person self);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Affiliation.Person.authoredEntries

BMRBentries authored by 
person.
  @param  Affi_Person self
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
extern Entr_Entry Affi_Person_FindFirstAuthoredEntry_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstContactEntry(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstContactEntry_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstContactEntry_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstContactEntry_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Affi_Person_FindFirstContactEntry_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
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
extern Entr_Entry Affi_Person_FindFirstContactEntry_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstCreatedExp(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstCreatedExp_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstCreatedExp_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstCreatedExp_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstCreatedExp_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
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
extern Expe_Experiment Affi_Person_FindFirstCreatedExp_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
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
extern Prot_Protocol Affi_Person_FindFirstCreatedProtocol_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
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
extern Cryz_DropAnnotation Affi_Person_FindFirstDropAnnotation_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstEditedExp(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstEditedExp_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstEditedExp_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstEditedExp_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Affi_Person_FindFirstEditedExp_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.editedExps

Experiments 
last modified by Person
  @param  Affi_Person self
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
extern Expe_Experiment Affi_Person_FindFirstEditedExp_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
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
extern Prot_Protocol Affi_Person_FindFirstEditedProtocol_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstEditorCitation(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstEditorCitation_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstEditorCitation_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstEditorCitation_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Affi_Person_FindFirstEditorCitation_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
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
extern Cita_Citation Affi_Person_FindFirstEditorCitation_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint(Affi_Person self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint_keyval0(Affi_Person self);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints owned by a 
Person.
  @param  Affi_Person self
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
extern Expb_ExpBlueprint Affi_Person_FindFirstExpBlueprint_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.personInGroups

child link 
to class PersonInGroup
  @param  Affi_Person self
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
extern Affi_PersonInGroup Affi_Person_FindFirstPersonInGroup_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Affi_Person_FindFirstTarget(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Affi_Person_FindFirstTarget_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Affi_Person_FindFirstTarget_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Affi_Person_FindFirstTarget_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Affi_Person_FindFirstTarget_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
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
extern Targ_Target Affi_Person_FindFirstTarget_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Acco_User Affi_Person_FindFirstUser(Affi_Person self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @returns  the first value that satisfies the conditions 
**/
extern Acco_User Affi_Person_FindFirstUser_keyval0(Affi_Person self);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Acco_User Affi_Person_FindFirstUser_keyval1(Affi_Person self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Acco_User Affi_Person_FindFirstUser_keyval2(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Acco_User Affi_Person_FindFirstUser_keyval3(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
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
extern Acco_User Affi_Person_FindFirstUser_keyval4(Affi_Person self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Affi_Person_Get(Affi_Person self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Person self
  @returns   the result
**/
extern Acco_AccessObject Affi_Person_GetAccess(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.affiliationStore

parent link
  @param  Affi_Person self
  @returns   the result
**/
extern Affi_AffiliationStore Affi_Person_GetAffiliationStore(Affi_Person self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_GetApplicationData(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.authorCitations

Citations where 
Person is author
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetAuthorCitations(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetAuthoredEntries(Affi_Person self);

/**
  GetByKey for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Affi_Person Affi_Person_GetByKey(Affi_Person self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetClassName(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.contactEntries

BMRBentries where 
person is contact person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetContactEntries(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.createdExps

Experiments created 
by Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetCreatedExps(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetCreatedProtocols(Affi_Person self);

/**
  Get for 
ccp.general.Affiliation.Person.currentPersonInGroup

PersonInGroup 
record describing where the person is currently located. To get the 
current group, do self.currentPersonInGroup.group
  @param  Affi_Person self
  @returns   the result
**/
extern Affi_PersonInGroup Affi_Person_GetCurrentPersonInGroup(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetDropAnnotations(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetEditedExps(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.editedProtocols

Protocols last 
modified by Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetEditedProtocols(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.editorCitations

Citations wher 
Person is editor
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetEditorCitations(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetExpBlueprints(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.familyName

Family name ('last 
name' for western names).
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetFamilyName(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.familyTitle

Family title (e.g. 
Jr.)
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetFamilyTitle(Affi_Person self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_GetFieldNames(Affi_Person self);

/**
  getter for derived attribute firstInitial
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetFirstInitial(Affi_Person self);

/**
  GetFullKey for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Affi_Person_GetFullKey(Affi_Person self, ApiBoolean useGuid);

/**
  Get for ccp.general.Affiliation.Person.givenName

Given name ('first 
name' for western names).
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetGivenName(Affi_Person self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiBoolean Affi_Person_GetInConstructor(Affi_Person self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiBoolean Affi_Person_GetIsDeleted(Affi_Person self);

/**
  GetLocalKey for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @returns  Local object key
**/
extern ApiObject Affi_Person_GetLocalKey(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.middleInitials

Middle initials 
(including first one).
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_GetMiddleInitials(Affi_Person self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetPackageName(Affi_Person self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetPackageShortName(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.parent

link to parent object - 
synonym for affiliationStore
  @param  Affi_Person self
  @returns   the result
**/
extern Affi_AffiliationStore Affi_Person_GetParent(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetPersonInGroups(Affi_Person self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetQualifiedName(Affi_Person self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Affi_Person self
  @returns   the result
**/
extern Impl_MemopsRoot Affi_Person_GetRoot(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Affi_Person self
  @returns   the result
**/
extern ApiInteger Affi_Person_GetSerial(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetTargets(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.title

Title, 'Mr.', 'Mrs.', 
'Ms.', 'Dr.', 'Professor',...
  @param  Affi_Person self
  @returns   the result
**/
extern ApiString Affi_Person_GetTitle(Affi_Person self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Affi_Person self
  @returns   the result
**/
extern Impl_TopObject Affi_Person_GetTopObject(Affi_Person self);

/**
  Get for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiSet Affi_Person_GetUsers(Affi_Person self);

/**
  Constructor for ccp.general.Affiliation.Person
  @param  Affi_AffiliationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Affi_Person Affi_Person_Init(Affi_AffiliationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Affiliation.Person
  @param  Affi_AffiliationStore parent
  @param  char * familyName
  @returns  the new object
**/
extern Affi_Person Affi_Person_Init_reqd(Affi_AffiliationStore parent, char * familyName);

/**
  Factory function to create ccp.general.Affiliation.PersonInGroup
  @param  Affi_Person self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Affi_PersonInGroup Affi_Person_NewPersonInGroup(Affi_Person self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Affiliation.PersonInGroup
  @param  Affi_Person self
  @param  Affi_Group group
  @returns  the new object
**/
extern Affi_PersonInGroup Affi_Person_NewPersonInGroup_reqd(Affi_Person self, Affi_Group group);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  Impl_ApplicationData value
**/
extern void *Affi_Person_RemoveApplicationData(Affi_Person self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @param  Cita_Citation value
**/
extern void *Affi_Person_RemoveAuthorCitation(Affi_Person self, Cita_Citation value);

/**
  Remove for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  Entr_Entry value
**/
extern void *Affi_Person_RemoveAuthoredEntry(Affi_Person self, Entr_Entry value);

/**
  Remove for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @param  Entr_Entry value
**/
extern void *Affi_Person_RemoveContactEntry(Affi_Person self, Entr_Entry value);

/**
  Remove for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @param  Expe_Experiment value
**/
extern void *Affi_Person_RemoveCreatedExp(Affi_Person self, Expe_Experiment value);

/**
  Remove for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  Prot_Protocol value
**/
extern void *Affi_Person_RemoveCreatedProtocol(Affi_Person self, Prot_Protocol value);

/**
  Remove for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  Expe_Experiment value
**/
extern void *Affi_Person_RemoveEditedExp(Affi_Person self, Expe_Experiment value);

/**
  Remove for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @param  Prot_Protocol value
**/
extern void *Affi_Person_RemoveEditedProtocol(Affi_Person self, Prot_Protocol value);

/**
  Remove for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @param  Cita_Citation value
**/
extern void *Affi_Person_RemoveEditorCitation(Affi_Person self, Cita_Citation value);

/**
  Remove for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  Expb_ExpBlueprint value
**/
extern void *Affi_Person_RemoveExpBlueprint(Affi_Person self, Expb_ExpBlueprint value);

/**
  Remove for ccp.general.Affiliation.Person.middleInitials

Middle 
initials (including first one).
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_RemoveMiddleInitial(Affi_Person self, ApiString value);

/**
  Remove for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  Targ_Target value
**/
extern void *Affi_Person_RemoveTarget(Affi_Person self, Targ_Target value);

/**
  Remove for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  Acco_User value
**/
extern void *Affi_Person_RemoveUser(Affi_Person self, Acco_User value);

/**
  SetAttr for ccp.general.Affiliation.Person
  @param  Affi_Person self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Affi_Person_Set(Affi_Person self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_Person self
  @param  Acco_AccessObject value
**/
extern void *Affi_Person_SetAccess(Affi_Person self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_Person self
  @param  ApiList values
**/
extern void *Affi_Person_SetApplicationData(Affi_Person self, ApiList values);

/**
  Set for ccp.general.Affiliation.Person.authorCitations

Citations where 
Person is author
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetAuthorCitations(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetAuthoredEntries(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.contactEntries

BMRBentries where 
person is contact person
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetContactEntries(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.createdExps

Experiments created 
by Person
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetCreatedExps(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetCreatedProtocols(Affi_Person self, ApiSet values);

/**
  Set for 
ccp.general.Affiliation.Person.currentPersonInGroup

PersonInGroup 
record describing where the person is currently located. To get the 
current group, do self.currentPersonInGroup.group
  @param  Affi_Person self
  @param  Affi_PersonInGroup value
**/
extern void *Affi_Person_SetCurrentPersonInGroup(Affi_Person self, Affi_PersonInGroup value);

/**
  Set for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetDropAnnotations(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetEditedExps(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.editedProtocols

Protocols last 
modified by Person.
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetEditedProtocols(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.editorCitations

Citations wher 
Person is editor
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetEditorCitations(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetExpBlueprints(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.familyName

Family name ('last 
name' for western names).
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_SetFamilyName(Affi_Person self, ApiString value);

/**
  Set for ccp.general.Affiliation.Person.familyTitle

Family title (e.g. 
Jr.)
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_SetFamilyTitle(Affi_Person self, ApiString value);

/**
  Set for ccp.general.Affiliation.Person.givenName

Given name ('first 
name' for western names).
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_SetGivenName(Affi_Person self, ApiString value);

/**
  Set for ccp.general.Affiliation.Person.middleInitials

Middle initials 
(including first one).
  @param  Affi_Person self
  @param  ApiList values
**/
extern void *Affi_Person_SetMiddleInitials(Affi_Person self, ApiList values);

/**
  Set for ccp.general.Affiliation.Person.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Affi_Person self
  @param  ApiInteger value
**/
extern void *Affi_Person_SetSerial(Affi_Person self, ApiInteger value);

/**
  Set for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetTargets(Affi_Person self, ApiSet values);

/**
  Set for ccp.general.Affiliation.Person.title

Title, 'Mr.', 'Mrs.', 
'Ms.', 'Dr.', 'Professor',...
  @param  Affi_Person self
  @param  ApiString value
**/
extern void *Affi_Person_SetTitle(Affi_Person self, ApiString value);

/**
  Set for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @param  ApiSet values
**/
extern void *Affi_Person_SetUsers(Affi_Person self, ApiSet values);

/**
  Sorted for ccp.general.Affiliation.Person.authorCitations

Citations 
where Person is author
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedAuthorCitations(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.authoredEntries

BMRBentries 
authored by person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedAuthoredEntries(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.contactEntries

BMRBentries 
where person is contact person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedContactEntries(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.createdExps

Experiments 
created by Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedCreatedExps(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.createdProtocols

Protocols 
created by Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedCreatedProtocols(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.dropAnnotations
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedDropAnnotations(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.editedExps

Experiments last 
modified by Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedEditedExps(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.editedProtocols

Protocols 
last modified by Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedEditedProtocols(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.editorCitations

Citations 
wher Person is editor
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedEditorCitations(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.expBlueprints

ExpBlueprints 
owned by a Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedExpBlueprints(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.personInGroups

child link to 
class PersonInGroup
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedPersonInGroups(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.targets

Targets created by 
Person.
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedTargets(Affi_Person self);

/**
  Sorted for ccp.general.Affiliation.Person.users

AcessControl.Users 
correponding to Person
  @param  Affi_Person self
  @returns   the result
**/
extern ApiList Affi_Person_SortedUsers(Affi_Person self);

#endif /* __incl__ccp_api_general_Affiliation_Person_h__ */
