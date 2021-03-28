#include "ccp/examples/createCarbMolecules.h"

/*********** STILL v1 code below so comment it all out **********/
#ifdef V1_CODE

#include <stdio.h>
#include <string.h>
#include "ccp.h"
#include "memops/universal/Constants.h"
#include "memops/general/Io.h"
#include "memops/general/Util.h"
#include "ccp/general/Io.h"
#include "ccp/util/Molecule.h"
#include "ccp/util/ChemComp.h"

void createCarbMolecules(Impl_Project ccpnProject)
{

  /* Note that in the coding style in below is not always consistent - this is to illustrate
     the different ways in which you can do things with the API */
     
  ApiMap searchMap, map;
  Mole_MolResidue molRes, boundMolRes;
  char chainCode[50] = "";
  

  /* Set the path to the chemComp reference data */
  char chemCompPath[CCP_PATH_MAX+1] = "";
  stringCompose1(CCP_PATH_MAX,chemCompPath,getChemCompStoragePath());
  
  printf("Path to chemComps: %s\n", chemCompPath);
  
  /* Get some carbohydrate chemComps */
  Mole_ChemCompHead glc = getChemCompHead(ccpnProject,"carbohydrate","Glc",chemCompPath,"");
  Mole_ChemCompHead glcNAc = getChemCompHead(ccpnProject,"carbohydrate","GlcNAc",chemCompPath,"");
  Mole_ChemCompHead gal = getChemCompHead(ccpnProject,"carbohydrate","Gal",chemCompPath,"");
  Mole_ChemCompHead fuc = getChemCompHead(ccpnProject,"carbohydrate","Fuc",chemCompPath,"");
  Mole_ChemCompHead galNAc = getChemCompHead(ccpnProject,"carbohydrate","GalNAc",chemCompPath,"");
  
  //ApiString test = Mole_ChemCompHead_GetCcpCode(glc);
  //printf("Testing: %s\n", ApiString_Get(test));

  /* Create a molecule using a 'factory function' from ccp/util/Molecule.h */
  Mole_Molecule molecule = createMolecule(ccpnProject, "A-antigen");
  
  /* Get the molecule name back as a string and print*/
  ApiString apiMolName = Mole_Molecule_GetName(molecule);
  char *molName = ApiString_Get(apiMolName);
  
  printf("Created molecule: %s\n", molName);

  /* Set the molResidues and molResLinks */  

  searchMap = ApiMap_New();

  /* Again use factory functions from ccp/util/Molecule.h */
  molRes = createMolResidue(molecule,1,1,glcNAc,"link:O4","neutral");
  molRes = createMolResidue(molecule,2,2,gal,"link:C1,O3","neutral");

  ApiMap_SetInt(searchMap,"seqId",1);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O4");

  molRes = createMolResidue(molecule,3,3,glcNAc,"link:C1,O4","neutral");

  ApiMap_SetInt(searchMap,"seqId",2);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O3");

  molRes = createMolResidue(molecule,4,4,gal,"link:C1,O2,O3","neutral");

  ApiMap_SetInt(searchMap,"seqId",3);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O4");

  molRes = createMolResidue(molecule,5,5,galNAc,"link:C1","neutral");

  ApiMap_SetInt(searchMap,"seqId",4);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O3");

  molRes = createMolResidue(molecule,6,6,fuc,"link:C1","neutral");
  
  /* Is also bound to seqId 4 - just use existing boundMolRes */
  setMolResLink(molRes,"C1",boundMolRes,"O2");

  /* B-antigen */
  
  molecule = createMolecule(ccpnProject, "B-antigen");
  
  apiMolName = Mole_Molecule_GetName(molecule);  
  printf("Created molecule: %s\n", ApiString_Get(apiMolName));

  molRes = createMolResidue(molecule,1,1,glcNAc,"link:O4","neutral");
  molRes = createMolResidue(molecule,2,2,gal,"link:C1,O3","neutral");

  ApiMap_SetInt(searchMap,"seqId",1);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O4");

  molRes = createMolResidue(molecule,3,3,glcNAc,"link:C1,O4","neutral");

  ApiMap_SetInt(searchMap,"seqId",2);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O3");

  molRes = createMolResidue(molecule,4,4,gal,"link:C1,O2,O3","neutral");

  ApiMap_SetInt(searchMap,"seqId",3);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O4");

  molRes = createMolResidue(molecule,5,5,gal,"link:C1","neutral");

  ApiMap_SetInt(searchMap,"seqId",4);
  boundMolRes = Mole_Molecule_FindFirstMolResidue(molecule, searchMap);
  setMolResLink(molRes,"C1",boundMolRes,"O3");

  molRes = createMolResidue(molecule,6,6,fuc,"link:C1","neutral");
  
  /* Again re-use boundMolRes */
  setMolResLink(molRes,"C1",boundMolRes,"O2");
  
  
  /* Now create a molecular system with both molecules... */
  
  map = ApiMap_New();
  
  ApiMap_SetString(map,"code","AB_blood");
  ApiMap_SetString(map,"name","AB blood antigens");
  
  Mols_MolSystem molSystem = Mols_MolSystem_Init(ccpnProject,map);
  
  printf("Created molecular system.\n");
  
  /* Find the first molecule again... */
  searchMap = ApiMap_New();
  ApiMap_SetString(searchMap,"name","A-antigen");
  
  molecule = Impl_Project_FindFirstMolecule(ccpnProject,searchMap);
  
  /* Make a chain for this molecule.... */
  map = ApiMap_New();
  
  stringCompose1(40,chainCode,"A");
  ApiMap_SetString(map,"code",chainCode);
  ApiMap_SetItem(map,"molecule",molecule);
  
  Mols_Chain chain = Mols_Chain_Init(molSystem,map);
  
  printf(" Created chain %s\n", chainCode);
  
  /* Find the seacond molecule again... */
  searchMap = ApiMap_New();
  ApiMap_SetString(searchMap,"name","B-antigen");
  
  molecule = Impl_Project_FindFirstMolecule(ccpnProject,searchMap);
  
  /* Make a chain for this molecule.... */
  map = ApiMap_New();
  
  stringCompose1(40,chainCode,"B");
  ApiMap_SetString(map,"code",chainCode);
  ApiMap_SetItem(map,"molecule",molecule);
  
  chain = Mols_Chain_Init(molSystem,map);
  
  printf(" Created chain %s\n", chainCode);

  
  /* Free API objects */
  ApiObject_Free(molecule);
  ApiObject_Free(apiMolName);
  ApiObject_Free(searchMap);
  ApiObject_Free(boundMolRes);
  ApiObject_Free(molRes);
  ApiObject_Free(map);
  ApiObject_Free(chain);
  ApiObject_Free(molSystem);
  
}



int main(int argc, char **argv)
{

  /* Create or load a new CCPN project */

  Impl_Project ccpnProject;

  if (argc == 2)
  {
    ccpnProject = loadXmlProjectFile(argv[1]);
  }
  
  else {
    ccpnProject = newCcpnProject("test");
  }

  if (!ccpnProject)
  {
    printRaisedException();
    return 0;
  }
  
  createCarbMolecules(ccpnProject);
  
  return 1;
}

#else

int main(int argc, char **argv)
{
  return 1;
}

#endif
