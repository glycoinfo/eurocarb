
#ifndef __incl__ccp_api_nmr_Nmr_ChainStateSet_h__
#define __incl__ccp_api_nmr_Nmr_ChainStateSet_h__

#include "ccp.h"

/*
  Defines a set of states that apply to a chain. The ChainStates in a ChainStateSet are mutually exclusive. Their exact nature is defined by the StateSiteType. 
  
  ChainStates serve to distinguish Resonances that arise from the same atom in different states of the chain, to describe the State of molecules used for a structure generation, and to define the state (including fast exchange) of a chain under the conditions of a given experiment. 
  
  A ChainState only describes the situation for one particular set of alternatives, and implies nothing about others. For example, a molecule with seven prolines in slow cis/trans equilibrium would have seven ChainStateSets. A given resonance could then be described (by linking it to ChainStates) as Pro-47 cis, Pro-112 trans, without implying anything about the state of the remaining five prolines.  
  
  stateSetType and ChainState.name are freely changeable, reflecting the fact that the origin of sets of observed resonances is often unknown until a late stage of analysis. Once the precise situation is known, the following procedures should be used where applicable:
  
  stateSetType: cis/trans
  ChainState names: cis, trans
  Links: to the two atoms that are cis or trans (in the case of peptide bonds to the two alpha carbons of the residues involved). 
  
  stateSetType: protonation
  ChainState names: protonated, deprotonated
  Links: To the proton that is removed on deprotonation.
  
  stateSetType: isotopomer
  ChainState names : isotope codes of the relevant isotopes (e.g. 12C, 13C)
  Links: To the atom(s) that change isotope.
  NB this mechanism only handles atoms of the same type that change in parallel. If the isotope substitution pattern is more complex, is may be necessary to define several ChainStateSets, possibly redefining the ChainStates when the situation has been analysed.
  
  stateSetType: folding
  ChainState names: folded, unfolded
  Links : to the residues involved in the transition.
  
  stateSetType : conformation
  ChainState names: can be chosen freely
  Links: to the residues changing conformation.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ChainStateSet_AddApplicationData(Nmr_ChainStateSet self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  Mols_Atom value
**/
extern void *Nmr_ChainStateSet_AddAtom(Nmr_ChainStateSet self, Mols_Atom value);

/**
  Add for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  Mols_Residue value
**/
extern void *Nmr_ChainStateSet_AddResidue(Nmr_ChainStateSet self, Mols_Residue value);

