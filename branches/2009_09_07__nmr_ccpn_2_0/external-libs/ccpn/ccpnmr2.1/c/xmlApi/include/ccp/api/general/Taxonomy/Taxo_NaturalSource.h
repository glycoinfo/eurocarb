
#ifndef __incl__ccp_api_general_Taxonomy_NaturalSource_h__
#define __incl__ccp_api_general_Taxonomy_NaturalSource_h__

#include "ccp.h"

/*
  Natural source of molecule.
*/

/* package ccp.api.general.Taxonomy */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  Impl_ApplicationData value
**/
extern void *Taxo_NaturalSource_AddApplicationData(Taxo_NaturalSource self, Impl_ApplicationData value);

/**
  Add for ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to 
Nmr Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  Entr_EntryMolecule value
**/
extern void *Taxo_NaturalSource_AddEntryMolecule(Taxo_NaturalSource self, Entr_EntryMolecule value);

/**
  Add for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  Mole_MolSeqFragment value
**/
extern void *Taxo_NaturalSource_AddMolSeqFragment(Taxo_NaturalSource self, Mole_MolSeqFragment value);

/**
  Add for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  Mole_Molecule value
**/
extern void *Taxo_NaturalSource_AddMolecule(Taxo_NaturalSource self, Mole_Molecule value);

/**
  Add for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  Targ_Target value
**/
extern void *Taxo_NaturalSource_AddTarget(Taxo_NaturalSource self, Targ_Target value);

