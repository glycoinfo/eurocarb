
#ifndef __incl__ccp_api_general_Method_Software_h__
#define __incl__ccp_api_general_Method_Software_h__

#include "ccp.h"

/*
  Program used for some task or tasks.
*/

/* package ccp.api.general.Method */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  Impl_ApplicationData value
**/
extern void *Meth_Software_AddApplicationData(Meth_Software self, Impl_ApplicationData value);

/**
  Add for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  Cryz_DropAnnotation value
**/
extern void *Meth_Software_AddDropAnnotation(Meth_Software self, Cryz_DropAnnotation value);

/**
  Add for ccp.general.Method.Software.entries

BMRB entries where software 
is used
  @param  Meth_Software self
  @param  Entr_Entry value
**/
extern void *Meth_Software_AddEntry(Meth_Software self, Entr_Entry value);

/**
  Add for ccp.general.Method.Software.methods

Methods carried out using 
the Software.
  @param  Meth_Software self
  @param  Meth_Method value
**/
extern void *Meth_Software_AddMethod(Meth_Software self, Meth_Method value);

/**
  Add for ccp.general.Method.Software.tasks

Tasks carried out with the 
software.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_AddTask(Meth_Software self, ApiString value);

/**
  CheckAllValid for ccp.general.Method.Software
  @param  Meth_Software self
  @param  ApiBoolean complete
**/
extern void *Meth_Software_CheckAllValid(Meth_Software self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Method.Software
  @param  Meth_Software self
  @param  ApiBoolean complete
**/
extern void *Meth_Software_CheckValid(Meth_Software self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Software_FindAllApplicationData(Meth_Software self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Software_FindAllApplicationData_keyval0(Meth_Software self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Software_FindAllApplicationData_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Software_FindAllApplicationData_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Meth_Software_FindAllApplicationData_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
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
extern ApiList Meth_Software_FindAllApplicationData_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllCitations(Meth_Software self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllCitations_keyval0(Meth_Software self);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllCitations_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllCitations_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllCitations_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
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
extern ApiSet Meth_Software_FindAllCitations_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllDropAnnotations(Meth_Software self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllDropAnnotations_keyval0(Meth_Software self);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllDropAnnotations_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllDropAnnotations_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllDropAnnotations_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
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
extern ApiSet Meth_Software_FindAllDropAnnotations_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllEntries(Meth_Software self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllEntries_keyval0(Meth_Software self);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllEntries_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllEntries_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllEntries_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
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
extern ApiSet Meth_Software_FindAllEntries_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllMethods(Meth_Software self, ApiMap conditions);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllMethods_keyval0(Meth_Software self);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllMethods_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllMethods_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Meth_Software_FindAllMethods_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
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
extern ApiSet Meth_Software_FindAllMethods_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData(Meth_Software self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData_keyval0(Meth_Software self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
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
extern Impl_ApplicationData Meth_Software_FindFirstApplicationData_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Software_FindFirstCitation(Meth_Software self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Software_FindFirstCitation_keyval0(Meth_Software self);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Software_FindFirstCitation_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Software_FindFirstCitation_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Meth_Software_FindFirstCitation_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Software.citations

Citations 
describing software.
  @param  Meth_Software self
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
extern Cita_Citation Meth_Software_FindFirstCitation_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation(Meth_Software self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation_keyval0(Meth_Software self);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
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
extern Cryz_DropAnnotation Meth_Software_FindFirstDropAnnotation_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Meth_Software_FindFirstEntry(Meth_Software self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Meth_Software_FindFirstEntry_keyval0(Meth_Software self);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Meth_Software_FindFirstEntry_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Meth_Software_FindFirstEntry_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Meth_Software_FindFirstEntry_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
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
extern Entr_Entry Meth_Software_FindFirstEntry_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Meth_Software_FindFirstMethod(Meth_Software self, ApiMap conditions);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Meth_Software_FindFirstMethod_keyval0(Meth_Software self);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Meth_Software_FindFirstMethod_keyval1(Meth_Software self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Meth_Software_FindFirstMethod_keyval2(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Meth_Method Meth_Software_FindFirstMethod_keyval3(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
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
extern Meth_Method Meth_Software_FindFirstMethod_keyval4(Meth_Software self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Method.Software
  @param  Meth_Software self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Meth_Software_Get(Meth_Software self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Software self
  @returns   the result
**/
extern Acco_AccessObject Meth_Software_GetAccess(Meth_Software self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_GetApplicationData(Meth_Software self);

/**
  GetByKey for ccp.general.Method.Software
  @param  Meth_Software self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Meth_Software Meth_Software_GetByKey(Meth_Software self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiSet Meth_Software_GetCitations(Meth_Software self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetClassName(Meth_Software self);

/**
  Get for ccp.general.Method.Software.details

Free text containing notes, 
descriptive remarks, etc.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetDetails(Meth_Software self);

/**
  Get for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @returns   the result
**/
extern ApiSet Meth_Software_GetDropAnnotations(Meth_Software self);

/**
  Get for ccp.general.Method.Software.entries

BMRB entries where software 
is used
  @param  Meth_Software self
  @returns   the result
**/
extern ApiSet Meth_Software_GetEntries(Meth_Software self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_GetFieldNames(Meth_Software self);

/**
  GetFullKey for ccp.general.Method.Software
  @param  Meth_Software self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Meth_Software_GetFullKey(Meth_Software self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiBoolean Meth_Software_GetInConstructor(Meth_Software self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiBoolean Meth_Software_GetIsDeleted(Meth_Software self);

/**
  GetLocalKey for ccp.general.Method.Software
  @param  Meth_Software self
  @returns  Local object key
**/
extern ApiObject Meth_Software_GetLocalKey(Meth_Software self);

/**
  Get for ccp.general.Method.Software.methodStore

parent link
  @param  Meth_Software self
  @returns   the result
**/
extern Meth_MethodStore Meth_Software_GetMethodStore(Meth_Software self);

/**
  Get for ccp.general.Method.Software.methods

Methods carried out using 
the Software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiSet Meth_Software_GetMethods(Meth_Software self);

/**
  Get for ccp.general.Method.Software.name

name of Software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetName(Meth_Software self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetPackageName(Meth_Software self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetPackageShortName(Meth_Software self);

/**
  Get for ccp.general.Method.Software.parent

link to parent object - 
synonym for methodStore
  @param  Meth_Software self
  @returns   the result
**/
extern Meth_MethodStore Meth_Software_GetParent(Meth_Software self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetQualifiedName(Meth_Software self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Meth_Software self
  @returns   the result
**/
extern Impl_MemopsRoot Meth_Software_GetRoot(Meth_Software self);

/**
  Get for ccp.general.Method.Software.tasks

Tasks carried out with the 
software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_GetTasks(Meth_Software self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Meth_Software self
  @returns   the result
**/
extern Impl_TopObject Meth_Software_GetTopObject(Meth_Software self);

/**
  Get for ccp.general.Method.Software.vendorAddress

Address of vendor or 
software producer.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetVendorAddress(Meth_Software self);

/**
  Get for ccp.general.Method.Software.vendorName

Name of vendor or 
software producer.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetVendorName(Meth_Software self);

/**
  Get for ccp.general.Method.Software.vendorWebAddress

Web address (home 
page) of vendor or software producer.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetVendorWebAddress(Meth_Software self);

/**
  Get for ccp.general.Method.Software.version

Software version used.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiString Meth_Software_GetVersion(Meth_Software self);

/**
  Constructor for ccp.general.Method.Software
  @param  Meth_MethodStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Meth_Software Meth_Software_Init(Meth_MethodStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Method.Software
  @param  Meth_MethodStore parent
  @param  char * name
  @param  char * version
  @returns  the new object
**/
extern Meth_Software Meth_Software_Init_reqd(Meth_MethodStore parent, char * name, char * version);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  Impl_ApplicationData value
**/
extern void *Meth_Software_RemoveApplicationData(Meth_Software self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  Cryz_DropAnnotation value
**/
extern void *Meth_Software_RemoveDropAnnotation(Meth_Software self, Cryz_DropAnnotation value);

/**
  Remove for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @param  Entr_Entry value
**/
extern void *Meth_Software_RemoveEntry(Meth_Software self, Entr_Entry value);

/**
  Remove for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @param  Meth_Method value
**/
extern void *Meth_Software_RemoveMethod(Meth_Software self, Meth_Method value);

/**
  Remove for ccp.general.Method.Software.tasks

Tasks carried out with the 
software.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_RemoveTask(Meth_Software self, ApiString value);

/**
  SetAttr for ccp.general.Method.Software
  @param  Meth_Software self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Meth_Software_Set(Meth_Software self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Meth_Software self
  @param  Acco_AccessObject value
**/
extern void *Meth_Software_SetAccess(Meth_Software self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Meth_Software self
  @param  ApiList values
**/
extern void *Meth_Software_SetApplicationData(Meth_Software self, ApiList values);

/**
  Set for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @param  ApiSet values
**/
extern void *Meth_Software_SetCitations(Meth_Software self, ApiSet values);

/**
  Set for ccp.general.Method.Software.details

Free text containing notes, 
descriptive remarks, etc.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetDetails(Meth_Software self, ApiString value);

/**
  Set for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @param  ApiSet values
**/
extern void *Meth_Software_SetDropAnnotations(Meth_Software self, ApiSet values);

/**
  Set for ccp.general.Method.Software.entries

BMRB entries where software 
is used
  @param  Meth_Software self
  @param  ApiSet values
**/
extern void *Meth_Software_SetEntries(Meth_Software self, ApiSet values);

/**
  Set for ccp.general.Method.Software.methods

Methods carried out using 
the Software.
  @param  Meth_Software self
  @param  ApiSet values
**/
extern void *Meth_Software_SetMethods(Meth_Software self, ApiSet values);

/**
  Set for ccp.general.Method.Software.name

name of Software.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetName(Meth_Software self, ApiString value);

/**
  Set for ccp.general.Method.Software.tasks

Tasks carried out with the 
software.
  @param  Meth_Software self
  @param  ApiList values
**/
extern void *Meth_Software_SetTasks(Meth_Software self, ApiList values);

/**
  Set for ccp.general.Method.Software.vendorAddress

Address of vendor or 
software producer.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetVendorAddress(Meth_Software self, ApiString value);

/**
  Set for ccp.general.Method.Software.vendorName

Name of vendor or 
software producer.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetVendorName(Meth_Software self, ApiString value);

/**
  Set for ccp.general.Method.Software.vendorWebAddress

Web address (home 
page) of vendor or software producer.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetVendorWebAddress(Meth_Software self, ApiString value);

/**
  Set for ccp.general.Method.Software.version

Software version used.
  @param  Meth_Software self
  @param  ApiString value
**/
extern void *Meth_Software_SetVersion(Meth_Software self, ApiString value);

/**
  Sorted for ccp.general.Method.Software.citations

Citations describing 
software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_SortedCitations(Meth_Software self);

/**
  Sorted for ccp.general.Method.Software.dropAnnotations
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_SortedDropAnnotations(Meth_Software self);

/**
  Sorted for ccp.general.Method.Software.entries

BMRB entries where 
software is used
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_SortedEntries(Meth_Software self);

/**
  Sorted for ccp.general.Method.Software.methods

Methods carried out 
using the Software.
  @param  Meth_Software self
  @returns   the result
**/
extern ApiList Meth_Software_SortedMethods(Meth_Software self);

#endif /* __incl__ccp_api_general_Method_Software_h__ */
