#include "ccp/util/ChemComp.h"

#include <stdio.h>

#include "ccp.h"
#include "memops/general/Io.h"
#include "memops/universal/Constants.h"
#include "ccp/general/Io.h"

Chem_ChemAtom findFirstChemAtomFromChemComp(Chem_ChemComp chemComp, char *chemAtomName)
{
  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "name", chemAtomName);
  
  Chem_ChemAtom chemAtom = Chem_ChemComp_FindFirstChemAtom(chemComp, map);

  if (ApiObject_IsNone(chemAtom))
    printf("Could not find ChemAtom or LinkAtom %s!\n", chemAtomName);

  /* Clean up in Python world */
  ApiObject_Free(map);
   
  return chemAtom;
}

Chem_LinkAtom createLinkAtom(Chem_ChemComp chemComp,char *linkAtomName)
{
  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "name", linkAtomName);

  Chem_LinkAtom linkAtom = Chem_ChemComp_NewLinkAtom(chemComp, map);
 
  if (!linkAtom)
  {
    printf("Could not create %s LinkAtom!\n", linkAtomName);
    printRaisedException();
  }

  /* Clean up in Python world */
  ApiObject_Free(map);

  return linkAtom;
}

Chem_ChemAtom createChemAtom(Chem_ChemComp chemComp, char *name, char *elementSymbol, char *chirality, int waterExchangeable)
{

  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "name", name);
  ApiMap_SetString(map, "elementSymbol", elementSymbol);
  ApiMap_SetString(map, "chirality", chirality);
  ApiMap_SetBoolean(map, "waterExchangeable", waterExchangeable);
  
  Chem_ChemAtom chemAtom = Chem_ChemComp_FindFirstChemAtom(chemComp, map);
  
  if (ApiObject_IsNone(chemAtom))
  {
   chemAtom = Chem_ChemComp_NewChemAtom(chemComp, map);
  
    if (!chemAtom)
    {
      printf("Could not create %s ChemAtom!\n", name);
      printRaisedException();
    }
  }
  else
    printf("  Atom %s already exists - skipping creation.", name);
 
  /* Clean up in Python world */
  ApiObject_Free(map);

  return chemAtom;
  
}

Ccco_ChemAtomCoord createChemAtomCoord(Ccco_ChemCompCoord chemCompCoord, Chem_ChemAtom chemAtom, float x, float y, float z)
{

  ApiMap map = ApiMap_New();

  ApiString apiChemAtomName = Chem_ChemAtom_GetName(chemAtom);
  ApiMap_SetItem(map, "name", apiChemAtomName);
  
  ApiString apiSubType = Chem_ChemAtom_GetSubType(chemAtom);
  ApiMap_SetItem(map, "subType", apiSubType);

  ApiMap_SetFloat(map, "x", x);
  ApiMap_SetFloat(map, "y", y);
  ApiMap_SetFloat(map, "z", z);

  Ccco_ChemAtomCoord chemAtomCoord = Ccco_ChemCompCoord_NewChemAtomCoord(chemCompCoord,map);
  
  if (!chemAtomCoord)
  {
    printf("Could not create %s ChemAtomCoord!\n", ApiString_Get(Chem_ChemAtom_GetName(chemAtom)));
    printRaisedException();
  }
 
  /* Clean up in Python world */
  ApiObject_Free(apiChemAtomName);
  ApiObject_Free(apiSubType);
  ApiObject_Free(map);

  return chemAtomCoord;
}

