
#ifndef __incl__ccp_api_lims_Target_TargetStore_h__
#define __incl__ccp_api_lims_Target_TargetStore_h__

#include "ccp.h"

/*
  TopObject for Target package
*/

/* package ccp.api.lims.Target */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  Impl_ApplicationData value
**/
extern void *Targ_TargetStore_AddApplicationData(Targ_TargetStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean complete
**/
extern void *Targ_TargetStore_CheckAllValid(Targ_TargetStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean complete
**/
extern void *Targ_TargetStore_CheckValid(Targ_TargetStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllActiveRepositories(Targ_TargetStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllActiveRepositories_keyval0(Targ_TargetStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllActiveRepositories_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllActiveRepositories_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllActiveRepositories_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
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
extern ApiList Targ_TargetStore_FindAllActiveRepositories_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllApplicationData(Targ_TargetStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllApplicationData_keyval0(Targ_TargetStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllApplicationData_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllApplicationData_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetStore_FindAllApplicationData_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
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
extern ApiList Targ_TargetStore_FindAllApplicationData_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllProjects(Targ_TargetStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllProjects_keyval0(Targ_TargetStore self);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllProjects_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllProjects_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllProjects_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
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
extern ApiSet Targ_TargetStore_FindAllProjects_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargetGroups(Targ_TargetStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargetGroups_keyval0(Targ_TargetStore self);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargetGroups_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargetGroups_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargetGroups_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
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
extern ApiSet Targ_TargetStore_FindAllTargetGroups_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargets(Targ_TargetStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargets_keyval0(Targ_TargetStore self);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargets_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargets_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetStore_FindAllTargets_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
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
extern ApiSet Targ_TargetStore_FindAllTargets_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository(Targ_TargetStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval0(Targ_TargetStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
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
extern Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData(Targ_TargetStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval0(Targ_TargetStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
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
extern Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_TargetStore_FindFirstProject(Targ_TargetStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_TargetStore_FindFirstProject_keyval0(Targ_TargetStore self);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_TargetStore_FindFirstProject_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_TargetStore_FindFirstProject_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_TargetStore_FindFirstProject_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
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
extern Targ_Project Targ_TargetStore_FindFirstProject_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetStore_FindFirstTarget(Targ_TargetStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup(Targ_TargetStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval0(Targ_TargetStore self);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
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
extern Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetStore_FindFirstTarget_keyval0(Targ_TargetStore self);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetStore_FindFirstTarget_keyval1(Targ_TargetStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetStore_FindFirstTarget_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetStore_FindFirstTarget_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
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
extern Targ_Target Targ_TargetStore_FindFirstTarget_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Targ_TargetStore_Get(Targ_TargetStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Acco_AccessObject Targ_TargetStore_GetAccess(Targ_TargetStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Acco_AccessObject Targ_TargetStore_GetActiveAccess(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_GetActiveRepositories(Targ_TargetStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_GetApplicationData(Targ_TargetStore self);

/**
  GetByKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Targ_TargetStore Targ_TargetStore_GetByKey(Targ_TargetStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetClassName(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetCreatedBy(Targ_TargetStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_GetFieldNames(Targ_TargetStore self);

/**
  GetFullKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Targ_TargetStore_GetFullKey(Targ_TargetStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetGuid(Targ_TargetStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetInConstructor(Targ_TargetStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetIsDeleted(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetIsLoaded(Targ_TargetStore self);

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
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetIsModifiable(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetIsModified(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiBoolean Targ_TargetStore_GetIsReading(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetLastUnlockedBy(Targ_TargetStore self);

/**
  GetLocalKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @returns  Local object key
**/
extern ApiObject Targ_TargetStore_GetLocalKey(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.memopsRoot

parent link
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Impl_MemopsRoot Targ_TargetStore_GetMemopsRoot(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.name

name of TargetStore
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetName(Targ_TargetStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Impl_PackageLocator Targ_TargetStore_GetPackageLocator(Targ_TargetStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetPackageName(Targ_TargetStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetPackageShortName(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Impl_MemopsRoot Targ_TargetStore_GetParent(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiSet Targ_TargetStore_GetProjects(Targ_TargetStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiString Targ_TargetStore_GetQualifiedName(Targ_TargetStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Impl_MemopsRoot Targ_TargetStore_GetRoot(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.targetGroups

child link to class 
TargetGroup
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiSet Targ_TargetStore_GetTargetGroups(Targ_TargetStore self);

/**
  Get for ccp.lims.Target.TargetStore.targets

child link to class Target
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiSet Targ_TargetStore_GetTargets(Targ_TargetStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Targ_TargetStore self
  @returns   the result
**/
extern Impl_TopObject Targ_TargetStore_GetTopObject(Targ_TargetStore self);

/**
  Constructor for ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_TargetStore Targ_TargetStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Targ_TargetStore Targ_TargetStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.Target.Project
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_Project Targ_TargetStore_NewProject(Targ_TargetStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Target.Project
  @param  Targ_TargetStore self
  @param  char * completeName
  @param  char * shortName
  @returns  the new object
**/
extern Targ_Project Targ_TargetStore_NewProject_reqd(Targ_TargetStore self, char * completeName, char * shortName);

/**
  Factory function to create ccp.lims.Target.Target
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_Target Targ_TargetStore_NewTarget(Targ_TargetStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_TargetGroup Targ_TargetStore_NewTargetGroup(Targ_TargetStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore self
  @param  char * namingSystem
  @param  char * shortName
  @returns  the new object
**/
extern Targ_TargetGroup Targ_TargetStore_NewTargetGroup_reqd(Targ_TargetStore self, char * namingSystem, char * shortName);

/**
  Factory function to create ccp.lims.Target.Target
  @param  Targ_TargetStore self
  @param  char * commonName
  @param  Refs_MolComponent protein
  @param  char * whyChosen
  @returns  the new object
**/
extern Targ_Target Targ_TargetStore_NewTarget_reqd(Targ_TargetStore self, char * commonName, Refs_MolComponent protein, char * whyChosen);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  Impl_ApplicationData value
**/
extern void *Targ_TargetStore_RemoveApplicationData(Targ_TargetStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Targ_TargetStore_Set(Targ_TargetStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetStore self
  @param  Acco_AccessObject value
**/
extern void *Targ_TargetStore_SetAccess(Targ_TargetStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  ApiList values
**/
extern void *Targ_TargetStore_SetApplicationData(Targ_TargetStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Targ_TargetStore self
  @param  ApiString value
**/
extern void *Targ_TargetStore_SetCreatedBy(Targ_TargetStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Targ_TargetStore self
  @param  ApiString value
**/
extern void *Targ_TargetStore_SetGuid(Targ_TargetStore self, ApiString value);

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
  @param  Targ_TargetStore self
  @param  ApiBoolean value
**/
extern void *Targ_TargetStore_SetIsModifiable(Targ_TargetStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Targ_TargetStore self
  @param  ApiString value
**/
extern void *Targ_TargetStore_SetLastUnlockedBy(Targ_TargetStore self, ApiString value);

/**
  Set for ccp.lims.Target.TargetStore.name

name of TargetStore
  @param  Targ_TargetStore self
  @param  ApiString value
**/
extern void *Targ_TargetStore_SetName(Targ_TargetStore self, ApiString value);

/**
  Sorted for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_SortedProjects(Targ_TargetStore self);

/**
  Sorted for ccp.lims.Target.TargetStore.targetGroups

child link to class 
TargetGroup
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_SortedTargetGroups(Targ_TargetStore self);

/**
  Sorted for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns   the result
**/
extern ApiList Targ_TargetStore_SortedTargets(Targ_TargetStore self);

#endif /* __incl__ccp_api_lims_Target_TargetStore_h__ */
