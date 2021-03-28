#include "ccp/examples/getSequenceInfo.h"

/*********** STILL v1 code below so comment it all out **********/
#ifdef V1_CODE

#include <stdio.h>
#include <string.h>
#include "ccp.h"
#include "memops/general/Io.h"
#include "memops/universal/Constants.h"
#include "ccp/util/ChemComp.h"

void getSequenceInfo(Impl_Project ccpnProject)
{

  int i, j, k, l, allMolSystemsLen, allChainsLen, allResiduesLen, allAtomsLen, boundChemAtomsLen;

  /* First need to get the current molSystem - there might be multiple, so might need to
     select here if you want to do it fully generic */

  Mols_MolSystem molSystem = Impl_Project_GetCurrentMolSystem(ccpnProject);
  
  if (ApiObject_IsNone(molSystem))
  {
    ApiCollection allMolSystems = Impl_Project_GetMolSystems(ccpnProject);
    allMolSystemsLen = ApiCollection_Len(allMolSystems);
    
    if (allMolSystemsLen) molSystem = ApiCollection_Get(allMolSystems,0);
    
    else
    {
      printf("No molecular system found - aborting.\n");
      return;
    }
    
    ApiObject_Free(allMolSystems);
  }
  
  /* Get some sample information from the molecular system and print it - use API docs
  to find full list of attributes/links*/
  printf("MolSystem with code '%s'", ApiString_Get(Mols_MolSystem_GetCode(molSystem)));
  
  /* This attribute is not required, so have to check if set */
  ApiString apiMolSysName = Mols_MolSystem_GetName(molSystem);
  
  if (! ApiObject_IsNone(apiMolSysName))
  {
     printf(" and name '%s'", ApiString_Get(apiMolSysName));  
  }
  
  printf(":\n");

  /* Get a list of the chains */
  ApiCollection allChains = Mols_MolSystem_GetChains(molSystem);
  allChainsLen = ApiCollection_Len(allChains);
  
  for (i=0; i<allChainsLen;i++)
  {
    Mols_Chain chain = (Mols_Chain) ApiCollection_Get(allChains,i);
    
    /* Get some sample information from the chain and print it - use API docs to find full list of
    attributes/links*/
    
    ApiString apiChainCode = Mols_Chain_GetCode(chain);    
    ApiString apiEmpiricalFormula = Mols_Chain_GetEmpiricalFormula(chain);
    ApiFloat apiMolecularMass = Mols_Chain_GetMolecularMass(chain);

    printf("  Chain '%s', formula '%s', mass %.1f:\n", ApiString_Get(apiChainCode),
                                                       ApiString_Get(apiEmpiricalFormula),
                                                       ApiFloat_Get(apiMolecularMass));
    
    ApiCollection allResidues = Mols_Chain_GetResidues(chain);
    allResiduesLen = ApiCollection_Len(allResidues);
    
    printf("\n    Total number of residues: %d\n", allResiduesLen);
    printf("\n    List of residues:\n");
    
    for (j=0; j<allResiduesLen; j++)
    {
    
      Mols_Residue residue = (Mols_Residue) ApiCollection_Get(allResidues,j);
      printf("      '%s.%d'\n", ApiString_Get(Mols_Residue_GetCcpCode(residue)),
                                ApiInteger_Get(Mols_Residue_GetSeqId(residue)));
                              
      ApiCollection allAtoms = Mols_Residue_GetAtoms(residue);
      allAtomsLen = ApiCollection_Len(allAtoms);
      
      for (k=0; k<allAtomsLen;k++)
      {
        Mols_Atom atom = (Mols_Atom) ApiCollection_Get(allAtoms,k);
        printf("          %-4s", ApiString_Get(Mols_Atom_GetName(atom)));
        
        /* Now access the reference information for this atom on the 'chemComp' level*/
        Chem_ChemAtom chemAtom = Mols_Atom_GetChemAtom(atom);
        
        /* Check if this atom is part of a set */
        Chem_ChemAtomSet chemAtomSet = Chem_ChemAtom_GetChemAtomSet(chemAtom);
        
        if (! ApiObject_IsNone(chemAtomSet))
        {
          printf(" (part of set %-4s)", ApiString_Get(Chem_ChemAtomSet_GetName(chemAtomSet)));
        }
        else
        {
          printf("                   ");
        }
        printf(": bound to");
        
        ApiCollection boundChemAtoms = findBoundChemAtomsFromChemAtom(chemAtom);

        boundChemAtomsLen = ApiCollection_Len(boundChemAtoms);

        for (l=0; l<boundChemAtomsLen;l++)
        {
          Chem_ChemAtom boundChemAtom = ApiCollection_Get(boundChemAtoms,l);
          
          ApiString apiBoundChemAtomName = Chem_AbstractChemAtom_GetName(boundChemAtom);
          printf(" %s", ApiString_Get(apiBoundChemAtomName));
          
          /* Free API objects */
          ApiObject_Free(boundChemAtom);
          ApiObject_Free(apiBoundChemAtomName);
        }
        /* TODO: also need to look at atoms in other residues bound via main chain (LinkAtoms in CCPN jargon)*/
                
        printf("\n");
        
        /* Free API objects */
        ApiObject_Free(boundChemAtoms);
        ApiObject_Free(chemAtomSet);
        ApiObject_Free(chemAtom);
        ApiObject_Free(atom);
        
      }

      /* Free API objects */
      ApiObject_Free(residue);
      ApiObject_Free(allAtoms);

    }

    /* Free API objects */
    ApiObject_Free(chain);
    ApiObject_Free(apiChainCode);
    ApiObject_Free(apiEmpiricalFormula);
    ApiObject_Free(apiMolecularMass);
    ApiObject_Free(allResidues);

  }
  
  /* Free Api objects */
  
  ApiObject_Free(allChains);
  ApiObject_Free(apiMolSysName);
  ApiObject_Free(molSystem);
  
}


int main(int argc, char **argv)
{

  /* Load a CCPN project */
  Impl_Project ccpnProject;
  char projectFileName[CCP_PATH_MAX];

  if (argc == 2)
  {
    stringCompose1(CCP_PATH_MAX, projectFileName, argv[1]);
  }
  
  else {
    stringCompose1(CCP_PATH_MAX, projectFileName, "data/bmr4177.xml");
  }

  ccpnProject = loadXmlProjectFile(projectFileName);

  if (!ccpnProject)
  {
    printRaisedException();
    return 0;
  }
   
  /* Comment: we do not store the Karplus stuff, but could add it, in principle */
  getSequenceInfo(ccpnProject);
   
  return 1;
}

#else

int main(int argc, char **argv)
{
  return 1;
}

#endif

