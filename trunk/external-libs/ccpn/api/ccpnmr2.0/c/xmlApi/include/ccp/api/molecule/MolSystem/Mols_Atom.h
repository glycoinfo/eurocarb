
#ifndef __incl__ccp_api_molecule_MolSystem_Atom_h__
#define __incl__ccp_api_molecule_MolSystem_Atom_h__

#include "ccp.h"

/*
  Atom in a specific location in a specific molecule in specific surroundings (Chain).
  
  Atoms can *not* be deleted while they are linked to FixedAtomSets. If this is desired the fixedAtomSets link must be cleared first.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Atom_AddApplicationData(Mols_Atom self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  Nmr_ChainStateSet value
**/
extern void *Mols_Atom_AddChainStateSet(Mols_Atom self, Nmr_ChainStateSet value);

/**
  Add for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  Nmrc_FixedAtomSet value
**/
extern void *Mols_Atom_AddFixedAtomSet(Mols_Atom self, Nmrc_FixedAtomSet value);

/**
  CheckAllValid for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean complete
**/
extern void *Mols_Atom_CheckAllValid(Mols_Atom self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean complete
**/
extern void *Mols_Atom_CheckValid(Mols_Atom self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Atom_FindAllApplicationData(Mols_Atom self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Atom_FindAllApplicationData_keyval0(Mols_Atom self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Atom_FindAllApplicationData_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Atom_FindAllApplicationData_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mols_Atom_FindAllApplicationData_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
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
extern ApiList Mols_Atom_FindAllApplicationData_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllChainStateSets(Mols_Atom self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllChainStateSets_keyval0(Mols_Atom self);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllChainStateSets_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllChainStateSets_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllChainStateSets_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
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
extern ApiSet Mols_Atom_FindAllChainStateSets_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllFixedAtomSets(Mols_Atom self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllFixedAtomSets_keyval0(Mols_Atom self);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllFixedAtomSets_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllFixedAtomSets_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllFixedAtomSets_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
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
extern ApiSet Mols_Atom_FindAllFixedAtomSets_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllNonCovalentBonds(Mols_Atom self, ApiMap conditions);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval0(Mols_Atom self);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
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
extern ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData(Mols_Atom self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval0(Mols_Atom self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
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
extern Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet(Mols_Atom self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval0(Mols_Atom self);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
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
extern Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet(Mols_Atom self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval0(Mols_Atom self);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
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
extern Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond(Mols_Atom self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval0(Mols_Atom self);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval1(Mols_Atom self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
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
extern Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mols_Atom_Get(Mols_Atom self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Atom self
  @returns   the result
**/
extern Acco_AccessObject Mols_Atom_GetAccess(Mols_Atom self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiList Mols_Atom_GetApplicationData(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.atomSet

Set of atoms in fast 
exchange with Atom.
  @param  Mols_Atom self
  @returns   the result
**/
extern Nmr_AtomSet Mols_Atom_GetAtomSet(Mols_Atom self);

/**
  GetByKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mols_Atom Mols_Atom_GetByKey(Mols_Atom self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiSet Mols_Atom_GetChainStateSets(Mols_Atom self);

/**
  Get function for derived link to ChemAtom
  @param  Mols_Atom self
  @returns   the result
**/
extern Chem_ChemAtom Mols_Atom_GetChemAtom(Mols_Atom self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiString Mols_Atom_GetClassName(Mols_Atom self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiList Mols_Atom_GetFieldNames(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiSet Mols_Atom_GetFixedAtomSets(Mols_Atom self);

/**
  GetFullKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mols_Atom_GetFullKey(Mols_Atom self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiBoolean Mols_Atom_GetInConstructor(Mols_Atom self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiBoolean Mols_Atom_GetIsDeleted(Mols_Atom self);

/**
  GetLocalKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @returns  Local object key
**/
extern ApiObject Mols_Atom_GetLocalKey(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.name

name of Atom.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiString Mols_Atom_GetName(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent bonds 
in which the atom takes part.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiSet Mols_Atom_GetNonCovalentBonds(Mols_Atom self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiString Mols_Atom_GetPackageName(Mols_Atom self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiString Mols_Atom_GetPackageShortName(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.parent

link to parent object - 
synonym for residue
  @param  Mols_Atom self
  @returns   the result
**/
extern Mols_Residue Mols_Atom_GetParent(Mols_Atom self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiString Mols_Atom_GetQualifiedName(Mols_Atom self);

/**
  Get for ccp.molecule.MolSystem.Atom.residue

parent link
  @param  Mols_Atom self
  @returns   the result
**/
extern Mols_Residue Mols_Atom_GetResidue(Mols_Atom self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mols_Atom self
  @returns   the result
**/
extern Impl_MemopsRoot Mols_Atom_GetRoot(Mols_Atom self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mols_Atom self
  @returns   the result
**/
extern Impl_TopObject Mols_Atom_GetTopObject(Mols_Atom self);

/**
  Constructor for ccp.molecule.MolSystem.Atom
  @param  Mols_Residue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mols_Atom Mols_Atom_Init(Mols_Residue parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolSystem.Atom
  @param  Mols_Residue parent
  @param  char * name
  @returns  the new object
**/
extern Mols_Atom Mols_Atom_Init_reqd(Mols_Residue parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  Impl_ApplicationData value
**/
extern void *Mols_Atom_RemoveApplicationData(Mols_Atom self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  Nmr_ChainStateSet value
**/
extern void *Mols_Atom_RemoveChainStateSet(Mols_Atom self, Nmr_ChainStateSet value);

/**
  Remove for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  Nmrc_FixedAtomSet value
**/
extern void *Mols_Atom_RemoveFixedAtomSet(Mols_Atom self, Nmrc_FixedAtomSet value);

/**
  SetAttr for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mols_Atom_Set(Mols_Atom self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Atom self
  @param  Acco_AccessObject value
**/
extern void *Mols_Atom_SetAccess(Mols_Atom self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  ApiList values
**/
extern void *Mols_Atom_SetApplicationData(Mols_Atom self, ApiList values);

/**
  Set for ccp.molecule.MolSystem.Atom.atomSet

Set of atoms in fast 
exchange with Atom.
  @param  Mols_Atom self
  @param  Nmr_AtomSet value
**/
extern void *Mols_Atom_SetAtomSet(Mols_Atom self, Nmr_AtomSet value);

/**
  Set for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiSet values
**/
extern void *Mols_Atom_SetChainStateSets(Mols_Atom self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiSet values
**/
extern void *Mols_Atom_SetFixedAtomSets(Mols_Atom self, ApiSet values);

/**
  Set for ccp.molecule.MolSystem.Atom.name

name of Atom.
  @param  Mols_Atom self
  @param  ApiString value
**/
extern void *Mols_Atom_SetName(Mols_Atom self, ApiString value);

/**
  Set for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent bonds 
in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiSet values
**/
extern void *Mols_Atom_SetNonCovalentBonds(Mols_Atom self, ApiSet values);

/**
  Sorted for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiList Mols_Atom_SortedChainStateSets(Mols_Atom self);

/**
  Sorted for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiList Mols_Atom_SortedFixedAtomSets(Mols_Atom self);

/**
  Sorted for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns   the result
**/
extern ApiList Mols_Atom_SortedNonCovalentBonds(Mols_Atom self);

#endif /* __incl__ccp_api_molecule_MolSystem_Atom_h__ */