Chem_LinkEnd createLinkEnd(Chem_ChemComp chemComp, char *linkedAtomName, char *linkAtomName)
{
  Chem_LinkEnd linkEnd = NULL;

  ApiMap map = ApiMap_New();
  ApiMap_SetString(map, "linkCode", linkedAtomName);  

  Chem_ChemAtom linkedAtom = findFirstChemAtomFromChemComp(chemComp, linkedAtomName);

  if (ApiObject_IsNone(linkedAtom))
  {
    printf("Could not find linkedAtom with name %s", linkedAtomName);
    printRaisedException();
  }
  else
  {
    ApiMap_SetItem(map, "boundChemAtom", linkedAtom);  

    Chem_LinkAtom linkAtom = findFirstChemAtomFromChemComp(chemComp,linkAtomName);
    ApiMap_SetItem(map, "boundLinkAtom", linkAtom);  
  
    linkEnd = Chem_ChemComp_NewLinkEnd(chemComp,map);
    if (!linkEnd)
    {
      printf("Could not create %s linkEnd!\n", linkedAtomName);
      printRaisedException();
    }

    ApiObject_Free(linkAtom);
  }

  /* Clean up in Python world */
  ApiObject_Free(linkedAtom);
  ApiObject_Free(map);

  return linkEnd;
}

Chem_ChemBond createChemBond(Chem_ChemComp chemComp, char *chemAtomName1, char *chemAtomName2, char *bondType)
{
  Chem_ChemBond chemBond = NULL;

  /* Make an API list of chemAtoms */  
  Chem_ChemAtom chemAtom1 = findFirstChemAtomFromChemComp(chemComp, chemAtomName1);
  Chem_ChemAtom chemAtom2 = findFirstChemAtomFromChemComp(chemComp, chemAtomName2);
  
  if (ApiObject_IsNone(chemAtom1))
  {
    printf("Could not find chemAtom %s\n",  chemAtomName1);
    printRaisedException();
  }
  else if (ApiObject_IsNone(chemAtom2))
  {
    printf("Could not find chemAtom %s\n", chemAtomName2);
    printRaisedException();
  }
  else
  {
    ApiMap map = ApiMap_New();
  
    ApiSet chemAtomSet = ApiSet_New();
    ApiSet_Add(chemAtomSet,chemAtom1);
    ApiSet_Add(chemAtomSet,chemAtom2);
    ApiMap_SetItem(map,"chemAtoms", chemAtomSet);

    ApiMap_SetString(map, "bondType", bondType);
  
    chemBond = Chem_ChemComp_NewChemBond(chemComp, map);

    if (!chemBond)
    {
      printf("Could not create %s-%s chemBond!\n", chemAtomName1, chemAtomName2);
      printRaisedException();
    }
  
    /* Clean up in Python world */
    ApiObject_Free(chemAtomSet);
    ApiObject_Free(map);
  }

  ApiObject_Free(chemAtom1);
  ApiObject_Free(chemAtom2);

  return chemBond;
}
 
