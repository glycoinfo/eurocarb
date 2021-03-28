
#ifndef __incl__ccp_api_general_Affiliation_AffiliationStore_h__
#define __incl__ccp_api_general_Affiliation_AffiliationStore_h__

#include "ccp.h"

/*
  grouping of Affiliations (People and the organisations they work in).
*/

/* package ccp.api.general.Affiliation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  Impl_ApplicationData value
**/
extern void *Affi_AffiliationStore_AddApplicationData(Affi_AffiliationStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  ApiBoolean complete
**/
extern void *Affi_AffiliationStore_CheckAllValid(Affi_AffiliationStore self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  ApiBoolean complete
**/
extern void *Affi_AffiliationStore_CheckValid(Affi_AffiliationStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories_keyval0(Affi_AffiliationStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
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
extern ApiList Affi_AffiliationStore_FindAllActiveRepositories_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllApplicationData(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllApplicationData_keyval0(Affi_AffiliationStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllApplicationData_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllApplicationData_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Affi_AffiliationStore_FindAllApplicationData_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
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
extern ApiList Affi_AffiliationStore_FindAllApplicationData_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllOrganisations(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllOrganisations_keyval0(Affi_AffiliationStore self);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllOrganisations_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllOrganisations_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllOrganisations_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
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
extern ApiSet Affi_AffiliationStore_FindAllOrganisations_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllPersons(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllPersons_keyval0(Affi_AffiliationStore self);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllPersons_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllPersons_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Affi_AffiliationStore_FindAllPersons_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
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
extern ApiSet Affi_AffiliationStore_FindAllPersons_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository_keyval0(Affi_AffiliationStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
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
extern Impl_Repository Affi_AffiliationStore_FindFirstActiveRepository_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData_keyval0(Affi_AffiliationStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
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
extern Impl_ApplicationData Affi_AffiliationStore_FindFirstApplicationData_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation_keyval0(Affi_AffiliationStore self);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Affiliation.AffiliationStore.organisations

child link to 
class Organisation
  @param  Affi_AffiliationStore self
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
extern Affi_Organisation Affi_AffiliationStore_FindFirstOrganisation_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Affi_AffiliationStore_FindFirstPerson(Affi_AffiliationStore self, ApiMap conditions);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Affi_AffiliationStore_FindFirstPerson_keyval0(Affi_AffiliationStore self);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Affi_AffiliationStore_FindFirstPerson_keyval1(Affi_AffiliationStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Affi_AffiliationStore_FindFirstPerson_keyval2(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Affi_Person Affi_AffiliationStore_FindFirstPerson_keyval3(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Affiliation.AffiliationStore.persons

child 
link to class Person
  @param  Affi_AffiliationStore self
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
extern Affi_Person Affi_AffiliationStore_FindFirstPerson_keyval4(Affi_AffiliationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Affi_AffiliationStore_Get(Affi_AffiliationStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Acco_AccessObject Affi_AffiliationStore_GetAccess(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiList Affi_AffiliationStore_GetActiveRepositories(Affi_AffiliationStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiList Affi_AffiliationStore_GetApplicationData(Affi_AffiliationStore self);

/**
  GetByKey for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Affi_AffiliationStore Affi_AffiliationStore_GetByKey(Affi_AffiliationStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetClassName(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetCreatedBy(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiList Affi_AffiliationStore_GetFieldNames(Affi_AffiliationStore self);

/**
  GetFullKey for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Affi_AffiliationStore_GetFullKey(Affi_AffiliationStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetGuid(Affi_AffiliationStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetInConstructor(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetIsDeleted(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetIsLoaded(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetIsModifiable(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetIsModified(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiBoolean Affi_AffiliationStore_GetIsReading(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetLastUnlockedBy(Affi_AffiliationStore self);

/**
  GetLocalKey for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @returns  Local object key
**/
extern ApiObject Affi_AffiliationStore_GetLocalKey(Affi_AffiliationStore self);

/**
  Get for ccp.general.Affiliation.AffiliationStore.memopsRoot

parent link
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Affi_AffiliationStore_GetMemopsRoot(Affi_AffiliationStore self);

/**
  Get for ccp.general.Affiliation.AffiliationStore.name

name of 
AffiliationGroup
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetName(Affi_AffiliationStore self);

/**
  Get for ccp.general.Affiliation.AffiliationStore.organisations

child 
link to class Organisation
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiSet Affi_AffiliationStore_GetOrganisations(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Impl_PackageLocator Affi_AffiliationStore_GetPackageLocator(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetPackageName(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetPackageShortName(Affi_AffiliationStore self);

/**
  Get for ccp.general.Affiliation.AffiliationStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Affi_AffiliationStore_GetParent(Affi_AffiliationStore self);

/**
  Get for ccp.general.Affiliation.AffiliationStore.persons

child link to 
class Person
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiSet Affi_AffiliationStore_GetPersons(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiString Affi_AffiliationStore_GetQualifiedName(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Affi_AffiliationStore_GetRoot(Affi_AffiliationStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern Impl_TopObject Affi_AffiliationStore_GetTopObject(Affi_AffiliationStore self);

/**
  Constructor for ccp.general.Affiliation.AffiliationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Affi_AffiliationStore Affi_AffiliationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Affiliation.AffiliationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Affi_AffiliationStore Affi_AffiliationStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.general.Affiliation.Organisation
  @param  Affi_AffiliationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Affi_Organisation Affi_AffiliationStore_NewOrganisation(Affi_AffiliationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Affiliation.Organisation
  @param  Affi_AffiliationStore self
  @param  char * name
  @returns  the new object
**/
extern Affi_Organisation Affi_AffiliationStore_NewOrganisation_reqd(Affi_AffiliationStore self, char * name);

/**
  Factory function to create ccp.general.Affiliation.Person
  @param  Affi_AffiliationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Affi_Person Affi_AffiliationStore_NewPerson(Affi_AffiliationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Affiliation.Person
  @param  Affi_AffiliationStore self
  @param  char * familyName
  @returns  the new object
**/
extern Affi_Person Affi_AffiliationStore_NewPerson_reqd(Affi_AffiliationStore self, char * familyName);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  Impl_ApplicationData value
**/
extern void *Affi_AffiliationStore_RemoveApplicationData(Affi_AffiliationStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.Affiliation.AffiliationStore
  @param  Affi_AffiliationStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Affi_AffiliationStore_Set(Affi_AffiliationStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Affi_AffiliationStore self
  @param  Acco_AccessObject value
**/
extern void *Affi_AffiliationStore_SetAccess(Affi_AffiliationStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Affi_AffiliationStore self
  @param  ApiList values
**/
extern void *Affi_AffiliationStore_SetApplicationData(Affi_AffiliationStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Affi_AffiliationStore self
  @param  ApiString value
**/
extern void *Affi_AffiliationStore_SetCreatedBy(Affi_AffiliationStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Affi_AffiliationStore self
  @param  ApiString value
**/
extern void *Affi_AffiliationStore_SetGuid(Affi_AffiliationStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Affi_AffiliationStore self
  @param  ApiBoolean value
**/
extern void *Affi_AffiliationStore_SetIsModifiable(Affi_AffiliationStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Affi_AffiliationStore self
  @param  ApiString value
**/
extern void *Affi_AffiliationStore_SetLastUnlockedBy(Affi_AffiliationStore self, ApiString value);

/**
  Set for ccp.general.Affiliation.AffiliationStore.name

name of 
AffiliationGroup
  @param  Affi_AffiliationStore self
  @param  ApiString value
**/
extern void *Affi_AffiliationStore_SetName(Affi_AffiliationStore self, ApiString value);

/**
  Sorted for ccp.general.Affiliation.AffiliationStore.organisations

child 
link to class Organisation
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiList Affi_AffiliationStore_SortedOrganisations(Affi_AffiliationStore self);

/**
  Sorted for ccp.general.Affiliation.AffiliationStore.persons

child link 
to class Person
  @param  Affi_AffiliationStore self
  @returns   the result
**/
extern ApiList Affi_AffiliationStore_SortedPersons(Affi_AffiliationStore self);

#endif /* __incl__ccp_api_general_Affiliation_AffiliationStore_h__ */
