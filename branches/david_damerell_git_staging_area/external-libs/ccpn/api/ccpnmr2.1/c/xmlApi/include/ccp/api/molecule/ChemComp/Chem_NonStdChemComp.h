
#ifndef __incl__ccp_api_molecule_ChemComp_NonStdChemComp_h__
#define __incl__ccp_api_molecule_ChemComp_NonStdChemComp_h__

#include "ccp.h"

/*
  ChemComp that is not a standard ChemComp, but may or may not be derived from one.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  Impl_ApplicationData value
**/
extern void *Chem_NonStdChemComp_AddApplicationData(Chem_NonStdChemComp self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_AddCommonName(Chem_NonStdChemComp self, ApiString value);

/**
  Add for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_AddKeyword(Chem_NonStdChemComp self, ApiString value);

/**
  CheckAllValid for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean complete
**/
extern void *Chem_NonStdChemComp_CheckAllValid(Chem_NonStdChemComp self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean complete
**/
extern void *Chem_NonStdChemComp_CheckValid(Chem_NonStdChemComp self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
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
extern ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllApplicationData(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
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
extern ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval0(Chem_NonStdChemComp self);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
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
extern ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
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
extern Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
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
extern Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
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
extern Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
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
extern Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
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
extern Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
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
extern Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
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
extern Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
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
extern Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
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
extern Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
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
extern Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
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
extern Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry(Chem_NonStdChemComp self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval0(Chem_NonStdChemComp self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
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
extern Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_NonStdChemComp_Get(Chem_NonStdChemComp self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Acco_AccessObject Chem_NonStdChemComp_GetAccess(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Acco_AccessObject Chem_NonStdChemComp_GetActiveAccess(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_GetActiveRepositories(Chem_NonStdChemComp self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_GetApplicationData(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.baseGlycoCtCode

base glycoCT 
description code. For carbohydrates. The full glycoCtCode is only 
defined at the ChemCompVar level, but htis gives the base code that is 
exanded on in the vars.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetBaseGlycoCtCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.beilsteinCode

Beilstein compound 
code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetBeilsteinCode(Chem_NonStdChemComp self);

/**
  GetByKey for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_NonStdChemComp Chem_NonStdChemComp_GetByKey(Chem_NonStdChemComp self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetCasRegCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.ccpCode

ccp Code of ChemComp. 
Part of the class key
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetCcpCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to class 
ChemAngle
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemAngles(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to class 
ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemAtomSets(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to class 
AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemAtoms(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to class 
ChemBond
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemBonds(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to class 
ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemCompVars(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to class 
ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetChemTorsions(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetClassName(Chem_NonStdChemComp self);

/**
  getter for derived attribute code1Letter
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetCode1Letter(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.code3Letter

PDB three letter 
code of ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetCode3Letter(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_GetCommonNames(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetCreatedBy(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.details

Free text, for notes, 
explanatory comments, etc.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetDetails(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_GetFieldNames(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetGuid(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.hasStdChirality

Does ChemComp 
have standard chirality? Serves to flag molecules containing ChemComps 
with non-standard chirality, such as D amino acids. Note that the 
attribute may not be set, for cases where no standard is defined.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetHasStdChirality(Chem_NonStdChemComp self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetInConstructor(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsDeleted(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.isLinearPolymer

Is ChemComp a 
component of a linear polymer?
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsLinearPolymer(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsLoaded(Chem_NonStdChemComp self);

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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsModifiable(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsModified(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiBoolean Chem_NonStdChemComp_GetIsReading(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_GetKeywords(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetLastUnlockedBy(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetLinkEnds(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.memopsRoot

parent link
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_NonStdChemComp_GetMemopsRoot(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetMerckCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.molType

molecule Type of 
ChemComp (part of the class key)
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetMolType(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetName(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetNamingSystems(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Impl_PackageLocator Chem_NonStdChemComp_GetPackageLocator(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetPackageName(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetPackageShortName(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.parent

link to parent object - 
synonym for memopsRoot
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_NonStdChemComp_GetParent(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetQualifiedName(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetResidueTypeProbs(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_NonStdChemComp_GetRoot(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.sigmaAldrichCode

SigmaAldrich 
compound code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetSigmaAldrichCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.stdChemComp

Standard ChemComp 
corresponding to ChemComp. If ChemComp is a StdChemComp points to the 
ChemComp itself.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Chem_StdChemComp Chem_NonStdChemComp_GetStdChemComp(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.NonStdChemComp.stdChemCompCode
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiString Chem_NonStdChemComp_GetStdChemCompCode(Chem_NonStdChemComp self);

/**
  Get for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link to 
class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiSet Chem_NonStdChemComp_GetStereochemistries(Chem_NonStdChemComp self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern Impl_TopObject Chem_NonStdChemComp_GetTopObject(Chem_NonStdChemComp self);

/**
  Constructor for ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_NonStdChemComp Chem_NonStdChemComp_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot parent
  @returns  the new object
**/
extern Chem_NonStdChemComp Chem_NonStdChemComp_Init_reqd(Impl_MemopsRoot parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  Impl_ApplicationData value
**/
extern void *Chem_NonStdChemComp_RemoveApplicationData(Chem_NonStdChemComp self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_RemoveCommonName(Chem_NonStdChemComp self, ApiString value);

/**
  Remove for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for 
searching ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_RemoveKeyword(Chem_NonStdChemComp self, ApiString value);

/**
  SetAttr for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_NonStdChemComp_Set(Chem_NonStdChemComp self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NonStdChemComp self
  @param  Acco_AccessObject value
**/
extern void *Chem_NonStdChemComp_SetAccess(Chem_NonStdChemComp self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
extern void *Chem_NonStdChemComp_SetApplicationData(Chem_NonStdChemComp self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.ChemComp.baseGlycoCtCode

base glycoCT 
description code. For carbohydrates. The full glycoCtCode is only 
defined at the ChemCompVar level, but htis gives the base code that is 
exanded on in the vars.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetBaseGlycoCtCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.beilsteinCode

Beilstein compound 
code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetBeilsteinCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetCasRegCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.ccpCode

ccp Code of ChemComp. 
Part of the class key
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetCcpCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.code3Letter

PDB three letter 
code of ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetCode3Letter(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
extern void *Chem_NonStdChemComp_SetCommonNames(Chem_NonStdChemComp self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetCreatedBy(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.details

Free text, for notes, 
explanatory comments, etc.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetDetails(Chem_NonStdChemComp self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetGuid(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.hasStdChirality

Does ChemComp 
have standard chirality? Serves to flag molecules containing ChemComps 
with non-standard chirality, such as D amino acids. Note that the 
attribute may not be set, for cases where no standard is defined.
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean value
**/
extern void *Chem_NonStdChemComp_SetHasStdChirality(Chem_NonStdChemComp self, ApiBoolean value);

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
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean value
**/
extern void *Chem_NonStdChemComp_SetIsModifiable(Chem_NonStdChemComp self, ApiBoolean value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
extern void *Chem_NonStdChemComp_SetKeywords(Chem_NonStdChemComp self, ApiList values);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetLastUnlockedBy(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetMerckCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.molType

molecule Type of 
ChemComp (part of the class key)
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetMolType(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetName(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiSet values
**/
extern void *Chem_NonStdChemComp_SetResidueTypeProbs(Chem_NonStdChemComp self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.ChemComp.sigmaAldrichCode

SigmaAldrich 
compound code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetSigmaAldrichCode(Chem_NonStdChemComp self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.NonStdChemComp.stdChemCompCode
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
extern void *Chem_NonStdChemComp_SetStdChemCompCode(Chem_NonStdChemComp self, ApiString value);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemAngles(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemAtomSets(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to class 
AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemAtoms(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to class 
ChemBond
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemBonds(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemCompVars(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedChemTorsions(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedLinkEnds(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedNamingSystems(Chem_NonStdChemComp self);

/**
  Sorted for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedResidueTypeProbs(Chem_NonStdChemComp self);

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
extern ApiList Chem_NonStdChemComp_SortedStereochemistries(Chem_NonStdChemComp self);

#endif /* __incl__ccp_api_molecule_ChemComp_NonStdChemComp_h__ */
