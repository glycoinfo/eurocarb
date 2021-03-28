
#ifndef __incl__ccp_api_lims_Crystallization_CrystallizationStore_h__
#define __incl__ccp_api_lims_Crystallization_CrystallizationStore_h__

#include "ccp.h"

/*
  TopObject for Crystallization package
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  Impl_ApplicationData value
**/
extern void *Cryz_CrystallizationStore_AddApplicationData(Cryz_CrystallizationStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean complete
**/
extern void *Cryz_CrystallizationStore_CheckAllValid(Cryz_CrystallizationStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean complete
**/
extern void *Cryz_CrystallizationStore_CheckValid(Cryz_CrystallizationStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
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
extern ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
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
extern ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
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
extern ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllImages(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllImages_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllImages_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllImages_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllImages_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
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
extern ApiSet Cryz_CrystallizationStore_FindAllImages_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
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
extern ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval0(Cryz_CrystallizationStore self);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
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
extern ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
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
extern Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
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
extern Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
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
extern Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
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
extern Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
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
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme(Cryz_CrystallizationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval0(Cryz_CrystallizationStore self);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
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
extern Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Cryz_CrystallizationStore_Get(Cryz_CrystallizationStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Acco_AccessObject Cryz_CrystallizationStore_GetAccess(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_GetActiveRepositories(Cryz_CrystallizationStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_GetApplicationData(Cryz_CrystallizationStore self);

/**
  GetByKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Cryz_CrystallizationStore Cryz_CrystallizationStore_GetByKey(Cryz_CrystallizationStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetClassName(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetCreatedBy(Cryz_CrystallizationStore self);

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiSet Cryz_CrystallizationStore_GetDropAnnotations(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_GetFieldNames(Cryz_CrystallizationStore self);

/**
  GetFullKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Cryz_CrystallizationStore_GetFullKey(Cryz_CrystallizationStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetGuid(Cryz_CrystallizationStore self);

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.images

child link 
to class Image
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiSet Cryz_CrystallizationStore_GetImages(Cryz_CrystallizationStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetInConstructor(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetIsDeleted(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetIsLoaded(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetIsModifiable(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetIsModified(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiBoolean Cryz_CrystallizationStore_GetIsReading(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetLastUnlockedBy(Cryz_CrystallizationStore self);

/**
  GetLocalKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @returns  Local object key
**/
extern ApiObject Cryz_CrystallizationStore_GetLocalKey(Cryz_CrystallizationStore self);

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.memopsRoot

parent 
link
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Cryz_CrystallizationStore_GetMemopsRoot(Cryz_CrystallizationStore self);

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.name

name of 
CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetName(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Impl_PackageLocator Cryz_CrystallizationStore_GetPackageLocator(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetPackageName(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetPackageShortName(Cryz_CrystallizationStore self);

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiSet Cryz_CrystallizationStore_GetParameterDefinitions(Cryz_CrystallizationStore self);

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.parent

link to 
parent object - synonym for memopsRoot
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Cryz_CrystallizationStore_GetParent(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiString Cryz_CrystallizationStore_GetQualifiedName(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Cryz_CrystallizationStore_GetRoot(Cryz_CrystallizationStore self);

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiSet Cryz_CrystallizationStore_GetScoringSchemes(Cryz_CrystallizationStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern Impl_TopObject Cryz_CrystallizationStore_GetTopObject(Cryz_CrystallizationStore self);

/**
  Constructor for ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_CrystallizationStore Cryz_CrystallizationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Cryz_CrystallizationStore Cryz_CrystallizationStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_NewDropAnnotation(Cryz_CrystallizationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  Affi_Person annotator
  @param  Cryz_Score score
  @returns  the new object
**/
extern Cryz_DropAnnotation Cryz_CrystallizationStore_NewDropAnnotation_reqd(Cryz_CrystallizationStore self, Affi_Person annotator, Cryz_Score score);

/**
  Factory function to create ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_Image Cryz_CrystallizationStore_NewImage(Cryz_CrystallizationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore self
  @param  char * fileName
  @param  char * filePath
  @returns  the new object
**/
extern Cryz_Image Cryz_CrystallizationStore_NewImage_reqd(Cryz_CrystallizationStore self, char * fileName, char * filePath);

/**
  Factory function to create ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_NewParameterDefinition(Cryz_CrystallizationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  the new object
**/
extern Cryz_ParameterDefinition Cryz_CrystallizationStore_NewParameterDefinition_reqd(Cryz_CrystallizationStore self);

/**
  Factory function to create ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_NewScoringScheme(Cryz_CrystallizationStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * name
  @returns  the new object
**/
extern Cryz_ScoringScheme Cryz_CrystallizationStore_NewScoringScheme_reqd(Cryz_CrystallizationStore self, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  Impl_ApplicationData value
**/
extern void *Cryz_CrystallizationStore_RemoveApplicationData(Cryz_CrystallizationStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Cryz_CrystallizationStore_Set(Cryz_CrystallizationStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_CrystallizationStore self
  @param  Acco_AccessObject value
**/
extern void *Cryz_CrystallizationStore_SetAccess(Cryz_CrystallizationStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  ApiList values
**/
extern void *Cryz_CrystallizationStore_SetApplicationData(Cryz_CrystallizationStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
extern void *Cryz_CrystallizationStore_SetCreatedBy(Cryz_CrystallizationStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
extern void *Cryz_CrystallizationStore_SetGuid(Cryz_CrystallizationStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean value
**/
extern void *Cryz_CrystallizationStore_SetIsModifiable(Cryz_CrystallizationStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
extern void *Cryz_CrystallizationStore_SetLastUnlockedBy(Cryz_CrystallizationStore self, ApiString value);

/**
  Set for ccp.lims.Crystallization.CrystallizationStore.name

name of 
CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
extern void *Cryz_CrystallizationStore_SetName(Cryz_CrystallizationStore self, ApiString value);

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_SortedDropAnnotations(Cryz_CrystallizationStore self);

/**
  Sorted for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_SortedImages(Cryz_CrystallizationStore self);

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_SortedParameterDefinitions(Cryz_CrystallizationStore self);

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
extern ApiList Cryz_CrystallizationStore_SortedScoringSchemes(Cryz_CrystallizationStore self);

#endif /* __incl__ccp_api_lims_Crystallization_CrystallizationStore_h__ */
