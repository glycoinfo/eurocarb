#include "ccp/util/Molecule.h"

/*
#include <stdio.h>
*/

#include "ccp.h"

Mole_Molecule createMolecule(Impl_MemopsRoot project, char *molName)
{

  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "name", molName);
  ApiMap_SetFalse(map, "isFinalised");
  
  Mole_Molecule molecule = Mole_Molecule_Init(project, map);
  
  if (!molecule)
    printRaisedException();
/*
  else
    printf("Created molecule %s\n", molName);
*/

  ApiObject_Free(map);
  
  return molecule;

}

Mole_MolResidue createMolResidue(Mole_Molecule molecule, int seqCode, Chem_ChemComp chemComp, char *linking, char *descriptor)
{

  ApiMap map = ApiMap_New();
  
  ApiMap_SetItem(map,"chemComp", chemComp);
  ApiMap_SetInt(map,"seqCode",seqCode);
  ApiMap_SetString(map,"linking",linking);
  ApiMap_SetString(map,"descriptor",descriptor);
    
  Mole_MolResidue molResidue = Mole_MolResidue_Init(molecule, map);
  
  if (!molResidue)
    printRaisedException();
  
  ApiObject_Free(map);

  return molResidue;  
}

void setMolResLink(Mole_MolResidue molRes, char *linkCode, Mole_MolResidue boundMolRes, char *boundLinkCode)
{

  ApiMap searchMap = ApiMap_New();  
  ApiMap_SetString(searchMap, "linkCode", linkCode);

  Mole_MolResLinkEnd prevLink = Mole_MolResidue_FindFirstMolResLinkEnd(molRes,searchMap);
  
  if (!ApiObject_IsNone(prevLink)) {
  
    ApiMap_SetString(searchMap, "linkCode", boundLinkCode);
        
    Mole_MolResLinkEnd nextLink = Mole_MolResidue_FindFirstMolResLinkEnd(boundMolRes,searchMap);
    
    if (!ApiObject_IsNone(nextLink)) {
    
      Mole_Molecule molecule = Mole_MolResidue_GetParent(molRes);
      
      ApiSet molResLinkEnds = ApiSet_New();
      ApiSet_Add(molResLinkEnds, nextLink);
      ApiSet_Add(molResLinkEnds, prevLink);
      
      ApiMap map = ApiMap_New();
      ApiMap_SetItem(map, "molResLinkEnds", molResLinkEnds);
      
      Mole_MolResLink molResLink = Mole_MolResLink_Init(molecule, map);
      
      if (!molResLink)
        printRaisedException();
/*
      else
        printf("    Created molResLink %s-%s.\n", linkCode, boundLinkCode);
*/

      ApiObject_Free(nextLink);
      ApiObject_Free(molResLinkEnds);
      ApiObject_Free(map);
      ApiObject_Free(molecule);
      ApiObject_Free(molResLink);
    }

    ApiObject_Free(prevLink);
  }

  ApiObject_Free(searchMap);
}
