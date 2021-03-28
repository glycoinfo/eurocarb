
#ifndef __incl__ccp_api_molecule_MolSystem_Residue_h__
#define __incl__ccp_api_molecule_MolSystem_Residue_h__

#include "ccp.h"

/*
  A monomer part of a specific molecule in a specific environment (Chain)). 
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Residue_AddApplicationData(Mols_Residue self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  Nmr_ChainStateSet value
**/
extern void *Mols_Residue_AddChainStateSet(Mols_Residue self, Nmr_ChainStateSet value);

/**
  Add for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @param  Nmr_ResonanceGroup value
**/
extern void *Mols_Residue_AddResonanceGroup(Mols_Residue self, Nmr_ResonanceGroup value);

/**
  CheckAllValid for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean complete
**/
extern void *Mols_Residue_CheckAllValid(Mols_Residue self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean complete
**/
extern void *Mols_Residue_CheckValid(Mols_Residue self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Residue_FindAllApplicationData(Mols_Residue self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Residue_FindAllApplicationData_keyval0(Mols_Residue self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Residue_FindAllApplicationData_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Residue_FindAllApplicationData_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Residue_FindAllApplicationData_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
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
extern ApiList Mols_Residue_FindAllApplicationData_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllAtoms(Mols_Residue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllAtoms_keyval0(Mols_Residue self);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllAtoms_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllAtoms_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllAtoms_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllAtoms_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllChainStateSets(Mols_Residue self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllChainStateSets_keyval0(Mols_Residue self);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllChainStateSets_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllChainStateSets_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllChainStateSets_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllChainStateSets_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllDangleResidues(Mols_Residue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllDangleResidues_keyval0(Mols_Residue self);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllDangleResidues_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllDangleResidues_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllDangleResidues_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllDangleResidues_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds(Mols_Residue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval0(Mols_Residue self);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResidueProbs(Mols_Residue self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResidueProbs_keyval0(Mols_Residue self);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResidueProbs_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResidueProbs_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResidueProbs_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllResidueProbs_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResonanceGroups(Mols_Residue self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResonanceGroups_keyval0(Mols_Residue self);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResonanceGroups_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResonanceGroups_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Residue_FindAllResonanceGroups_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
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
extern ApiSet Mols_Residue_FindAllResonanceGroups_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval0(Mols_Residue self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
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
extern Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Mols_Residue_FindFirstAtom(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Mols_Residue_FindFirstAtom_keyval0(Mols_Residue self);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Mols_Residue_FindFirstAtom_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Mols_Residue_FindFirstAtom_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Mols_Residue_FindFirstAtom_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
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
extern Mols_Atom Mols_Residue_FindFirstAtom_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval0(Mols_Residue self);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
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
extern Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval0(Mols_Residue self);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
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
extern Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval0(Mols_Residue self);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
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
extern Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval0(Mols_Residue self);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
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
extern Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup(Mols_Residue self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval0(Mols_Residue self);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval1(Mols_Residue self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
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
extern Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_Residue_Get(Mols_Residue self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Residue self
  @returns   the result
**/
extern Acco_AccessObject Mols_Residue_GetAccess(Mols_Residue self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_GetApplicationData(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetAtoms(Mols_Residue self);

/**
  GetByKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_Residue Mols_Residue_GetByKey(Mols_Residue self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived attribute ccpCode
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetCcpCode(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.chain

parent link
  @param  Mols_Residue self
  @returns   the result
**/
extern Mols_Chain Mols_Residue_GetChain(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.chainFragment

ChainFragment to 
which Residue belongs. When Chains are created, each Residue will 
automatically be linked to a ChainFragment, so that the Chain is divided 
in Fragments of uniform molType.
  @param  Mols_Residue self
  @returns   the result
**/
extern Mols_ChainFragment Mols_Residue_GetChainFragment(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetChainStateSets(Mols_Residue self);

/**
  getter for derived link chemCompVar
  @param  Mols_Residue self
  @returns   the result
**/
extern Chem_ChemCompVar Mols_Residue_GetChemCompVar(Mols_Residue self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetClassName(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetDangleResidues(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.descriptor

descriptor of 
ChemCompVar corresponding to Residue. Describes topological variant, 
i.e. protonation state or (for Polymers) non-polymer type 
substitution.

 linking and descriptor may be changed for existing 
Residues, thus changing the identity of the corresponding ChemCompVar. 

The new chemCompVar must contain a ChemAtom to correspond to every 
existing Atom, and a LinkEnd to correspond to every existing 
MolSystemLinkEnd, as well as every existing MolResLinkEnd in the 
MolResidue. Note that this may require that Atom and MolSsytemLinkEnd 
objects be deleted before the linking and descriptor can be modified.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetDescriptor(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.details

free text for notes, 
etc.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetDetails(Mols_Residue self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_GetFieldNames(Mols_Residue self);

/**
  GetFullKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_Residue_GetFullKey(Mols_Residue self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiBoolean Mols_Residue_GetInConstructor(Mols_Residue self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiBoolean Mols_Residue_GetIsDeleted(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.linking

linking (substitution 
pattern) of ChemCompVar corresponding to Residue. linking and descriptor 
may be changed for existing Residues, thus changing the identity of the 
corresponding ChemCompVar. 
The new chemCompVar must contain a ChemAtom 
to correspond to every existing Atom, and a LinkEnd to correspond to 
every existing MolSystemLinkEnd, as well as every existing MolResLinkEnd 
in the MolResidue. Note that this may require that Atom and 
MolSsytemLinkEnd objects be deleted before the linking and descriptor 
can be modified.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetLinking(Mols_Residue self);

/**
  GetLocalKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @returns  Local object key
**/
extern ApiObject Mols_Residue_GetLocalKey(Mols_Residue self);

/**
  getter function for derived link molResidue
  @param  Mols_Residue self
  @returns   the result
**/
extern Mole_MolResidue Mols_Residue_GetMolResidue(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link to 
class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetMolSystemLinkEnds(Mols_Residue self);

/**
  getter for derived attribute molType
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetMolType(Mols_Residue self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetPackageName(Mols_Residue self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetPackageShortName(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.parent

link to parent object - 
synonym for chain
  @param  Mols_Residue self
  @returns   the result
**/
extern Mols_Chain Mols_Residue_GetParent(Mols_Residue self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetQualifiedName(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetResidueProbs(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiSet Mols_Residue_GetResonanceGroups(Mols_Residue self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_Residue self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_Residue_GetRoot(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.seqCode

Author sequence 
identifier. Defaults to the MolResidue.seqCode
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiInteger Mols_Residue_GetSeqCode(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.seqId

Identifier corresponding 
to the molResidue identifier (self.molResidue.serial)
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiInteger Mols_Residue_GetSeqId(Mols_Residue self);

/**
  Get for ccp.molecule.MolSystem.Residue.seqInsertCode

Author insertion 
code. Defaults to MolResidue.seqInsertCode (which again defaults to a 
single white space ' ').
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiString Mols_Residue_GetSeqInsertCode(Mols_Residue self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_Residue self
  @returns   the result
**/
extern Impl_TopObject Mols_Residue_GetTopObject(Mols_Residue self);

/**
  Constructor for ccp.molecule.MolSystem.Residue
  @param  Mols_Chain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_Residue Mols_Residue_Init(Mols_Chain parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.Residue
  @param  Mols_Chain parent
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
extern Mols_Residue Mols_Residue_Init_reqd(Mols_Chain parent, char * descriptor, char * linking, ApiInteger seqCode, ApiInteger seqId);

/**
  Factory function to create ccp.molecule.MolSystem.Atom
  @param  Mols_Residue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_Atom Mols_Residue_NewAtom(Mols_Residue self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.MolSystem.Atom
  @param  Mols_Residue self
  @param  char * name
  @returns  the new object
**/
extern Mols_Atom Mols_Residue_NewAtom_reqd(Mols_Residue self, char * name);

/**
  Factory function to create ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_MolSystemLinkEnd Mols_Residue_NewMolSystemLinkEnd(Mols_Residue self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * linkCode
  @returns  the new object
**/
extern Mols_MolSystemLinkEnd Mols_Residue_NewMolSystemLinkEnd_reqd(Mols_Residue self, char * linkCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Residue_RemoveApplicationData(Mols_Residue self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  Nmr_ChainStateSet value
**/
extern void *Mols_Residue_RemoveChainStateSet(Mols_Residue self, Nmr_ChainStateSet value);

/**
  Remove for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  Nmr_ResonanceGroup value
**/
extern void *Mols_Residue_RemoveResonanceGroup(Mols_Residue self, Nmr_ResonanceGroup value);

/**
  SetAttr for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_Residue_Set(Mols_Residue self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Residue self
  @param  Acco_AccessObject value
**/
extern void *Mols_Residue_SetAccess(Mols_Residue self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  ApiList values
**/
extern void *Mols_Residue_SetApplicationData(Mols_Residue self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.Residue.chainFragment

ChainFragment to 
which Residue belongs. When Chains are created, each Residue will 
automatically be linked to a ChainFragment, so that the Chain is divided 
in Fragments of uniform molType.
  @param  Mols_Residue self
  @param  Mols_ChainFragment value
**/
extern void *Mols_Residue_SetChainFragment(Mols_Residue self, Mols_ChainFragment value);

/**
  Set for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  ApiSet values
**/
extern void *Mols_Residue_SetChainStateSets(Mols_Residue self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  ApiSet values
**/
extern void *Mols_Residue_SetDangleResidues(Mols_Residue self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Residue.descriptor

descriptor of 
ChemCompVar corresponding to Residue. Describes topological variant, 
i.e. protonation state or (for Polymers) non-polymer type 
substitution.

 linking and descriptor may be changed for existing 
Residues, thus changing the identity of the corresponding ChemCompVar. 

The new chemCompVar must contain a ChemAtom to correspond to every 
existing Atom, and a LinkEnd to correspond to every existing 
MolSystemLinkEnd, as well as every existing MolResLinkEnd in the 
MolResidue. Note that this may require that Atom and MolSsytemLinkEnd 
objects be deleted before the linking and descriptor can be modified.
  @param  Mols_Residue self
  @param  ApiString value
**/
extern void *Mols_Residue_SetDescriptor(Mols_Residue self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Residue.details

free text for notes, 
etc.
  @param  Mols_Residue self
  @param  ApiString value
**/
extern void *Mols_Residue_SetDetails(Mols_Residue self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Residue.linking

linking (substitution 
pattern) of ChemCompVar corresponding to Residue. linking and descriptor 
may be changed for existing Residues, thus changing the identity of the 
corresponding ChemCompVar. 
The new chemCompVar must contain a ChemAtom 
to correspond to every existing Atom, and a LinkEnd to correspond to 
every existing MolSystemLinkEnd, as well as every existing MolResLinkEnd 
in the MolResidue. Note that this may require that Atom and 
MolSsytemLinkEnd objects be deleted before the linking and descriptor 
can be modified.
  @param  Mols_Residue self
  @param  ApiString value
**/
extern void *Mols_Residue_SetLinking(Mols_Residue self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiSet values
**/
extern void *Mols_Residue_SetResidueProbs(Mols_Residue self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiSet values
**/
extern void *Mols_Residue_SetResonanceGroups(Mols_Residue self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Residue.seqCode

Author sequence 
identifier. Defaults to the MolResidue.seqCode
  @param  Mols_Residue self
  @param  ApiInteger value
**/
extern void *Mols_Residue_SetSeqCode(Mols_Residue self, ApiInteger value);

/**
  Set for ccp.molecule.MolSystem.Residue.seqId

Identifier corresponding 
to the molResidue identifier (self.molResidue.serial)
  @param  Mols_Residue self
  @param  ApiInteger value
**/
extern void *Mols_Residue_SetSeqId(Mols_Residue self, ApiInteger value);

/**
  Set for ccp.molecule.MolSystem.Residue.seqInsertCode

Author insertion 
code. Defaults to MolResidue.seqInsertCode (which again defaults to a 
single white space ' ').
  @param  Mols_Residue self
  @param  ApiString value
**/
extern void *Mols_Residue_SetSeqInsertCode(Mols_Residue self, ApiString value);

/**
  Sorted for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedAtoms(Mols_Residue self);

/**
  Sorted for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedChainStateSets(Mols_Residue self);

/**
  Sorted for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedDangleResidues(Mols_Residue self);

/**
  Sorted for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedMolSystemLinkEnds(Mols_Residue self);

/**
  Sorted for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedResidueProbs(Mols_Residue self);

/**
  Sorted for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns   the result
**/
extern ApiList Mols_Residue_SortedResonanceGroups(Mols_Residue self);

#endif /* __incl__ccp_api_molecule_MolSystem_Residue_h__ */
