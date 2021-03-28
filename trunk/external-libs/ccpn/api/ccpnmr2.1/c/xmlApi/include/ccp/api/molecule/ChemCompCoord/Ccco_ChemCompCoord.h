
#ifndef __incl__ccp_api_molecule_ChemCompCoord_ChemCompCoord_h__
#define __incl__ccp_api_molecule_ChemCompCoord_ChemCompCoord_h__

#include "ccp.h"

/*
  Default or reference ChemComp coordinates
*/

/* package ccp.api.molecule.ChemCompCoord */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  Impl_ApplicationData value
**/
extern void *Ccco_ChemCompCoord_AddApplicationData(Ccco_ChemCompCoord self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean complete
**/
extern void *Ccco_ChemCompCoord_CheckAllValid(Ccco_ChemCompCoord self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean complete
**/
extern void *Ccco_ChemCompCoord_CheckValid(Ccco_ChemCompCoord self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval0(Ccco_ChemCompCoord self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
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
extern ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval0(Ccco_ChemCompCoord self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
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
extern ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval0(Ccco_ChemCompCoord self);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
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
extern ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval0(Ccco_ChemCompCoord self);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
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
extern ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval0(Ccco_ChemCompCoord self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
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
extern Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval0(Ccco_ChemCompCoord self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
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
extern Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval0(Ccco_ChemCompCoord self);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
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
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord(Ccco_ChemCompCoord self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval0(Ccco_ChemCompCoord self);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
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
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Ccco_ChemCompCoord_Get(Ccco_ChemCompCoord self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Acco_AccessObject Ccco_ChemCompCoord_GetAccess(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Acco_AccessObject Ccco_ChemCompCoord_GetActiveAccess(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemCompCoord_GetActiveRepositories(Ccco_ChemCompCoord self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemCompCoord_GetApplicationData(Ccco_ChemCompCoord self);

/**
  GetByKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Ccco_ChemCompCoord Ccco_ChemCompCoord_GetByKey(Ccco_ChemCompCoord self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.ccpCode

ccpCode of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetCcpCode(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child 
link to class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiSet Ccco_ChemCompCoord_GetChemAtomCoords(Ccco_ChemCompCoord self);

/**
  getter for derived link chemComp
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Chem_ChemComp Ccco_ChemCompCoord_GetChemComp(Ccco_ChemCompCoord self);

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiSet Ccco_ChemCompCoord_GetChemCompVarCoords(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetClassName(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetCreatedBy(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.details

Free text, for 
notes, explanatory comments, etc.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetDetails(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemCompCoord_GetFieldNames(Ccco_ChemCompCoord self);

/**
  GetFullKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Ccco_ChemCompCoord_GetFullKey(Ccco_ChemCompCoord self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetGuid(Ccco_ChemCompCoord self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetInConstructor(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetIsDeleted(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetIsLoaded(Ccco_ChemCompCoord self);

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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetIsModifiable(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetIsModified(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiBoolean Ccco_ChemCompCoord_GetIsReading(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetLastUnlockedBy(Ccco_ChemCompCoord self);

/**
  GetLocalKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @returns  Local object key
**/
extern ApiObject Ccco_ChemCompCoord_GetLocalKey(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.memopsRoot

parent link
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Impl_MemopsRoot Ccco_ChemCompCoord_GetMemopsRoot(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.molType

molType of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetMolType(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Impl_PackageLocator Ccco_ChemCompCoord_GetPackageLocator(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetPackageName(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetPackageShortName(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.parent

link to parent 
object - synonym for memopsRoot
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Impl_MemopsRoot Ccco_ChemCompCoord_GetParent(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetQualifiedName(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Impl_MemopsRoot Ccco_ChemCompCoord_GetRoot(Ccco_ChemCompCoord self);

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.sourceName

Source and 
version for the data. Could be a database, a dynamics program, ...).
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiString Ccco_ChemCompCoord_GetSourceName(Ccco_ChemCompCoord self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern Impl_TopObject Ccco_ChemCompCoord_GetTopObject(Ccco_ChemCompCoord self);

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Ccco_ChemCompCoord Ccco_ChemCompCoord_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot parent
  @param  char * ccpCode
  @param  char * molType
  @param  char * sourceName
  @returns  the new object
**/
extern Ccco_ChemCompCoord Ccco_ChemCompCoord_Init_reqd(Impl_MemopsRoot parent, char * ccpCode, char * molType, char * sourceName);

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_NewChemAtomCoord(Ccco_ChemCompCoord self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * name
  @returns  the new object
**/
extern Ccco_ChemAtomCoord Ccco_ChemCompCoord_NewChemAtomCoord_reqd(Ccco_ChemCompCoord self, char * name);

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_NewChemCompVarCoord(Ccco_ChemCompCoord self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  the new object
**/
extern Ccco_ChemCompVarCoord Ccco_ChemCompCoord_NewChemCompVarCoord_reqd(Ccco_ChemCompCoord self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  Impl_ApplicationData value
**/
extern void *Ccco_ChemCompCoord_RemoveApplicationData(Ccco_ChemCompCoord self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Ccco_ChemCompCoord_Set(Ccco_ChemCompCoord self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompCoord self
  @param  Acco_AccessObject value
**/
extern void *Ccco_ChemCompCoord_SetAccess(Ccco_ChemCompCoord self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  ApiList values
**/
extern void *Ccco_ChemCompCoord_SetApplicationData(Ccco_ChemCompCoord self, ApiList values);

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.ccpCode

ccpCode of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetCcpCode(Ccco_ChemCompCoord self, ApiString value);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetCreatedBy(Ccco_ChemCompCoord self, ApiString value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.details

Free text, for 
notes, explanatory comments, etc.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetDetails(Ccco_ChemCompCoord self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetGuid(Ccco_ChemCompCoord self, ApiString value);

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
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean value
**/
extern void *Ccco_ChemCompCoord_SetIsModifiable(Ccco_ChemCompCoord self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetLastUnlockedBy(Ccco_ChemCompCoord self, ApiString value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.molType

molType of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetMolType(Ccco_ChemCompCoord self, ApiString value);

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.sourceName

Source and 
version for the data. Could be a database, a dynamics program, ...).
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
extern void *Ccco_ChemCompCoord_SetSourceName(Ccco_ChemCompCoord self, ApiString value);

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemCompCoord_SortedChemAtomCoords(Ccco_ChemCompCoord self);

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
extern ApiList Ccco_ChemCompCoord_SortedChemCompVarCoords(Ccco_ChemCompCoord self);

#endif /* __incl__ccp_api_molecule_ChemCompCoord_ChemCompCoord_h__ */
