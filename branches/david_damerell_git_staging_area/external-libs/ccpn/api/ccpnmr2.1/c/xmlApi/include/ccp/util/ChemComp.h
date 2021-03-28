#ifndef __incl__ccp_util_ChemComp_h__
#define __incl__ccp_util_ChemComp_h__

#include "ccp_types.h"
#include "memops/general/all.h"

extern Chem_ChemAtom findFirstChemAtomFromChemComp(Chem_ChemComp chemComp, char *chemAtomName);

extern Chem_LinkAtom createLinkAtom(Chem_ChemComp chemComp,char *linkAtomName);

extern Chem_ChemAtom createChemAtom(Chem_ChemComp chemComp,char *name, char *elementSymbol, char *chirality, int waterExchangeable);

extern Ccco_ChemAtomCoord createChemAtomCoord(Ccco_ChemCompCoord chemCompCoord,Chem_ChemAtom chemAtom, float x, float y, float z);

extern Chem_LinkEnd createLinkEnd(Chem_ChemComp chemComp, char *linkedAtomName, char *linkAtomName);

extern Chem_ChemBond createChemBond(Chem_ChemComp chemComp, char *chemAtomName1, char *chemAtomName2, char *bondType);

/* the linkedAtomNames and removeAtomNames arrays can be at most 999 items long and the last item must be NULL or an empty string */
extern Chem_ChemCompVar createChemCompVar(Chem_ChemComp chemComp, char *linkedAtomNames[], char *removeAtomNames[], char *descriptor, int formalCharge, int isParamagnetic, int isAromatic);

extern void addLinkAtomAndEnd(Chem_ChemComp chemComp, char *linkedAtomName);

extern ApiSet findBoundChemAtomsFromChemAtom(Chem_ChemAtom chemAtom);

#endif /* __incl__ccp_util_ChemComp_h__ */
