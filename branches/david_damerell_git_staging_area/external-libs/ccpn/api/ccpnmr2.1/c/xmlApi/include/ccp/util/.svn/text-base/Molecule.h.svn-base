#ifndef __incl__ccp_util_Molecule_h__
#define __incl__ccp_util_Molecule_h__

#include "ccp_types.h"
#include "memops/general/all.h"

extern Mole_Molecule createMolecule(Impl_MemopsRoot project, char *molName);
extern Mole_MolResidue createMolResidue(Mole_Molecule molecule, int seqCode, Chem_ChemComp chemComp, char *linking, char *descriptor);
extern void setMolResLink(Mole_MolResidue molRes, char *linkCode, Mole_MolResidue boundMolRes, char *boundLinkCode);

#endif /* __incl__ccp_util_Molecule_h__ */
