
#ifndef __incl__ccp_api_molecule_MolSystem_Chain_h__
#define __incl__ccp_api_molecule_MolSystem_Chain_h__

#include "ccp.h"

/*
  A specific instance of a given molecule in a specific environment. E.g. one of the chains for a homodimer.
  
  The Chain corresponds to a specific Molecule, but may differ in some ways. 
  
  Creating a Chain automatically creates the Residue and Atom objects corresponding to it. 
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Chain_AddApplicationData(Mols_Chain self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  Nmr_ResonanceGroup value
**/
extern void *Mols_Chain_AddResonanceGroup(Mols_Chain self, Nmr_ResonanceGroup value);

/**
  CheckAllValid for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean complete
**/
extern void *Mols_Chain_CheckAllValid(Mols_Chain self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean complete
**/
extern void *Mols_Chain_CheckValid(Mols_Chain self, ApiBoolean complete);

/**
  Creates ChainFragments for all Residues that do not already have them, 
while making no modification to existing ChainFragments or their 
contents. Is called automatically on Chain creation. Any program that 
modifies the automatically created ChainFragments should call this 
function at the end, to ensure that every Residue belongs to a  
ChainFragment. 

The function  divides the residues in four molTypes: 
protein, carbohydrate, DNA/RNA ,and other. Within each molType, 
stretches of linear polymer of two or more residues are identified 
without regard to the seqId value of the residues. These are put in 
separate ChainFragments, with the residues ordered by sequence rather 
than seqID. Subsequently,  residues not part of a linear polymer are 
grouped in the largest directly connected fragments of uniform molType. 
Finally, for fragments of type DNA/RNA the molType is set to DNA or RNA 
if this is the only molType that happens to be present, to DNA/RNA 
otherwise.
  @param  Mols_Chain self
**/
extern void *Mols_Chain_CreateChainFragments(Mols_Chain self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Chain_FindAllApplicationData(Mols_Chain self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Chain_FindAllApplicationData_keyval0(Mols_Chain self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Chain_FindAllApplicationData_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Chain_FindAllApplicationData_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Chain_FindAllApplicationData_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
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
extern ApiList Mols_Chain_FindAllApplicationData_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainFragments(Mols_Chain self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainFragments_keyval0(Mols_Chain self);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainFragments_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainFragments_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainFragments_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllChainFragments_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainInteractions(Mols_Chain self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainInteractions_keyval0(Mols_Chain self);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainInteractions_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainInteractions_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainInteractions_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllChainInteractions_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainStateSets(Mols_Chain self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainStateSets_keyval0(Mols_Chain self);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainStateSets_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainStateSets_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllChainStateSets_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllChainStateSets_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllDangleChains(Mols_Chain self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllDangleChains_keyval0(Mols_Chain self);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllDangleChains_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllDangleChains_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllDangleChains_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllDangleChains_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResidues(Mols_Chain self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResidues_keyval0(Mols_Chain self);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResidues_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResidues_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResidues_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllResidues_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResonanceGroups(Mols_Chain self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResonanceGroups_keyval0(Mols_Chain self);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResonanceGroups_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResonanceGroups_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Chain_FindAllResonanceGroups_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
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
extern ApiSet Mols_Chain_FindAllResonanceGroups_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval0(Mols_Chain self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
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
extern Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval0(Mols_Chain self);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
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
extern Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval0(Mols_Chain self);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
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
extern Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval0(Mols_Chain self);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
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
extern Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval0(Mols_Chain self);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
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
extern Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_Chain_FindFirstResidue(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_Chain_FindFirstResidue_keyval0(Mols_Chain self);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_Chain_FindFirstResidue_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_Chain_FindFirstResidue_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Mols_Chain_FindFirstResidue_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
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
extern Mols_Residue Mols_Chain_FindFirstResidue_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup(Mols_Chain self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval0(Mols_Chain self);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval1(Mols_Chain self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
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
extern Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_Chain_Get(Mols_Chain self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Chain self
  @returns   the result
**/
extern Acco_AccessObject Mols_Chain_GetAccess(Mols_Chain self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_GetApplicationData(Mols_Chain self);

/**
  GetByKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_Chain Mols_Chain_GetByKey(Mols_Chain self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.MolSystem.Chain.chainFragments

child link to class 
ChainFragment
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetChainFragments(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.chainInteractions

An interaction 
of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetChainInteractions(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetChainStateSets(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.chemExchangeState

for NMR 
spectroscopy. Short text describing the chemical exchange state.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetChemExchangeState(Mols_Chain self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetClassName(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.code

ChainCode - key for the Chain 
class. Should ideally be a single letter, if possible.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetCode(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.conformationalIsomer

short text 
describing the conformational isomer
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetConformationalIsomer(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetDangleChains(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetDetails(Mols_Chain self);

/**
  getter for derived attribute empiricalFormula
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetEmpiricalFormula(Mols_Chain self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_GetFieldNames(Mols_Chain self);

/**
  getter for derived attribute formalCharge
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiInteger Mols_Chain_GetFormalCharge(Mols_Chain self);

/**
  GetFullKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_Chain_GetFullKey(Mols_Chain self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiBoolean Mols_Chain_GetInConstructor(Mols_Chain self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiBoolean Mols_Chain_GetIsDeleted(Mols_Chain self);

/**
  GetLocalKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @returns  Local object key
**/
extern ApiObject Mols_Chain_GetLocalKey(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.magnEquivalenceCode

For NMR data. 
Chains with the same magnEquivalenceCode are magnetically equivalent 
within the MolSystem. If not set no chains are magnetically equivalent.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetMagnEquivalenceCode(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.molSystem

parent link
  @param  Mols_Chain self
  @returns   the result
**/
extern Mols_MolSystem Mols_Chain_GetMolSystem(Mols_Chain self);

/**
  getter for derived attribute molecularMass
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiFloat Mols_Chain_GetMolecularMass(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.molecule

Molecule to which Chain 
corresponds
  @param  Mols_Chain self
  @returns   the result
**/
extern Mole_Molecule Mols_Chain_GetMolecule(Mols_Chain self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetPackageName(Mols_Chain self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetPackageShortName(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.parent

link to parent object - 
synonym for molSystem
  @param  Mols_Chain self
  @returns   the result
**/
extern Mols_MolSystem Mols_Chain_GetParent(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.pdbOneLetterCode

One letter chain 
identifier. Will be used by PDB (and programs that use similar 
conventions). WARNING: having same oneLetterCode for different chains is 
legal but may cause serious confusion.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetPdbOneLetterCode(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.physicalState

e.g. folded/unfolded
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetPhysicalState(Mols_Chain self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetQualifiedName(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetResidues(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiSet Mols_Chain_GetResonanceGroups(Mols_Chain self);

/**
  Get for ccp.molecule.MolSystem.Chain.role

Role of Chain within 
MolSystem
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiString Mols_Chain_GetRole(Mols_Chain self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_Chain self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_Chain_GetRoot(Mols_Chain self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_Chain self
  @returns   the result
**/
extern Impl_TopObject Mols_Chain_GetTopObject(Mols_Chain self);

/**
  Constructor for ccp.molecule.MolSystem.Chain
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_Chain Mols_Chain_Init(Mols_MolSystem parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.Chain
  @param  Mols_MolSystem parent
  @param  char * code
  @param  Mole_Molecule molecule
  @returns  the new object
**/
extern Mols_Chain Mols_Chain_Init_reqd(Mols_MolSystem parent, char * code, Mole_Molecule molecule);

/**
  Factory function to create ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_ChainFragment Mols_Chain_NewChainFragment(Mols_Chain self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain self
  @param  int isLinearPolymer
  @param  char * molType
  @returns  the new object
**/
extern Mols_ChainFragment Mols_Chain_NewChainFragment_reqd(Mols_Chain self, int isLinearPolymer, char * molType);

/**
  Factory function to create ccp.molecule.MolSystem.Residue
  @param  Mols_Chain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_Residue Mols_Chain_NewResidue(Mols_Chain self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.MolSystem.Residue
  @param  Mols_Chain self
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
extern Mols_Residue Mols_Chain_NewResidue_reqd(Mols_Chain self, char * descriptor, char * linking, ApiInteger seqCode, ApiInteger seqId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Chain_RemoveApplicationData(Mols_Chain self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  Nmr_ResonanceGroup value
**/
extern void *Mols_Chain_RemoveResonanceGroup(Mols_Chain self, Nmr_ResonanceGroup value);

/**
  SetAttr for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_Chain_Set(Mols_Chain self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Chain self
  @param  Acco_AccessObject value
**/
extern void *Mols_Chain_SetAccess(Mols_Chain self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  ApiList values
**/
extern void *Mols_Chain_SetApplicationData(Mols_Chain self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.Chain.chainInteractions

An interaction 
of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiSet values
**/
extern void *Mols_Chain_SetChainInteractions(Mols_Chain self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  ApiSet values
**/
extern void *Mols_Chain_SetChainStateSets(Mols_Chain self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Chain.chemExchangeState

for NMR 
spectroscopy. Short text describing the chemical exchange state.
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetChemExchangeState(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.code

ChainCode - key for the Chain 
class. Should ideally be a single letter, if possible.
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetCode(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.conformationalIsomer

short text 
describing the conformational isomer
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetConformationalIsomer(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiSet values
**/
extern void *Mols_Chain_SetDangleChains(Mols_Chain self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Chain.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetDetails(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.magnEquivalenceCode

For NMR data. 
Chains with the same magnEquivalenceCode are magnetically equivalent 
within the MolSystem. If not set no chains are magnetically equivalent.
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetMagnEquivalenceCode(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.molecule

Molecule to which Chain 
corresponds
  @param  Mols_Chain self
  @param  Mole_Molecule value
**/
extern void *Mols_Chain_SetMolecule(Mols_Chain self, Mole_Molecule value);

/**
  Set for ccp.molecule.MolSystem.Chain.pdbOneLetterCode

One letter chain 
identifier. Will be used by PDB (and programs that use similar 
conventions). WARNING: having same oneLetterCode for different chains is 
legal but may cause serious confusion.
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetPdbOneLetterCode(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.physicalState

e.g. folded/unfolded
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetPhysicalState(Mols_Chain self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  ApiSet values
**/
extern void *Mols_Chain_SetResonanceGroups(Mols_Chain self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Chain.role

Role of Chain within 
MolSystem
  @param  Mols_Chain self
  @param  ApiString value
**/
extern void *Mols_Chain_SetRole(Mols_Chain self, ApiString value);

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedChainFragments(Mols_Chain self);

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedChainInteractions(Mols_Chain self);

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedChainStateSets(Mols_Chain self);

/**
  Sorted for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedDangleChains(Mols_Chain self);

/**
  Sorted for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedResidues(Mols_Chain self);

/**
  Sorted for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @returns   the result
**/
extern ApiList Mols_Chain_SortedResonanceGroups(Mols_Chain self);

#endif /* __incl__ccp_api_molecule_MolSystem_Chain_h__ */