/**
  CheckAllValid for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean complete
**/
extern void *Taxo_NaturalSource_CheckAllValid(Taxo_NaturalSource self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean complete
**/
extern void *Taxo_NaturalSource_CheckValid(Taxo_NaturalSource self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_NaturalSource_FindAllApplicationData(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_NaturalSource_FindAllApplicationData_keyval0(Taxo_NaturalSource self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_NaturalSource_FindAllApplicationData_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_NaturalSource_FindAllApplicationData_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_NaturalSource_FindAllApplicationData_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
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
extern ApiList Taxo_NaturalSource_FindAllApplicationData_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules_keyval0(Taxo_NaturalSource self);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
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
extern ApiSet Taxo_NaturalSource_FindAllEntryMolecules_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval0(Taxo_NaturalSource self);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
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
extern ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolecules(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolecules_keyval0(Taxo_NaturalSource self);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolecules_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolecules_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllMolecules_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
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
extern ApiSet Taxo_NaturalSource_FindAllMolecules_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllTargets(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllTargets_keyval0(Taxo_NaturalSource self);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllTargets_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllTargets_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_NaturalSource_FindAllTargets_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
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
extern ApiSet Taxo_NaturalSource_FindAllTargets_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval0(Taxo_NaturalSource self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
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
extern Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule_keyval0(Taxo_NaturalSource self);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to Nmr 
Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
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
extern Entr_EntryMolecule Taxo_NaturalSource_FindFirstEntryMolecule_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval0(Taxo_NaturalSource self);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
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
extern Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval0(Taxo_NaturalSource self);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
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
extern Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Taxo_NaturalSource_FindFirstTarget(Taxo_NaturalSource self, ApiMap conditions);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval0(Taxo_NaturalSource self);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval1(Taxo_NaturalSource self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
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
extern Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Taxo_NaturalSource_Get(Taxo_NaturalSource self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Acco_AccessObject Taxo_NaturalSource_GetAccess(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Acco_AccessObject Taxo_NaturalSource_GetActiveAccess(Taxo_NaturalSource self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_GetApplicationData(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.atccNumber

ATCC number of 
cell line. Should be removed?
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetAtccNumber(Taxo_NaturalSource self);

/**
  GetByKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Taxo_NaturalSource Taxo_NaturalSource_GetByKey(Taxo_NaturalSource self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellLine

Source cell line.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetCellLine(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellLocation

The source cell 
location.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetCellLocation(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellType

Source cell type.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetCellType(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetClassName(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.details

Details, comments, 
notes about natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetDetails(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to 
Nmr Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiSet Taxo_NaturalSource_GetEntryMolecules(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_GetFieldNames(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.fraction

Is this the same as 
tissueFraction (which would then be a better name)?
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetFraction(Taxo_NaturalSource self);

/**
  GetFullKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Taxo_NaturalSource_GetFullKey(Taxo_NaturalSource self, ApiBoolean useGuid);

/**
  Get for ccp.general.Taxonomy.NaturalSource.geneMnemonic

Gene Mnemonic.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetGeneMnemonic(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.genus

Organism genus.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetGenus(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.ictvCode

The code for the 
International Comitee on Taxonomy of Viruses.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetIctvCode(Taxo_NaturalSource self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiBoolean Taxo_NaturalSource_GetInConstructor(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiBoolean Taxo_NaturalSource_GetIsDeleted(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.kingdom

kingdom to which 
organism belongs (in theory derivable from genus and species).
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetKingdom(Taxo_NaturalSource self);

/**
  GetLocalKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @returns  Local object key
**/
extern ApiObject Taxo_NaturalSource_GetLocalKey(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiSet Taxo_NaturalSource_GetMolSeqFragments(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiSet Taxo_NaturalSource_GetMolecules(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.ncbiTaxonomyId

The ID for 
the NCBI taxonomy node.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetNcbiTaxonomyId(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.organ

Source Organ.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetOrgan(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.organelle

Organelle from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetOrganelle(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.organismAcronym

The organism 
acronym.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetOrganismAcronym(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.organismName

Common name of 
organism.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetOrganismName(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetPackageName(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetPackageShortName(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.parent

link to parent object 
- synonym for taxonomy
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Taxo_Taxonomy Taxo_NaturalSource_GetParent(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.plasmid

Plasmid name, if 
molecule is (part of) a plasmid.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetPlasmid(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.plasmidDetails

N/A
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetPlasmidDetails(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetQualifiedName(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Impl_MemopsRoot Taxo_NaturalSource_GetRoot(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.scientificName

The NCBI 
scientific name. (= genius + species).
This should really be a derived 
attribute!
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetScientificName(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.secretion

Secretion from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetSecretion(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.serial

The serial number is 
the key for class NaturalSource and together with the parent object 
serves as a unique identifier for the NaturalSource.
Serial numbers are 
generated by the API. Serial numbers of deleted objects are not reused.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiInteger Taxo_NaturalSource_GetSerial(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.species

Organism species.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetSpecies(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.strain

Organism strain.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetStrain(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.subVariant

Organism 
sub-variant.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetSubVariant(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.superKingdom

super-kingdom 
to which organism belongs (in theory derivable from genus and species).
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetSuperKingdom(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiSet Taxo_NaturalSource_GetTargets(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.taxonomy

parent link
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Taxo_Taxonomy Taxo_NaturalSource_GetTaxonomy(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.tissue

Source tissue.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetTissue(Taxo_NaturalSource self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern Impl_TopObject Taxo_NaturalSource_GetTopObject(Taxo_NaturalSource self);

/**
  Get for ccp.general.Taxonomy.NaturalSource.variant

Organism variant.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiString Taxo_NaturalSource_GetVariant(Taxo_NaturalSource self);

/**
  Constructor for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Taxo_NaturalSource Taxo_NaturalSource_Init(Taxo_Taxonomy parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy parent
  @param  char * organismName
  @returns  the new object
**/
extern Taxo_NaturalSource Taxo_NaturalSource_Init_reqd(Taxo_Taxonomy parent, char * organismName);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  Impl_ApplicationData value
**/
extern void *Taxo_NaturalSource_RemoveApplicationData(Taxo_NaturalSource self, Impl_ApplicationData value);

/**
  Remove for ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection 
to Nmr Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  Entr_EntryMolecule value
**/
extern void *Taxo_NaturalSource_RemoveEntryMolecule(Taxo_NaturalSource self, Entr_EntryMolecule value);

/**
  Remove for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  Mole_MolSeqFragment value
**/
extern void *Taxo_NaturalSource_RemoveMolSeqFragment(Taxo_NaturalSource self, Mole_MolSeqFragment value);

/**
  Remove for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  Mole_Molecule value
**/
extern void *Taxo_NaturalSource_RemoveMolecule(Taxo_NaturalSource self, Mole_Molecule value);

/**
  Remove for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  Targ_Target value
**/
extern void *Taxo_NaturalSource_RemoveTarget(Taxo_NaturalSource self, Targ_Target value);

/**
  SetAttr for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Taxo_NaturalSource_Set(Taxo_NaturalSource self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_NaturalSource self
  @param  Acco_AccessObject value
**/
extern void *Taxo_NaturalSource_SetAccess(Taxo_NaturalSource self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  ApiList values
**/
extern void *Taxo_NaturalSource_SetApplicationData(Taxo_NaturalSource self, ApiList values);

/**
  Set for ccp.general.Taxonomy.NaturalSource.atccNumber

ATCC number of 
cell line. Should be removed?
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetAtccNumber(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellLine

Source cell line.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetCellLine(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellLocation

The source cell 
location.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetCellLocation(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellType

Source cell type.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetCellType(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.details

Details, comments, 
notes about natural source.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetDetails(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection to 
Nmr Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
extern void *Taxo_NaturalSource_SetEntryMolecules(Taxo_NaturalSource self, ApiSet values);

/**
  Set for ccp.general.Taxonomy.NaturalSource.fraction

Is this the same as 
tissueFraction (which would then be a better name)?
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetFraction(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.geneMnemonic

Gene Mnemonic.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetGeneMnemonic(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.genus

Organism genus.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetGenus(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.ictvCode

The code for the 
International Comitee on Taxonomy of Viruses.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetIctvCode(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.kingdom

kingdom to which 
organism belongs (in theory derivable from genus and species).
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetKingdom(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
extern void *Taxo_NaturalSource_SetMolSeqFragments(Taxo_NaturalSource self, ApiSet values);

/**
  Set for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
extern void *Taxo_NaturalSource_SetMolecules(Taxo_NaturalSource self, ApiSet values);

/**
  Set for ccp.general.Taxonomy.NaturalSource.ncbiTaxonomyId

The ID for 
the NCBI taxonomy node.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetNcbiTaxonomyId(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.organ

Source Organ.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetOrgan(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.organelle

Organelle from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetOrganelle(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.organismAcronym

The organism 
acronym.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetOrganismAcronym(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.organismName

Common name of 
organism.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetOrganismName(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.plasmid

Plasmid name, if 
molecule is (part of) a plasmid.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetPlasmid(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.plasmidDetails

N/A
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetPlasmidDetails(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.scientificName

The NCBI 
scientific name. (= genius + species).
This should really be a derived 
attribute!
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetScientificName(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.secretion

Secretion from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetSecretion(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.serial

The serial number is 
the key for class NaturalSource and together with the parent object 
serves as a unique identifier for the NaturalSource.
Serial numbers are 
generated by the API. Serial numbers of deleted objects are not reused.
  @param  Taxo_NaturalSource self
  @param  ApiInteger value
**/
extern void *Taxo_NaturalSource_SetSerial(Taxo_NaturalSource self, ApiInteger value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.species

Organism species.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetSpecies(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.strain

Organism strain.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetStrain(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.subVariant

Organism 
sub-variant.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetSubVariant(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.superKingdom

super-kingdom 
to which organism belongs (in theory derivable from genus and species).
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetSuperKingdom(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
extern void *Taxo_NaturalSource_SetTargets(Taxo_NaturalSource self, ApiSet values);

/**
  Set for ccp.general.Taxonomy.NaturalSource.tissue

Source tissue.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetTissue(Taxo_NaturalSource self, ApiString value);

/**
  Set for ccp.general.Taxonomy.NaturalSource.variant

Organism variant.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
extern void *Taxo_NaturalSource_SetVariant(Taxo_NaturalSource self, ApiString value);

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.entryMolecules

Connection 
to Nmr Entries where this is used as experimental source of a molecule
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_SortedEntryMolecules(Taxo_NaturalSource self);

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_SortedMolSeqFragments(Taxo_NaturalSource self);

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_SortedMolecules(Taxo_NaturalSource self);

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
extern ApiList Taxo_NaturalSource_SortedTargets(Taxo_NaturalSource self);

#endif /* __incl__ccp_api_general_Taxonomy_NaturalSource_h__ */
