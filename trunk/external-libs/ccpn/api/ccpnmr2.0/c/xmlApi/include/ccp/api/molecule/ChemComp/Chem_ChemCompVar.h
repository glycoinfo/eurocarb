
#ifndef __incl__ccp_api_molecule_ChemComp_ChemCompVar_h__
#define __incl__ccp_api_molecule_ChemComp_ChemCompVar_h__

#include "ccp.h"

/*
  ChemComp with a given chain location (for polymers) or sybstitution/lin king pattern (for non-polymers) and a given topological variant. Topological variants are e.g. protonation states, and in general topological variations that can change over time for a given molecule. For Polymers topological variations (defined through the descriptor attribute) also include linking patterns in addition to those that make up the linear polymer links.
  
  A Polymer ChemComp is any ChemComp with at least one ChemCompVar with  linking 'start', 'middle', or 'end'.  
  If linking is 'start', there must be a 'next' link but no 'prev' link
  if linking is 'end' there must be a 'prev' link but no 'next' link
  if linking is 'middle' there must be both a 'next' and 'a prev'
  if linking is neither there must be neither a 'next' nor a 'prev' link
  if linking is 'none' and the ChemComp is not a linear polymer, there must be no links at all.
  If there are no links, liking must be 'none'
  
  The relevant constraints are placed on ChemCompVar and LinkEnd.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemCompVar_AddApplicationData(Chem_ChemCompVar self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Chem_AbstractChemAtom value
**/
extern void *Chem_ChemCompVar_AddChemAtom(Chem_ChemCompVar self, Chem_AbstractChemAtom value);