/**
  CheckAllValid for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean complete
**/
extern void *Nmr_ChainStateSet_CheckAllValid(Nmr_ChainStateSet self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean complete
**/
extern void *Nmr_ChainStateSet_CheckValid(Nmr_ChainStateSet self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ChainStateSet_FindAllApplicationData(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval0(Nmr_ChainStateSet self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
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
extern ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllAtoms(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval0(Nmr_ChainStateSet self);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
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
extern ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllChainStates(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval0(Nmr_ChainStateSet self);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
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
extern ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllResidues(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllResidues_keyval0(Nmr_ChainStateSet self);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllResidues_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllResidues_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ChainStateSet_FindAllResidues_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
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
extern ApiSet Nmr_ChainStateSet_FindAllResidues_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval0(Nmr_ChainStateSet self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
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
extern Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval0(Nmr_ChainStateSet self);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
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
extern Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval0(Nmr_ChainStateSet self);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
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
extern Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue(Nmr_ChainStateSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval0(Nmr_ChainStateSet self);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
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
extern Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ChainStateSet_Get(Nmr_ChainStateSet self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ChainStateSet_GetAccess(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ChainStateSet_GetActiveAccess(Nmr_ChainStateSet self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiList Nmr_ChainStateSet_GetApplicationData(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiSet Nmr_ChainStateSet_GetAtoms(Nmr_ChainStateSet self);

/**
  GetByKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ChainStateSet Nmr_ChainStateSet_GetByKey(Nmr_ChainStateSet self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.chain

Chain to which ChainStateSet 
belongs
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Mols_Chain Nmr_ChainStateSet_GetChain(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiSet Nmr_ChainStateSet_GetChainStates(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetClassName(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetDetails(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiList Nmr_ChainStateSet_GetFieldNames(Nmr_ChainStateSet self);

/**
  GetFullKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_ChainStateSet_GetFullKey(Nmr_ChainStateSet self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiBoolean Nmr_ChainStateSet_GetInConstructor(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiBoolean Nmr_ChainStateSet_GetIsDeleted(Nmr_ChainStateSet self);

/**
  GetLocalKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @returns  Local object key
**/
extern ApiObject Nmr_ChainStateSet_GetLocalKey(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.nmrProject

parent link
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ChainStateSet_GetNmrProject(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetPackageName(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetPackageShortName(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ChainStateSet_GetParent(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetQualifiedName(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiSet Nmr_ChainStateSet_GetResidues(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ChainStateSet_GetRoot(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiInteger Nmr_ChainStateSet_GetSerial(Nmr_ChainStateSet self);

/**
  Get for ccp.nmr.Nmr.ChainStateSet.stateSetType

Type of State Set. 
Describes which factor distinguishes the various chainstates, be it 
protonation state, cis/trants isomerism, conformation, ... If the 
distinguishing factor is  unknown,  stateSetType should not be set.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiString Nmr_ChainStateSet_GetStateSetType(Nmr_ChainStateSet self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern Impl_TopObject Nmr_ChainStateSet_GetTopObject(Nmr_ChainStateSet self);

/**
  Constructor for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ChainStateSet Nmr_ChainStateSet_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject parent
  @param  Mols_Chain chain
  @returns  the new object
**/
extern Nmr_ChainStateSet Nmr_ChainStateSet_Init_reqd(Nmr_NmrProject parent, Mols_Chain chain);

/**
  Factory function to create ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ChainState Nmr_ChainStateSet_NewChainState(Nmr_ChainStateSet self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet self
  @returns  the new object
**/
extern Nmr_ChainState Nmr_ChainStateSet_NewChainState_reqd(Nmr_ChainStateSet self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ChainStateSet_RemoveApplicationData(Nmr_ChainStateSet self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  Mols_Atom value
**/
extern void *Nmr_ChainStateSet_RemoveAtom(Nmr_ChainStateSet self, Mols_Atom value);

/**
  Remove for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  Mols_Residue value
**/
extern void *Nmr_ChainStateSet_RemoveResidue(Nmr_ChainStateSet self, Mols_Residue value);

/**
  SetAttr for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ChainStateSet_Set(Nmr_ChainStateSet self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainStateSet self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ChainStateSet_SetAccess(Nmr_ChainStateSet self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  ApiList values
**/
extern void *Nmr_ChainStateSet_SetApplicationData(Nmr_ChainStateSet self, ApiList values);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiSet values
**/
extern void *Nmr_ChainStateSet_SetAtoms(Nmr_ChainStateSet self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.chain

Chain to which ChainStateSet 
belongs
  @param  Nmr_ChainStateSet self
  @param  Mols_Chain value
**/
extern void *Nmr_ChainStateSet_SetChain(Nmr_ChainStateSet self, Mols_Chain value);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainStateSet self
  @param  ApiString value
**/
extern void *Nmr_ChainStateSet_SetDetails(Nmr_ChainStateSet self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiSet values
**/
extern void *Nmr_ChainStateSet_SetResidues(Nmr_ChainStateSet self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ChainStateSet self
  @param  ApiInteger value
**/
extern void *Nmr_ChainStateSet_SetSerial(Nmr_ChainStateSet self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ChainStateSet.stateSetType

Type of State Set. 
Describes which factor distinguishes the various chainstates, be it 
protonation state, cis/trants isomerism, conformation, ... If the 
distinguishing factor is  unknown,  stateSetType should not be set.
  @param  Nmr_ChainStateSet self
  @param  ApiString value
**/
extern void *Nmr_ChainStateSet_SetStateSetType(Nmr_ChainStateSet self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiList Nmr_ChainStateSet_SortedAtoms(Nmr_ChainStateSet self);

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiList Nmr_ChainStateSet_SortedChainStates(Nmr_ChainStateSet self);

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
extern ApiList Nmr_ChainStateSet_SortedResidues(Nmr_ChainStateSet self);

#endif /* __incl__ccp_api_nmr_Nmr_ChainStateSet_h__ */
