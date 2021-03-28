#include "ccp/examples/getChemicalShiftInfo.h"

/*********** STILL v1 code below so comment it all out **********/
#ifdef V1_CODE

#include <stdio.h>
#include <string.h>
#include "ccp.h"
#include "memops/general/Io.h"
#include "memops/universal/Constants.h"
#include "ccp/util/Nmr.h"

void getChemicalShiftInfo(Nmr_NmrProject nmrProject, ApiCollection resonanceToAtomSetsCollections)
{
  
  int i, j, k;

  ApiMap apiShiftListClass = ApiMap_New();
  ApiMap_SetString(apiShiftListClass,"className","ShiftList");
  ApiCollection shiftLists = Nmr_NmrProject_FindAllMeasurementLists(nmrProject,apiShiftListClass);
  
  int numShiftLists = ApiCollection_Len(shiftLists);
  
  for (i=0;i<numShiftLists;i++) {
    
    Nmr_ShiftList shiftList = ApiCollection_Get(shiftLists,i);
    
    /* Try to get the name of the shift list, if set */
    ApiString apiShiftListName = Nmr_ShiftList_GetName(shiftList);
    
    if (!ApiObject_IsNone(apiShiftListName)) {
    
      char *shiftListName = ApiString_Get(apiShiftListName);
      printf("ShiftList: %s\n", shiftListName);
    
    }
    
    else {
      
      /* This will always work, but is usually less informative */
      ApiInteger apiShiftListSerial = Nmr_ShiftList_GetSerial(shiftList);
      int shiftListSerial = ApiInteger_Get(apiShiftListSerial);
    
      printf("ShiftList: serial %d\n", shiftListSerial);

      ApiObject_Free(apiShiftListSerial);     
      
    }
    
    ApiCollection shifts = Nmr_ShiftList_GetMeasurements(shiftList);
    
    int numShifts = ApiCollection_Len(shifts);
    
    for (j=0;j<numShifts;j++) {
      
      Nmr_Shift shift = ApiCollection_Get(shifts,j);
      
      /* Can also get figOfMerit, details, ... see documentation */
      ApiFloat apiShiftValue = Nmr_Shift_GetValue(shift);
      ApiFloat apiShiftError = Nmr_Shift_GetError(shift);
      
      float value = ApiFloat_Get(apiShiftValue);
      float error = ApiFloat_Get(apiShiftError);
      
      printf("   %8.3f +/- %8.3f:",value,error);
      
      /* Because of the way the data model is set up, it will get both prochiral atom(set)s for
         non-stereospecifically assigned prochirals, and otherwise only the stereospecifically assigned */
      
      Nmr_Resonance resonance = Nmr_Shift_GetResonance(shift);
      ApiCollection atomSets = getAtomSetsForResonance(resonance,resonanceToAtomSetsCollections);
      
      if (!ApiObject_IsNone(atomSets)) {
        
        int numAtomSets = ApiCollection_Len(atomSets);
        
        for (k=0;k<numAtomSets;k++) {
          Nmr_AtomSet atomSet = ApiCollection_Get(atomSets,k);
          ApiString apiAtomSetName = Nmr_AtomSet_GetName(atomSet);
          char *atomSetName = ApiString_Get(apiAtomSetName);
          
          ApiMap empty = ApiMap_New();

          /* This info connects back to the stuff in getSequenceInfo... */
          Mols_Atom refAtom = Nmr_AtomSet_FindFirstAtom(atomSet,empty);
          Mols_Residue residue = Mols_Atom_GetResidue(refAtom);
          Mols_Chain chain = Mols_Residue_GetChain(residue);
          
          ApiInteger apiSeqId = Mols_Residue_GetSeqId(residue); // Or seqCode, depending
          ApiString apiChainCode = Mols_Chain_GetCode(chain);
          
          int seqId = ApiInteger_Get(apiSeqId);
          char *chainCode = ApiString_Get(apiChainCode);
          
          printf(" '%s.%d.%s'",chainCode,seqId,atomSetName);
        
          ApiObject_Free(atomSet);
          ApiObject_Free(apiAtomSetName);
          ApiObject_Free(empty);
          ApiObject_Free(refAtom);
          ApiObject_Free(residue);
          ApiObject_Free(chain);
          ApiObject_Free(apiSeqId);
          ApiObject_Free(apiChainCode);
        }
        
        printf("\n");
        
      }
      
      else printf(" no assignment.\n");
      
      ApiObject_Free(apiShiftValue);
      ApiObject_Free(apiShiftError);
      ApiObject_Free(shift);
      ApiObject_Free(resonance);
      ApiObject_Free(atomSets);
    
    }

    ApiObject_Free(apiShiftListName);
    ApiObject_Free(shiftList);
    ApiObject_Free(shifts);
  }
  
  ApiObject_Free(apiShiftListClass);
  ApiObject_Free(shiftLists);
  
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
   
   /* Set the resonance-atomSet links for printing out shift and peak info */
   Nmr_NmrProject nmrProject = Impl_Project_GetCurrentNmrProject(ccpnProject);
   
   if (! ApiObject_IsNone(nmrProject)) {
     ApiCollection resonances = Nmr_NmrProject_GetResonances(nmrProject);

     ApiCollection resonanceToAtomSetsCollections = setResonanceToAtomSetsCollections(resonances);
     
     getChemicalShiftInfo(nmrProject,resonanceToAtomSetsCollections);

  }
   
  return 1;
}

#else

int main(int argc, char **argv)
{
  return 1;
}

#endif