/**
  Add for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @param  Chem_ChemCompSysName value
**/
extern void *Chem_ChemCompVar_AddSpecificSysName(Chem_ChemCompVar self, Chem_ChemCompSysName value);

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemCompVar_CheckAllValid(Chem_ChemCompVar self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemCompVar_CheckValid(Chem_ChemCompVar self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemCompVar_FindAllApplicationData(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemCompVar_FindAllApplicationData_keyval0(Chem_ChemCompVar self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemCompVar_FindAllApplicationData_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemCompVar_FindAllApplicationData_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemCompVar_FindAllApplicationData_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
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
extern ApiList Chem_ChemCompVar_FindAllApplicationData_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAngles(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval0(Chem_ChemCompVar self);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemBonds(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval0(Chem_ChemCompVar self);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval0(Chem_ChemCompVar self);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
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
extern ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
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
extern Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
extern Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
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
extern Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
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
extern Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
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
extern Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
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
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
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
extern Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
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
extern Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName(Chem_ChemCompVar self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval0(Chem_ChemCompVar self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval1(Chem_ChemCompVar self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
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
extern Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_ChemCompVar_Get(Chem_ChemCompVar self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern Acco_AccessObject Chem_ChemCompVar_GetAccess(Chem_ChemCompVar self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_GetApplicationData(Chem_ChemCompVar self);

/**
  GetByKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_ChemCompVar Chem_ChemCompVar_GetByKey(Chem_ChemCompVar self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived link chemAngles
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemAngles(Chem_ChemCompVar self);

/**
  getter for derived link chemAtomSets
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemAtomSets(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemAtoms(Chem_ChemCompVar self);

/**
  getter for derived link chemBonds
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemBonds(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.chemComp

parent link
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemCompVar_GetChemComp(Chem_ChemCompVar self);

/**
  getter for derived link chemCompSysNames
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemCompSysNames(Chem_ChemCompVar self);

/**
  getter for derived link chemTorsions
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetChemTorsions(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetClassName(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.descriptor

Short string 
distinguishing the topological variant of the ChemCompVar (e.g. 
protonation state) of the ChemCompVar. For ChemComps of linear polymer 
type (only) also distinguishes substitution patterns not related to the 
polymer bonds. The formatting rules are complex - see comment in 
'descriptor_format_rule' constraint for details.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetDescriptor(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_GetFieldNames(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.formalCharge

Formal charge of 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiInteger Chem_ChemCompVar_GetFormalCharge(Chem_ChemCompVar self);

/**
  getter for derived attribute formula
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetFormula(Chem_ChemCompVar self);

/**
  GetFullKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_ChemCompVar_GetFullKey(Chem_ChemCompVar self, ApiBoolean useGuid);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.glycoCtCode

glycoCT 
chem_comp_code specific to ChemCompVar. If not set use 
chemComp.baseGlycoCtCode
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetGlycoCtCode(Chem_ChemCompVar self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiBoolean Chem_ChemCompVar_GetInConstructor(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isAromatic

is ChemCompVar  
aromatic?
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiBoolean Chem_ChemCompVar_GetIsAromatic(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isDefaultVar

Is this 
ChemCompVar the default for its linking? Or, in other words, is this the 
ChemCompVar to use by default when creating a MolResidue with this 
particular molType, ccpCode, and linking? 
Note 
that
myChemComp.findAllChemCompVars(linking=x,isDefaultVar=True)

will 
return either one object or none for any value of x.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiBoolean Chem_ChemCompVar_GetIsDefaultVar(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiBoolean Chem_ChemCompVar_GetIsDeleted(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isParamagnetic

is ChemCompVar 
paramagnetic?
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiBoolean Chem_ChemCompVar_GetIsParamagnetic(Chem_ChemCompVar self);

/**
  getter for derived link linkEnds
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetLinkEnds(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.linking

String distinguishing 
the pattern of linkEnds (substitution pattern) of the ChemCompVar.  For 
a linear polymer type ChemComp linking must be 'start', 'middle', 'end', 
or 'none', and other linking patterns are taken care of by the 
descriptor attribute. For Other ChemComps linking distinguishes all 
possible substitution patterns. Here the format is 'link:' followed by a 
comma-separated list of the linkCodes for the active links. E.g. 
'link:SG,C1_2'
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetLinking(Chem_ChemCompVar self);

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  Local object key
**/
extern ApiObject Chem_ChemCompVar_GetLocalKey(Chem_ChemCompVar self);

/**
  getter for derived attribute molecularMass
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiFloat Chem_ChemCompVar_GetMolecularMass(Chem_ChemCompVar self);

/**
  getter for derived attribute 'name'.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetName(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.nonStereoSmiles

Smiles 
description of topology (non-stereo)
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetNonStereoSmiles(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetPackageName(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetPackageShortName(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.parent

link to parent object 
- synonym for chemComp
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemCompVar_GetParent(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetQualifiedName(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_ChemCompVar_GetRoot(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiSet Chem_ChemCompVar_GetSpecificSysNames(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.stereoSmiles

Smiles 
description of topology (stereo)
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetStereoSmiles(Chem_ChemCompVar self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern Impl_TopObject Chem_ChemCompVar_GetTopObject(Chem_ChemCompVar self);

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.varName

Name for ChemCompVar. 
Overrides ChemComp.name and should only be set when different from this. 
See ChemCompVar.name documentation
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiString Chem_ChemCompVar_GetVarName(Chem_ChemCompVar self);

/**
  Constructor for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_ChemCompVar Chem_ChemCompVar_Init(Chem_ChemComp parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp parent
  @param  char * descriptor
  @param  ApiInteger formalCharge
  @param  int isAromatic
  @param  int isParamagnetic
  @param  char * linking
  @returns  the new object
**/
extern Chem_ChemCompVar Chem_ChemCompVar_Init_reqd(Chem_ChemComp parent, char * descriptor, ApiInteger formalCharge, int isAromatic, int isParamagnetic, char * linking);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemCompVar_RemoveApplicationData(Chem_ChemCompVar self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Chem_AbstractChemAtom value
**/
extern void *Chem_ChemCompVar_RemoveChemAtom(Chem_ChemCompVar self, Chem_AbstractChemAtom value);

/**
  Remove for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  Chem_ChemCompSysName value
**/
extern void *Chem_ChemCompVar_RemoveSpecificSysName(Chem_ChemCompVar self, Chem_ChemCompSysName value);

/**
  SetAttr for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_ChemCompVar_Set(Chem_ChemCompVar self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemCompVar self
  @param  Acco_AccessObject value
**/
extern void *Chem_ChemCompVar_SetAccess(Chem_ChemCompVar self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  ApiList values
**/
extern void *Chem_ChemCompVar_SetApplicationData(Chem_ChemCompVar self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiSet values
**/
extern void *Chem_ChemCompVar_SetChemAtoms(Chem_ChemCompVar self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.descriptor

Short string 
distinguishing the topological variant of the ChemCompVar (e.g. 
protonation state) of the ChemCompVar. For ChemComps of linear polymer 
type (only) also distinguishes substitution patterns not related to the 
polymer bonds. The formatting rules are complex - see comment in 
'descriptor_format_rule' constraint for details.
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetDescriptor(Chem_ChemCompVar self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.formalCharge

Formal charge of 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiInteger value
**/
extern void *Chem_ChemCompVar_SetFormalCharge(Chem_ChemCompVar self, ApiInteger value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.glycoCtCode

glycoCT 
chem_comp_code specific to ChemCompVar. If not set use 
chemComp.baseGlycoCtCode
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetGlycoCtCode(Chem_ChemCompVar self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isAromatic

is ChemCompVar  
aromatic?
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
extern void *Chem_ChemCompVar_SetIsAromatic(Chem_ChemCompVar self, ApiBoolean value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isDefaultVar

Is this 
ChemCompVar the default for its linking? Or, in other words, is this the 
ChemCompVar to use by default when creating a MolResidue with this 
particular molType, ccpCode, and linking? 
Note 
that
myChemComp.findAllChemCompVars(linking=x,isDefaultVar=True)

will 
return either one object or none for any value of x.
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
extern void *Chem_ChemCompVar_SetIsDefaultVar(Chem_ChemCompVar self, ApiBoolean value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isParamagnetic

is ChemCompVar 
paramagnetic?
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
extern void *Chem_ChemCompVar_SetIsParamagnetic(Chem_ChemCompVar self, ApiBoolean value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.linking

String distinguishing 
the pattern of linkEnds (substitution pattern) of the ChemCompVar.  For 
a linear polymer type ChemComp linking must be 'start', 'middle', 'end', 
or 'none', and other linking patterns are taken care of by the 
descriptor attribute. For Other ChemComps linking distinguishes all 
possible substitution patterns. Here the format is 'link:' followed by a 
comma-separated list of the linkCodes for the active links. E.g. 
'link:SG,C1_2'
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetLinking(Chem_ChemCompVar self, ApiString value);

/**
  setter for derived, settable attribute 'name'.
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetName(Chem_ChemCompVar self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.nonStereoSmiles

Smiles 
description of topology (non-stereo)
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetNonStereoSmiles(Chem_ChemCompVar self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @param  ApiSet values
**/
extern void *Chem_ChemCompVar_SetSpecificSysNames(Chem_ChemCompVar self, ApiSet values);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.stereoSmiles

Smiles 
description of topology (stereo)
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetStereoSmiles(Chem_ChemCompVar self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.varName

Name for ChemCompVar. 
Overrides ChemComp.name and should only be set when different from this. 
See ChemCompVar.name documentation
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
extern void *Chem_ChemCompVar_SetVarName(Chem_ChemCompVar self, ApiString value);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles that 
lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemAngles(Chem_ChemCompVar self);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemAtomSets(Chem_ChemCompVar self);

/**
  Sorted for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemAtoms(Chem_ChemCompVar self);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemBonds(Chem_ChemCompVar self);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemCompSysNames(Chem_ChemCompVar self);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedChemTorsions(Chem_ChemCompVar self);

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedLinkEnds(Chem_ChemCompVar self);

/**
  Sorted for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
extern ApiList Chem_ChemCompVar_SortedSpecificSysNames(Chem_ChemCompVar self);

#endif /* __incl__ccp_api_molecule_ChemComp_ChemCompVar_h__ */