Chem_ChemCompVar createChemCompVar(Chem_ChemComp chemComp, char *linkedAtomNames[], char *removeAtomNames[], char *descriptor, int formalCharge, int isParamagnetic, int isAromatic)
{
  int i,j;
  int removeChemAtom;
  ApiObject obj;

/*
  printf("\n  Creating chemCompVar...\n");
*/
  /* First get *only* the ChemAtoms (not the LinkAtoms) */
  ApiMap chemAtomsOnlyMap = ApiMap_New();

  ApiMap_SetString(chemAtomsOnlyMap, "className", "ChemAtom");
  ApiSet allChemAtoms = Chem_ChemComp_FindAllChemAtoms(chemComp, chemAtomsOnlyMap);
  ApiSetIterator iter = ApiSet_Iterator(allChemAtoms);

  ApiObject_Free(chemAtomsOnlyMap);
  
  /* Create a collection with only the relevant atoms... */
  ApiSet chemAtomSet = ApiSet_New();
  while (obj = ApiSetIterator_Next(iter))
  {
    Chem_ChemAtom chemAtom = (Chem_ChemAtom) obj;
    ApiString apiChemAtomName = Chem_ChemAtom_GetName(chemAtom);
    char *chemAtomName = ApiString_Get(apiChemAtomName);
    
    removeChemAtom = 0;
    
    for (j = 0; j < 999; j++)
    {
      if (!removeAtomNames[j] || !*removeAtomNames[j])
        break;

      if (strcmp(chemAtomName, removeAtomNames[j]) == 0) 
      {
        removeChemAtom = 1;
        //printf("    Removed %s\n", chemAtomName);
        break;
      }
    }
    
    if (!removeChemAtom)
    {
      ApiSet_Add(chemAtomSet, chemAtom);
      //printf("    Added %s\n", chemAtomName);
    }

    ApiObject_Free(chemAtom);
    ApiObject_Free(apiChemAtomName);
  }

  /* Also add the relevant linkAtoms to the chemAtomSet */

  for (i = 0; i < 999; i++)
  {
    if (!linkedAtomNames[i] || !*linkedAtomNames[i])
      break;

    Chem_ChemAtom linkedChemAtom = findFirstChemAtomFromChemComp(chemComp, linkedAtomNames[i]);

    if (!linkedChemAtom || ApiObject_IsNone(linkedChemAtom))
    {
      printf("linkChemAtom NOT FOUND\n");
      if (linkedChemAtom)
        ApiObject_Free(linkedChemAtom);
      else
        printRaisedException();
    }
    else
    {
      ApiMap tmap = ApiMap_New();
      ApiMap_SetItem(tmap, "boundChemAtom", linkedChemAtom);

      Chem_LinkEnd linkEnd = Chem_ChemComp_FindFirstLinkEnd(chemComp, tmap);
    
      ApiObject_Free(linkedChemAtom);
      ApiObject_Free(tmap);

      if (ApiObject_IsNone(linkEnd))
      {
        printf("linkEnd NOT FOUND\n");
      }
      else
      {
        Chem_LinkAtom linkAtom = Chem_LinkEnd_GetBoundLinkAtom(linkEnd);

        if (!linkAtom || ApiObject_IsNone(linkAtom))
        {
          printf("linkAtom NOT FOUND\n");
          if (linkAtom)
            ApiObject_Free(linkAtom);
          else
            printRaisedException();
        }
        else
        {
          ApiSet_Add(chemAtomSet, linkAtom);
          ApiObject_Free(linkAtom);
    
/*
          ApiString apiName = Chem_ChemAtom_GetName(linkAtom);
          printf("    Added %s\n", ApiString_Get(apiName));
          ApiObject_Free(apiName);
*/
        }
      }

      ApiObject_Free(linkEnd);
    }
  }

  ApiMap map = ApiMap_New();
  
  ApiMap_SetItem(map, "chemAtoms", chemAtomSet);

  char linking[40] = "link:";

  for (i = 0; i < 999; i++) 
  {
    if (!linkedAtomNames[i] || !*linkedAtomNames[i])
      break;

    if (i > 0)
      strcat(linking, ",");

    strcat(linking, linkedAtomNames[i]);
  }
  
  /* Reset to 'none' if no linkedAtomNames given */
  if (strlen(linking) == 5)
    strcpy(linking, "none");

  ApiMap_SetString(map, "linking", linking);
  ApiMap_SetString(map, "descriptor", descriptor);/* This is for protonation states (e.g. prot:O2). Assuming all alcohols protonated for now*/
  ApiMap_SetInt(map, "formalCharge", formalCharge);
  ApiMap_SetFalse(map, "isParamagnetic");
  ApiMap_SetFalse(map, "isAromatic");

  /*
  printf("    Using linking %s, descriptor %s.\n",linking,descriptor);
  */
  
  Chem_ChemCompVar chemCompVar = Chem_ChemComp_NewChemCompVar(chemComp, map);

  ApiObject_Free(map);

  if (!chemCompVar)
  {
    printf("Could not create %s,%s chemCompVar!\n", linking, descriptor);
    printRaisedException();
  }
  
  return chemCompVar;
}

