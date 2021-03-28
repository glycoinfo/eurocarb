
#ifndef __incl__molsim_api_AnnealProtocol_AnnealProtocolStore_h__
#define __incl__molsim_api_AnnealProtocol_AnnealProtocolStore_h__

#include "ccp.h"

/*
  Grouping of AnnealProtocols
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_AnnealProtocolStore_AddApplicationData(Anpr_AnnealProtocolStore self, Impl_ApplicationData value);

/**
  CheckAllValid for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean complete
**/
extern void *Anpr_AnnealProtocolStore_CheckAllValid(Anpr_AnnealProtocolStore self, ApiBoolean complete);

/**
  CheckValid for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean complete
**/
extern void *Anpr_AnnealProtocolStore_CheckValid(Anpr_AnnealProtocolStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
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
extern ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
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
extern ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
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
extern ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
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
extern ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
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
extern Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
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
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
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
extern Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(Anpr_AnnealProtocolStore self, ApiMap conditions);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval0(Anpr_AnnealProtocolStore self);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
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
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anpr_AnnealProtocolStore_Get(Anpr_AnnealProtocolStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Acco_AccessObject Anpr_AnnealProtocolStore_GetAccess(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiList Anpr_AnnealProtocolStore_GetActiveRepositories(Anpr_AnnealProtocolStore self);

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child 
link to class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiSet Anpr_AnnealProtocolStore_GetAnnealProtocols(Anpr_AnnealProtocolStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiList Anpr_AnnealProtocolStore_GetApplicationData(Anpr_AnnealProtocolStore self);

/**
  GetByKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_GetByKey(Anpr_AnnealProtocolStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetClassName(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetCreatedBy(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiList Anpr_AnnealProtocolStore_GetFieldNames(Anpr_AnnealProtocolStore self);

/**
  GetFullKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anpr_AnnealProtocolStore_GetFullKey(Anpr_AnnealProtocolStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetGuid(Anpr_AnnealProtocolStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetInConstructor(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetIsDeleted(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetIsLoaded(Anpr_AnnealProtocolStore self);

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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetIsModifiable(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetIsModified(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiBoolean Anpr_AnnealProtocolStore_GetIsReading(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetLastUnlockedBy(Anpr_AnnealProtocolStore self);

/**
  GetLocalKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @returns  Local object key
**/
extern ApiObject Anpr_AnnealProtocolStore_GetLocalKey(Anpr_AnnealProtocolStore self);

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.memopsRoot

parent 
link
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Impl_MemopsRoot Anpr_AnnealProtocolStore_GetMemopsRoot(Anpr_AnnealProtocolStore self);

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.name

AnnealProtocol 
name.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetName(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Impl_PackageLocator Anpr_AnnealProtocolStore_GetPackageLocator(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetPackageName(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetPackageShortName(Anpr_AnnealProtocolStore self);

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Impl_MemopsRoot Anpr_AnnealProtocolStore_GetParent(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiString Anpr_AnnealProtocolStore_GetQualifiedName(Anpr_AnnealProtocolStore self);

/**
  Get for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiSet Anpr_AnnealProtocolStore_GetRefPotentialTerms(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Impl_MemopsRoot Anpr_AnnealProtocolStore_GetRoot(Anpr_AnnealProtocolStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern Impl_TopObject Anpr_AnnealProtocolStore_GetTopObject(Anpr_AnnealProtocolStore self);

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_NewAnnealProtocol(Anpr_AnnealProtocolStore self, ApiMap attrlinks);

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * application
  @param  char * code
  @param  char * name
  @returns  the new object
**/
extern Anpr_AnnealProtocol Anpr_AnnealProtocolStore_NewAnnealProtocol_reqd(Anpr_AnnealProtocolStore self, char * application, char * code, char * name);

/**
  Factory function to create molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_NewRefPotentialTerm(Anpr_AnnealProtocolStore self, ApiMap attrlinks);

/**
  Factory function to create molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * code
  @param  ApiInteger index
  @returns  the new object
**/
extern Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_NewRefPotentialTerm_reqd(Anpr_AnnealProtocolStore self, char * code, ApiInteger index);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_ApplicationData value
**/
extern void *Anpr_AnnealProtocolStore_RemoveApplicationData(Anpr_AnnealProtocolStore self, Impl_ApplicationData value);

/**
  SetAttr for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anpr_AnnealProtocolStore_Set(Anpr_AnnealProtocolStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocolStore self
  @param  Acco_AccessObject value
**/
extern void *Anpr_AnnealProtocolStore_SetAccess(Anpr_AnnealProtocolStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  ApiList values
**/
extern void *Anpr_AnnealProtocolStore_SetApplicationData(Anpr_AnnealProtocolStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
extern void *Anpr_AnnealProtocolStore_SetCreatedBy(Anpr_AnnealProtocolStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
extern void *Anpr_AnnealProtocolStore_SetGuid(Anpr_AnnealProtocolStore self, ApiString value);

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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean value
**/
extern void *Anpr_AnnealProtocolStore_SetIsModifiable(Anpr_AnnealProtocolStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
extern void *Anpr_AnnealProtocolStore_SetLastUnlockedBy(Anpr_AnnealProtocolStore self, ApiString value);

/**
  Set for molsim.AnnealProtocol.AnnealProtocolStore.name

AnnealProtocol 
name.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
extern void *Anpr_AnnealProtocolStore_SetName(Anpr_AnnealProtocolStore self, ApiString value);

/**
  Sorted for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiList Anpr_AnnealProtocolStore_SortedAnnealProtocols(Anpr_AnnealProtocolStore self);

/**
  Sorted for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
extern ApiList Anpr_AnnealProtocolStore_SortedRefPotentialTerms(Anpr_AnnealProtocolStore self);

#endif /* __incl__molsim_api_AnnealProtocol_AnnealProtocolStore_h__ */
