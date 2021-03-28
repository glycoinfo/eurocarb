#include "ccp/util/Nmr.h"

#include <stdio.h>

#include "ccp.h"

ApiList setResonanceToAtomSetsCollections(ApiList resonancesToCheck)
{
  int i;

  /* Works ONLY for Resonances - need to copy this to get it to work for FixedResonances */
  
  ApiList resonanceToAtomSetsCollections = ApiList_New();
  
  ApiList resonanceList = ApiList_New();
  ApiList atomSetsList = ApiList_New();
  
  ApiList_Append(resonanceToAtomSetsCollections,resonanceList);
  ApiList_Append(resonanceToAtomSetsCollections,atomSetsList);
  
  int numResonancesToCheck = ApiCollection_Len(resonancesToCheck);

  for (i=0; i<numResonancesToCheck; i++) {

    Nmr_Resonance resonance = ApiList_Get(resonancesToCheck,i);
    Nmr_ResonanceSet resonanceSet = Nmr_Resonance_GetResonanceSet(resonance);
    
    if (! ApiObject_IsNone(resonanceSet)) {
      
      ApiSet atomSets = Nmr_ResonanceSet_GetAtomSets(resonanceSet);
      
      int numAtomSets = ApiSet_Len(atomSets);
      
      /* This should always be true */
      if (numAtomSets > 0) {      
        ApiList_Append(resonanceList,resonance);
        ApiList_Append(atomSetsList,atomSets);
      }
      
      ApiObject_Free(atomSets);
      
    }

    ApiObject_Free(resonance);
    ApiObject_Free(resonanceSet);

  }
  
  ApiObject_Free(resonanceList);
  ApiObject_Free(atomSetsList);
  
  return resonanceToAtomSetsCollections;
  
}


ApiList getAtomSetsForResonance(Nmr_Resonance resonance,ApiList resonanceToAtomSetsCollections)
{
  
  /* In C world probably makes more sense to directly track resonance serials... this is more convoluted */
  
  int i;
  
  ApiList atomSets = ApiList_New();
  
  ApiInteger apiResonanceSerial = Nmr_Resonance_GetSerial(resonance);
  int resonanceSerial = ApiInteger_Get(apiResonanceSerial);
  
  ApiList resonanceList = ApiList_Get(resonanceToAtomSetsCollections,0);
  ApiList atomSetsList = ApiList_Get(resonanceToAtomSetsCollections,1);
  
  int numOtherResonances = ApiSet_Len(resonanceList);

  for (i=0; i<numOtherResonances; i++) {
  
    Nmr_Resonance otherResonance = ApiList_Get(resonanceList,i);
    ApiInteger apiOtherResonanceSerial = Nmr_Resonance_GetSerial(otherResonance);
    int otherResonanceSerial = ApiInteger_Get(apiOtherResonanceSerial);
    
    ApiObject_Free(apiOtherResonanceSerial);
    ApiObject_Free(otherResonance);

    if (resonanceSerial == otherResonanceSerial) {
      atomSets = ApiList_Get(atomSetsList,i);
      break;
    }
  }

  ApiObject_Free(apiResonanceSerial);
  ApiObject_Free(resonanceList);
  ApiObject_Free(atomSetsList);

  return atomSets;
}

