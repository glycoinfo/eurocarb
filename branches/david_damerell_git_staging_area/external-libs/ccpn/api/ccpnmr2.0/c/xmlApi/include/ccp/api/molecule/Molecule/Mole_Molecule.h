
#ifndef __incl__ccp_api_molecule_Molecule_Molecule_h__
#define __incl__ccp_api_molecule_Molecule_Molecule_h__

#include "ccp.h"

/*
  Abstract molecule, with defined topology but no location, coordinates, etc. 
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  Impl_ApplicationData value
**/
extern void *Mole_Molecule_AddApplicationData(Mole_Molecule self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_AddCommonName(Mole_Molecule self, ApiString value);

/**
  Add for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_AddFunction(Mole_Molecule self, ApiString value);

/**
  Add for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_AddKeyword(Mole_Molecule self, ApiString value);

/**
  Add for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  Refs_MolComponent value
**/
extern void *Mole_Molecule_AddMolComponent(Mole_Molecule self, Refs_MolComponent value);

/**
  CheckAllValid for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean complete
**/
extern void *Mole_Molecule_CheckAllValid(Mole_Molecule self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean complete
**/
extern void *Mole_Molecule_CheckValid(Mole_Molecule self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllActiveRepositories(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllActiveRepositories_keyval0(Mole_Molecule self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllActiveRepositories_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllActiveRepositories_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllActiveRepositories_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
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
extern ApiList Mole_Molecule_FindAllActiveRepositories_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllAlignments(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllAlignments_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllAlignments_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllAlignments_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllAlignments_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllAlignments_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllApplicationData(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllApplicationData_keyval0(Mole_Molecule self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllApplicationData_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllApplicationData_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_Molecule_FindAllApplicationData_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
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
extern ApiList Mole_Molecule_FindAllApplicationData_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllChains(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllChains_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllChains_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllChains_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllChains_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllChains_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllCitations(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllCitations_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllCitations_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllCitations_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllCitations_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllCitations_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolComponents(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolComponents_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolComponents_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolComponents_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolComponents_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllMolComponents_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResLinks(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResLinks_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResLinks_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResLinks_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResLinks_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllMolResLinks_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResidues(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResidues_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResidues_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResidues_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolResidues_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllMolResidues_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolSeqFragments(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames(Mole_Molecule self, ApiMap conditions);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval0(Mole_Molecule self);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
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
extern ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval0(Mole_Molecule self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
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
extern Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Alignment Mole_Molecule_FindFirstAlignment(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
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
extern Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval0(Mole_Molecule self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
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
extern Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Mole_Molecule_FindFirstChain(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Mole_Molecule_FindFirstChain_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Mole_Molecule_FindFirstChain_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Mole_Molecule_FindFirstChain_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Mole_Molecule_FindFirstChain_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
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
extern Mols_Chain Mole_Molecule_FindFirstChain_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Mole_Molecule_FindFirstCitation(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Mole_Molecule_FindFirstCitation_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Mole_Molecule_FindFirstCitation_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Mole_Molecule_FindFirstCitation_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Mole_Molecule_FindFirstCitation_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
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
extern Cita_Citation Mole_Molecule_FindFirstCitation_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
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
extern Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
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
extern Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
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
extern Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
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
extern Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName(Mole_Molecule self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval0(Mole_Molecule self);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval1(Mole_Molecule self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
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
extern Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mole_Molecule_Get(Mole_Molecule self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Molecule self
  @returns   the result
**/
extern Acco_AccessObject Mole_Molecule_GetAccess(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetActiveRepositories(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.alignments

child link to class 
Alignment
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetAlignments(Mole_Molecule self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetApplicationData(Mole_Molecule self);

/**
  GetByKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mole_Molecule Mole_Molecule_GetByKey(Mole_Molecule self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for ccp.molecule.Molecule.Molecule.calcIsoelectricPoint

Calculated 
isoelectric point of molecule. The pI indicates the value of pH at which 
the net charge of the molecule would be neutralized, if the molecule 
would have a conformation with each amino acid fully exposed to the 
solvent. NB This is derived information, this should be moved when this 
gets developed.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiFloat Mole_Molecule_GetCalcIsoelectricPoint(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetChains(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.citations

Citations describing 
molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetCitations(Mole_Molecule self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetClassName(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetCommonNames(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetCreatedBy(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetDetails(Mole_Molecule self);

/**
  getter for derived attribute empiricalFormula
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetEmpiricalFormula(Mole_Molecule self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetFieldNames(Mole_Molecule self);

/**
  getter for derived attribute formalCharge
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiInteger Mole_Molecule_GetFormalCharge(Mole_Molecule self);

/**
  GetFullKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mole_Molecule_GetFullKey(Mole_Molecule self, ApiBoolean useGuid);

/**
  Get for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetFunctions(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetGuid(Mole_Molecule self);

/**
  getter for derived attribute hasNonStdChemComp
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetHasNonStdChemComp(Mole_Molecule self);

/**
  getter for derived link hasNonStdChirality
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetHasNonStdChirality(Mole_Molecule self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetInConstructor(Mole_Molecule self);

/**
  getter for derived attribute isAromatic
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsAromatic(Mole_Molecule self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsDeleted(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.isFinalised

Non-finalised 
molecules may not have links to Samples etc.
Finalised molecules can no 
longer have residues added or removed.
Note that you can add MolResidues 
to non-finalised molecules even if they already have chanis, but that 
you must make sure of adding new MolSystem.Residues as necessary.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsFinalised(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsLoaded(Mole_Molecule self);

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
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsModifiable(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsModified(Mole_Molecule self);

/**
  getter for derived attribute isParamagnetic
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsParamagnetic(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsReading(Mole_Molecule self);

/**
  getter for derived attribute isStdCyclic
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsStdCyclic(Mole_Molecule self);

/**
  getter for derived attribute isStdLinear
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiBoolean Mole_Molecule_GetIsStdLinear(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_GetKeywords(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetLastUnlockedBy(Mole_Molecule self);

/**
  GetLocalKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @returns  Local object key
**/
extern ApiObject Mole_Molecule_GetLocalKey(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.longName

Long form of molecule 
name.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetLongName(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.memopsRoot

parent link
  @param  Mole_Molecule self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_Molecule_GetMemopsRoot(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetMolComponents(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.molResLinks

child link to class 
MolResLink
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetMolResLinks(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.molResidues

child link to class 
MolResidue
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetMolResidues(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.molSeqFragments

child link to 
class MolSeqFragment
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetMolSeqFragments(Mole_Molecule self);

/**
  Getter for derived attribute molType. Possible return values are 
'protein', 'DNA', 'RNA', 'carbohydrate', or 'DNA/RNA'
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetMolType(Mole_Molecule self);

/**
  getter for derived attribute molecularMass
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiFloat Mole_Molecule_GetMolecularMass(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link to 
class MoleculeSysName
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiSet Mole_Molecule_GetMoleculeSysNames(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.name

Name of Molecule. Used as 
key. Should be correct and informative, but may be an abbreviation or an 
acronym if the alternative is too long. Recommended e.g. NaCl, Lysozyme, 
Lac headpiece, morphine.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetName(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.naturalSource

Natural source for 
molecule
  @param  Mole_Molecule self
  @returns   the result
**/
extern Taxo_NaturalSource Mole_Molecule_GetNaturalSource(Mole_Molecule self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Mole_Molecule self
  @returns   the result
**/
extern Impl_PackageLocator Mole_Molecule_GetPackageLocator(Mole_Molecule self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetPackageName(Mole_Molecule self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetPackageShortName(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.parent

link to parent object - 
synonym for memopsRoot
  @param  Mole_Molecule self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_Molecule_GetParent(Mole_Molecule self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetQualifiedName(Mole_Molecule self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mole_Molecule self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_Molecule_GetRoot(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.seqDetails

Details, notes, 
comments etc. about the sequence.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetSeqDetails(Mole_Molecule self);

/**
  Getter function for derived attribute seqLength.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiInteger Mole_Molecule_GetSeqLength(Mole_Molecule self);

/**
  getter for derived attribute seqString
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetSeqString(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.smiles

SMILES (Simplified 
Molecular Input Line Entry Specification) string describing molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetSmiles(Mole_Molecule self);

/**
  Get for ccp.molecule.Molecule.Molecule.smilesType

Type of Smiles string 
in smiles attribute
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetSmilesType(Mole_Molecule self);

/**
  getter for serived attribute stdSeqString
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiString Mole_Molecule_GetStdSeqString(Mole_Molecule self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mole_Molecule self
  @returns   the result
**/
extern Impl_TopObject Mole_Molecule_GetTopObject(Mole_Molecule self);

/**
  Constructor for ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_Molecule Mole_Molecule_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Mole_Molecule Mole_Molecule_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_Alignment Mole_Molecule_NewAlignment(Mole_Molecule self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
extern Mole_Alignment Mole_Molecule_NewAlignment_reqd(Mole_Molecule self, Dbr_Entry dbRef);

/**
  Factory function to create ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolResLink Mole_Molecule_NewMolResLink(Mole_Molecule self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule self
  @param  ApiSet molResLinkEnds
  @returns  the new object
**/
extern Mole_MolResLink Mole_Molecule_NewMolResLink_reqd(Mole_Molecule self, ApiSet molResLinkEnds);

/**
  Factory function to create ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolResidue Mole_Molecule_NewMolResidue(Mole_Molecule self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule self
  @param  Chem_ChemComp chemComp
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @returns  the new object
**/
extern Mole_MolResidue Mole_Molecule_NewMolResidue_reqd(Mole_Molecule self, Chem_ChemComp chemComp, char * descriptor, char * linking, ApiInteger seqCode);

/**
  Factory function to create ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolSeqFragment Mole_Molecule_NewMolSeqFragment(Mole_Molecule self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiSet limitResidues
  @returns  the new object
**/
extern Mole_MolSeqFragment Mole_Molecule_NewMolSeqFragment_reqd(Mole_Molecule self, ApiSet limitResidues);

/**
  Factory function to create ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MoleculeSysName Mole_Molecule_NewMoleculeSysName(Mole_Molecule self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule self
  @param  char * namingSystem
  @returns  the new object
**/
extern Mole_MoleculeSysName Mole_Molecule_NewMoleculeSysName_reqd(Mole_Molecule self, char * namingSystem);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  Impl_ApplicationData value
**/
extern void *Mole_Molecule_RemoveApplicationData(Mole_Molecule self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_RemoveCommonName(Mole_Molecule self, ApiString value);

/**
  Remove for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_RemoveFunction(Mole_Molecule self, ApiString value);

/**
  Remove for ccp.molecule.Molecule.Molecule.keywords

Keywords for 
searching molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_RemoveKeyword(Mole_Molecule self, ApiString value);

/**
  Remove for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  Refs_MolComponent value
**/
extern void *Mole_Molecule_RemoveMolComponent(Mole_Molecule self, Refs_MolComponent value);

/**
  SetAttr for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mole_Molecule_Set(Mole_Molecule self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Molecule self
  @param  Acco_AccessObject value
**/
extern void *Mole_Molecule_SetAccess(Mole_Molecule self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  ApiList values
**/
extern void *Mole_Molecule_SetApplicationData(Mole_Molecule self, ApiList values);

/**
  Set for ccp.molecule.Molecule.Molecule.calcIsoelectricPoint

Calculated 
isoelectric point of molecule. The pI indicates the value of pH at which 
the net charge of the molecule would be neutralized, if the molecule 
would have a conformation with each amino acid fully exposed to the 
solvent. NB This is derived information, this should be moved when this 
gets developed.
  @param  Mole_Molecule self
  @param  ApiFloat value
**/
extern void *Mole_Molecule_SetCalcIsoelectricPoint(Mole_Molecule self, ApiFloat value);

/**
  Set for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiSet values
**/
extern void *Mole_Molecule_SetChains(Mole_Molecule self, ApiSet values);

/**
  Set for ccp.molecule.Molecule.Molecule.citations

Citations describing 
molecule.
  @param  Mole_Molecule self
  @param  ApiSet values
**/
extern void *Mole_Molecule_SetCitations(Mole_Molecule self, ApiSet values);

/**
  Set for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiList values
**/
extern void *Mole_Molecule_SetCommonNames(Mole_Molecule self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetCreatedBy(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetDetails(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiList values
**/
extern void *Mole_Molecule_SetFunctions(Mole_Molecule self, ApiList values);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetGuid(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.isFinalised

Non-finalised 
molecules may not have links to Samples etc.
Finalised molecules can no 
longer have residues added or removed.
Note that you can add MolResidues 
to non-finalised molecules even if they already have chanis, but that 
you must make sure of adding new MolSystem.Residues as necessary.
  @param  Mole_Molecule self
  @param  ApiBoolean value
**/
extern void *Mole_Molecule_SetIsFinalised(Mole_Molecule self, ApiBoolean value);

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
  @param  Mole_Molecule self
  @param  ApiBoolean value
**/
extern void *Mole_Molecule_SetIsModifiable(Mole_Molecule self, ApiBoolean value);

/**
  Set for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiList values
**/
extern void *Mole_Molecule_SetKeywords(Mole_Molecule self, ApiList values);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetLastUnlockedBy(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.longName

Long form of molecule 
name.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetLongName(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiSet values
**/
extern void *Mole_Molecule_SetMolComponents(Mole_Molecule self, ApiSet values);

/**
  Set for ccp.molecule.Molecule.Molecule.name

Name of Molecule. Used as 
key. Should be correct and informative, but may be an abbreviation or an 
acronym if the alternative is too long. Recommended e.g. NaCl, Lysozyme, 
Lac headpiece, morphine.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetName(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.naturalSource

Natural source for 
molecule
  @param  Mole_Molecule self
  @param  Taxo_NaturalSource value
**/
extern void *Mole_Molecule_SetNaturalSource(Mole_Molecule self, Taxo_NaturalSource value);

/**
  Set for ccp.molecule.Molecule.Molecule.seqDetails

Details, notes, 
comments etc. about the sequence.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetSeqDetails(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.smiles

SMILES (Simplified 
Molecular Input Line Entry Specification) string describing molecule.
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetSmiles(Mole_Molecule self, ApiString value);

/**
  Set for ccp.molecule.Molecule.Molecule.smilesType

Type of Smiles string 
in smiles attribute
  @param  Mole_Molecule self
  @param  ApiString value
**/
extern void *Mole_Molecule_SetSmilesType(Mole_Molecule self, ApiString value);

/**
  Sorted for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedAlignments(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedChains(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedCitations(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedMolComponents(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedMolResLinks(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedMolResidues(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.molSeqFragments

child link to 
class MolSeqFragment
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedMolSeqFragments(Mole_Molecule self);

/**
  Sorted for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @returns   the result
**/
extern ApiList Mole_Molecule_SortedMoleculeSysNames(Mole_Molecule self);

#endif /* __incl__ccp_api_molecule_Molecule_Molecule_h__ */