void addLinkAtomAndEnd(Chem_ChemComp chemComp, char *linkedAtomName)
{
  /* First define the name of the 'LinkAtom' - a virtual atom of the linked carbohydrate or protein in this case */
  char linkAtomName[CCP_PATH_MAX];
  stringCompose2(CCP_PATH_MAX, linkAtomName, linkedAtomName, "_1");
  
  Chem_LinkAtom linkAtom = createLinkAtom(chemComp, linkAtomName);
  
  if (!linkAtom)
    return;
  
  Chem_ChemBond chemBond = createChemBond(chemComp, linkedAtomName, linkAtomName, "single");
  Chem_LinkEnd linkEnd = createLinkEnd(chemComp, linkedAtomName, linkAtomName);
  
  /* Clean up in Python world */
  ApiObject_Free(linkAtom);
  ApiObject_Free(chemBond);
  ApiObject_Free(linkEnd);
}


ApiSet findBoundChemAtomsFromChemAtom(Chem_ChemAtom chemAtom)
{

  ApiSet chemAtoms = ApiSet_New();
  ApiObject obj, obj2;
 
  ApiString apiChemAtomName = Chem_ChemAtom_GetName(chemAtom);
  char *chemAtomName = ApiString_Get(apiChemAtomName);
  
  ApiMap apiChemAtomClassMap = ApiMap_New();
  ApiMap_SetString(apiChemAtomClassMap,"className","ChemAtom");
  
  Chem_ChemComp chemComp = Chem_ChemAtom_GetChemComp(chemAtom);
  
  ApiSet chemBonds = Chem_ChemComp_GetChemBonds(chemComp);
  ApiSetIterator chemBondsIter = ApiSet_Iterator(chemBonds);
  
  while (obj = ApiSetIterator_Next(chemBondsIter)) {

    Chem_ChemBond chemBond = (Chem_ChemBond) obj;
    
    ApiSet chemBondChemAtoms = Chem_ChemBond_FindAllChemAtoms(chemBond,apiChemAtomClassMap);
    
    /* Not doing link atoms yet - filtering out bonds with link atoms */
    int numChemBondChemAtoms = ApiCollection_Len(chemBondChemAtoms);
    
    if (numChemBondChemAtoms == 2) {

      int chemAtomPartOfChemBond = 0;
      ApiSetIterator chemBondChemAtomsIter = ApiSet_Iterator(chemBondChemAtoms);

      /* Check if chemBond contains chemAtom */
      while (obj2 = ApiSetIterator_Next(chemBondChemAtomsIter)) {

        Chem_ChemAtom chemBondChemAtom = (Chem_ChemAtom) obj2;

        ApiString apiChemBondChemAtomName = Chem_ChemAtom_GetName(chemBondChemAtom);
        char *chemBondChemAtomName = ApiString_Get(apiChemBondChemAtomName);

        if (! strcmp(chemAtomName,chemBondChemAtomName)) {
          chemAtomPartOfChemBond = 1;
          break;
        }

        ApiObject_Free(apiChemBondChemAtomName);

      }
      
      /* If the chemBond contains the chemAtom, get the name of the other chemAtom in the bond */
      if (chemAtomPartOfChemBond) {

        ApiSetIterator chemBondChemAtomsIter = ApiSet_Iterator(chemBondChemAtoms);
        while (obj2 = ApiSetIterator_Next(chemBondChemAtomsIter)) {

          Chem_ChemAtom chemBondChemAtom = (Chem_ChemAtom) obj2;
          ApiString apiChemBondChemAtomName = Chem_ChemAtom_GetName(chemBondChemAtom);

          char *chemBondChemAtomName = ApiString_Get(apiChemBondChemAtomName);

          if (strcmp(chemAtomName,chemBondChemAtomName)) {
            ApiCollection_Append(chemAtoms,chemBondChemAtom);
          }

          ApiObject_Free(apiChemBondChemAtomName);

        }
      }
    }

    ApiObject_Free(chemBondChemAtoms);
    ApiObject_Free(chemBond);
    
  }
  
  ApiObject_Free(chemBonds);
  ApiObject_Free(chemComp);
  ApiObject_Free(apiChemAtomName);
  ApiObject_Free(apiChemAtomClassMap);
  
  return chemAtoms;
}
