
#ifndef __incl__ccpnmr_api_AnalysisProfile_AnalysisProfile_h__
#define __incl__ccpnmr_api_AnalysisProfile_AnalysisProfile_h__

#include "ccp.h"

/*
  TopObject for Analysis user profile package
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  Impl_ApplicationData value
**/
extern void *Anap_AnalysisProfile_AddApplicationData(Anap_AnalysisProfile self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean complete
**/
extern void *Anap_AnalysisProfile_CheckAllValid(Anap_AnalysisProfile self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean complete
**/
extern void *Anap_AnalysisProfile_CheckValid(Anap_AnalysisProfile self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
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
extern ApiList Anap_AnalysisProfile_FindAllActiveRepositories_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllApplicationData(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
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
extern ApiList Anap_AnalysisProfile_FindAllApplicationData_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
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
extern ApiSet Anap_AnalysisProfile_FindAllColorSchemes_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllMacros(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllMacros_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllMacros_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllMacros_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllMacros_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
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
extern ApiSet Anap_AnalysisProfile_FindAllMacros_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
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
extern ApiSet Anap_AnalysisProfile_FindAllRefExpProfiles_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval0(Anap_AnalysisProfile self);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
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
extern ApiSet Anap_AnalysisProfile_FindAllResidueProfiles_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
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
extern Impl_Repository Anap_AnalysisProfile_FindFirstActiveRepository_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
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
extern Impl_ApplicationData Anap_AnalysisProfile_FindFirstApplicationData_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
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
extern Anap_ColorScheme Anap_AnalysisProfile_FindFirstColorScheme_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link 
to class Macro
  @param  Anap_AnalysisProfile self
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
extern Anap_Macro Anap_AnalysisProfile_FindFirstMacro_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child link to 
class RefExpProfile
  @param  Anap_AnalysisProfile self
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
extern Anap_RefExpProfile Anap_AnalysisProfile_FindFirstRefExpProfile_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile(Anap_AnalysisProfile self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval0(Anap_AnalysisProfile self);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval1(Anap_AnalysisProfile self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval2(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval3(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child link to 
class ResidueProfile
  @param  Anap_AnalysisProfile self
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
extern Anap_ResidueProfile Anap_AnalysisProfile_FindFirstResidueProfile_keyval4(Anap_AnalysisProfile self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anap_AnalysisProfile_Get(Anap_AnalysisProfile self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Acco_AccessObject Anap_AnalysisProfile_GetAccess(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Acco_AccessObject Anap_AnalysisProfile_GetActiveAccess(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_GetActiveRepositories(Anap_AnalysisProfile self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_GetApplicationData(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.bgColor

background 
contour plot color
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetBgColor(Anap_AnalysisProfile self);

/**
  GetByKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anap_AnalysisProfile Anap_AnalysisProfile_GetByKey(Anap_AnalysisProfile self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetClassName(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child link 
to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiSet Anap_AnalysisProfile_GetColorSchemes(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetCreatedBy(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.fgColor

foreground 
contour plot color
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetFgColor(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_GetFieldNames(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.font

font for general 
use in interface
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetFont(Anap_AnalysisProfile self);

/**
  GetFullKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anap_AnalysisProfile_GetFullKey(Anap_AnalysisProfile self, ApiBoolean useGuid);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.graphicsHandler

Name of 
graphics handler to use
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetGraphicsHandler(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetGuid(Anap_AnalysisProfile self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetInConstructor(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetIsDeleted(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetIsLoaded(Anap_AnalysisProfile self);

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
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetIsModifiable(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetIsModified(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetIsReading(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetLastUnlockedBy(Anap_AnalysisProfile self);

/**
  GetLocalKey for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @returns  Local object key
**/
extern ApiObject Anap_AnalysisProfile_GetLocalKey(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiSet Anap_AnalysisProfile_GetMacros(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.marksColor

Color scheme 
for marks
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Anap_ColorScheme Anap_AnalysisProfile_GetMarksColor(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.memopsRoot

parent link
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Impl_MemopsRoot Anap_AnalysisProfile_GetMemopsRoot(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.name

name of 
AnalysisProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetName(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Impl_PackageLocator Anap_AnalysisProfile_GetPackageLocator(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetPackageName(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetPackageShortName(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.panView

Move view when 
panning (rather than viewing window)
Does pan track the view, rather 
than the contours?
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetPanView(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.parent

link to parent 
object - synonym for memopsRoot
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Impl_MemopsRoot Anap_AnalysisProfile_GetParent(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetQualifiedName(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiSet Anap_AnalysisProfile_GetRefExpProfiles(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child 
link to class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiSet Anap_AnalysisProfile_GetResidueProfiles(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Impl_MemopsRoot Anap_AnalysisProfile_GetRoot(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.rulersColor

Color scheme 
for rulers
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Anap_ColorScheme Anap_AnalysisProfile_GetRulersColor(Anap_AnalysisProfile self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern Impl_TopObject Anap_AnalysisProfile_GetTopObject(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.transientDialogs

Are 
dialogs transient
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetTransientDialogs(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.transientWindows

Are 
windows transient
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetTransientWindows(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.twoCharShortcuts

Use two 
character shortcuts (rather than single-character)
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetTwoCharShortcuts(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.useCrosshair

Use 
crosshair on contuor plots
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetUseCrosshair(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.useGlobalShortcuts

Do 
shortcuts toggle all windows, or just the current?
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiBoolean Anap_AnalysisProfile_GetUseGlobalShortcuts(Anap_AnalysisProfile self);

/**
  Get for ccpnmr.AnalysisProfile.AnalysisProfile.webBrowser

Name of web 
browser to use for help etc.
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiString Anap_AnalysisProfile_GetWebBrowser(Anap_AnalysisProfile self);

/**
  Constructor for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_AnalysisProfile Anap_AnalysisProfile_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Anap_AnalysisProfile Anap_AnalysisProfile_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_ColorScheme Anap_AnalysisProfile_NewColorScheme(Anap_AnalysisProfile self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile self
  @param  char * name
  @returns  the new object
**/
extern Anap_ColorScheme Anap_AnalysisProfile_NewColorScheme_reqd(Anap_AnalysisProfile self, char * name);

/**
  Factory function to create ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_Macro Anap_AnalysisProfile_NewMacro(Anap_AnalysisProfile self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile self
  @param  char * function
  @param  char * module
  @param  char * name
  @returns  the new object
**/
extern Anap_Macro Anap_AnalysisProfile_NewMacro_reqd(Anap_AnalysisProfile self, char * function, char * module, char * name);

/**
  Factory function to create ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_NewRefExpProfile(Anap_AnalysisProfile self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.AnalysisProfile.RefExpProfile
  @param  Anap_AnalysisProfile self
  @param  char * name
  @returns  the new object
**/
extern Anap_RefExpProfile Anap_AnalysisProfile_NewRefExpProfile_reqd(Anap_AnalysisProfile self, char * name);

/**
  Factory function to create ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_NewResidueProfile(Anap_AnalysisProfile self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.AnalysisProfile.ResidueProfile
  @param  Anap_AnalysisProfile self
  @param  char * ccpCode
  @param  char * guiName
  @param  char * molType
  @returns  the new object
**/
extern Anap_ResidueProfile Anap_AnalysisProfile_NewResidueProfile_reqd(Anap_AnalysisProfile self, char * ccpCode, char * guiName, char * molType);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  Impl_ApplicationData value
**/
extern void *Anap_AnalysisProfile_RemoveApplicationData(Anap_AnalysisProfile self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.AnalysisProfile.AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anap_AnalysisProfile_Set(Anap_AnalysisProfile self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_AnalysisProfile self
  @param  Acco_AccessObject value
**/
extern void *Anap_AnalysisProfile_SetAccess(Anap_AnalysisProfile self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_AnalysisProfile self
  @param  ApiList values
**/
extern void *Anap_AnalysisProfile_SetApplicationData(Anap_AnalysisProfile self, ApiList values);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.bgColor

background 
contour plot color
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetBgColor(Anap_AnalysisProfile self, ApiString value);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetCreatedBy(Anap_AnalysisProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.fgColor

foreground 
contour plot color
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetFgColor(Anap_AnalysisProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.font

font for general 
use in interface
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetFont(Anap_AnalysisProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.graphicsHandler

Name of 
graphics handler to use
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetGraphicsHandler(Anap_AnalysisProfile self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetGuid(Anap_AnalysisProfile self, ApiString value);

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
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetIsModifiable(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetLastUnlockedBy(Anap_AnalysisProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.marksColor

Color scheme 
for marks
  @param  Anap_AnalysisProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_AnalysisProfile_SetMarksColor(Anap_AnalysisProfile self, Anap_ColorScheme value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.name

name of 
AnalysisProfile
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetName(Anap_AnalysisProfile self, ApiString value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.panView

Move view when 
panning (rather than viewing window)
Does pan track the view, rather 
than the contours?
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetPanView(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.rulersColor

Color scheme 
for rulers
  @param  Anap_AnalysisProfile self
  @param  Anap_ColorScheme value
**/
extern void *Anap_AnalysisProfile_SetRulersColor(Anap_AnalysisProfile self, Anap_ColorScheme value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.transientDialogs

Are 
dialogs transient
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetTransientDialogs(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.transientWindows

Are 
windows transient
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetTransientWindows(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.twoCharShortcuts

Use two 
character shortcuts (rather than single-character)
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetTwoCharShortcuts(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.useCrosshair

Use 
crosshair on contuor plots
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetUseCrosshair(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.useGlobalShortcuts

Do 
shortcuts toggle all windows, or just the current?
  @param  Anap_AnalysisProfile self
  @param  ApiBoolean value
**/
extern void *Anap_AnalysisProfile_SetUseGlobalShortcuts(Anap_AnalysisProfile self, ApiBoolean value);

/**
  Set for ccpnmr.AnalysisProfile.AnalysisProfile.webBrowser

Name of web 
browser to use for help etc.
  @param  Anap_AnalysisProfile self
  @param  ApiString value
**/
extern void *Anap_AnalysisProfile_SetWebBrowser(Anap_AnalysisProfile self, ApiString value);

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.colorSchemes

child 
link to class ColorScheme
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_SortedColorSchemes(Anap_AnalysisProfile self);

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.macros

child link to 
class Macro
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_SortedMacros(Anap_AnalysisProfile self);

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.refExpProfiles

child 
link to class RefExpProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_SortedRefExpProfiles(Anap_AnalysisProfile self);

/**
  Sorted for ccpnmr.AnalysisProfile.AnalysisProfile.residueProfiles

child 
link to class ResidueProfile
  @param  Anap_AnalysisProfile self
  @returns   the result
**/
extern ApiList Anap_AnalysisProfile_SortedResidueProfiles(Anap_AnalysisProfile self);

#endif /* __incl__ccpnmr_api_AnalysisProfile_AnalysisProfile_h__ */
