
#ifndef __incl__ccp_api_lims_Experiment_ExperimentStore_h__
#define __incl__ccp_api_lims_Experiment_ExperimentStore_h__

#include "ccp.h"

/*
  TopObject for Experiment package
*/

/* package ccp.api.lims.Experiment */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  Impl_ApplicationData value
**/
extern void *Expe_ExperimentStore_AddApplicationData(Expe_ExperimentStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean complete
**/
extern void *Expe_ExperimentStore_CheckAllValid(Expe_ExperimentStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean complete
**/
extern void *Expe_ExperimentStore_CheckValid(Expe_ExperimentStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval0(Expe_ExperimentStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
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
extern ApiList Expe_ExperimentStore_FindAllActiveRepositories_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllApplicationData(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllApplicationData_keyval0(Expe_ExperimentStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllApplicationData_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllApplicationData_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expe_ExperimentStore_FindAllApplicationData_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
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
extern ApiList Expe_ExperimentStore_FindAllApplicationData_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval0(Expe_ExperimentStore self);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
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
extern ApiSet Expe_ExperimentStore_FindAllExperimentGroups_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperiments(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperiments_keyval0(Expe_ExperimentStore self);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperiments_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperiments_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expe_ExperimentStore_FindAllExperiments_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
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
extern ApiSet Expe_ExperimentStore_FindAllExperiments_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval0(Expe_ExperimentStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
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
extern Impl_Repository Expe_ExperimentStore_FindFirstActiveRepository_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval0(Expe_ExperimentStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
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
extern Impl_ApplicationData Expe_ExperimentStore_FindFirstApplicationData_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup(Expe_ExperimentStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval0(Expe_ExperimentStore self);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Experiment.ExperimentStore.experimentGroups

child link to 
class ExperimentGroup
  @param  Expe_ExperimentStore self
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
extern Expe_ExperimentGroup Expe_ExperimentStore_FindFirstExperimentGroup_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval0(Expe_ExperimentStore self);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval1(Expe_ExperimentStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval2(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval3(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Experiment.ExperimentStore.experiments

child 
link to class Experiment
  @param  Expe_ExperimentStore self
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
extern Expe_Experiment Expe_ExperimentStore_FindFirstExperiment_keyval4(Expe_ExperimentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expe_ExperimentStore_Get(Expe_ExperimentStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Acco_AccessObject Expe_ExperimentStore_GetAccess(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiList Expe_ExperimentStore_GetActiveRepositories(Expe_ExperimentStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiList Expe_ExperimentStore_GetApplicationData(Expe_ExperimentStore self);

/**
  GetByKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expe_ExperimentStore Expe_ExperimentStore_GetByKey(Expe_ExperimentStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetClassName(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetCreatedBy(Expe_ExperimentStore self);

/**
  Get for ccp.lims.Experiment.ExperimentStore.experimentGroups

child link 
to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiSet Expe_ExperimentStore_GetExperimentGroups(Expe_ExperimentStore self);

/**
  Get for ccp.lims.Experiment.ExperimentStore.experiments

child link to 
class Experiment
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiSet Expe_ExperimentStore_GetExperiments(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiList Expe_ExperimentStore_GetFieldNames(Expe_ExperimentStore self);

/**
  GetFullKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expe_ExperimentStore_GetFullKey(Expe_ExperimentStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetGuid(Expe_ExperimentStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetInConstructor(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetIsDeleted(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetIsLoaded(Expe_ExperimentStore self);

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
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetIsModifiable(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetIsModified(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiBoolean Expe_ExperimentStore_GetIsReading(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetLastUnlockedBy(Expe_ExperimentStore self);

/**
  GetLocalKey for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @returns  Local object key
**/
extern ApiObject Expe_ExperimentStore_GetLocalKey(Expe_ExperimentStore self);

/**
  Get for ccp.lims.Experiment.ExperimentStore.memopsRoot

parent link
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_ExperimentStore_GetMemopsRoot(Expe_ExperimentStore self);

/**
  Get for ccp.lims.Experiment.ExperimentStore.name

name of 
ExperimentStore - serves as key
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetName(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Impl_PackageLocator Expe_ExperimentStore_GetPackageLocator(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetPackageName(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetPackageShortName(Expe_ExperimentStore self);

/**
  Get for ccp.lims.Experiment.ExperimentStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_ExperimentStore_GetParent(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiString Expe_ExperimentStore_GetQualifiedName(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expe_ExperimentStore_GetRoot(Expe_ExperimentStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern Impl_TopObject Expe_ExperimentStore_GetTopObject(Expe_ExperimentStore self);

/**
  Constructor for ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_ExperimentStore Expe_ExperimentStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Experiment.ExperimentStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Expe_ExperimentStore Expe_ExperimentStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_Experiment Expe_ExperimentStore_NewExperiment(Expe_ExperimentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_NewExperimentGroup(Expe_ExperimentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Experiment.ExperimentGroup
  @param  Expe_ExperimentStore self
  @param  char * name
  @param  char * purpose
  @returns  the new object
**/
extern Expe_ExperimentGroup Expe_ExperimentStore_NewExperimentGroup_reqd(Expe_ExperimentStore self, char * name, char * purpose);

/**
  Factory function to create ccp.lims.Experiment.Experiment
  @param  Expe_ExperimentStore self
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @returns  the new object
**/
extern Expe_Experiment Expe_ExperimentStore_NewExperiment_reqd(Expe_ExperimentStore self, char * endDate, Clas_ExperimentType experimentType, char * startDate);

/**
  Factory function to create ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expe_ImportSample Expe_ExperimentStore_NewImportSample(Expe_ExperimentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Experiment.ImportSample
  @param  Expe_ExperimentStore self
  @param  char * endDate
  @param  Clas_ExperimentType experimentType
  @param  char * startDate
  @param  Affi_Organisation supplier
  @returns  the new object
**/
extern Expe_ImportSample Expe_ExperimentStore_NewImportSample_reqd(Expe_ExperimentStore self, char * endDate, Clas_ExperimentType experimentType, char * startDate, Affi_Organisation supplier);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  Impl_ApplicationData value
**/
extern void *Expe_ExperimentStore_RemoveApplicationData(Expe_ExperimentStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Experiment.ExperimentStore
  @param  Expe_ExperimentStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expe_ExperimentStore_Set(Expe_ExperimentStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expe_ExperimentStore self
  @param  Acco_AccessObject value
**/
extern void *Expe_ExperimentStore_SetAccess(Expe_ExperimentStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expe_ExperimentStore self
  @param  ApiList values
**/
extern void *Expe_ExperimentStore_SetApplicationData(Expe_ExperimentStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
extern void *Expe_ExperimentStore_SetCreatedBy(Expe_ExperimentStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
extern void *Expe_ExperimentStore_SetGuid(Expe_ExperimentStore self, ApiString value);

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
  @param  Expe_ExperimentStore self
  @param  ApiBoolean value
**/
extern void *Expe_ExperimentStore_SetIsModifiable(Expe_ExperimentStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
extern void *Expe_ExperimentStore_SetLastUnlockedBy(Expe_ExperimentStore self, ApiString value);

/**
  Set for ccp.lims.Experiment.ExperimentStore.name

name of 
ExperimentStore - serves as key
  @param  Expe_ExperimentStore self
  @param  ApiString value
**/
extern void *Expe_ExperimentStore_SetName(Expe_ExperimentStore self, ApiString value);

/**
  Sorted for ccp.lims.Experiment.ExperimentStore.experimentGroups

child 
link to class ExperimentGroup
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiList Expe_ExperimentStore_SortedExperimentGroups(Expe_ExperimentStore self);

/**
  Sorted for ccp.lims.Experiment.ExperimentStore.experiments

child link 
to class Experiment
  @param  Expe_ExperimentStore self
  @returns   the result
**/
extern ApiList Expe_ExperimentStore_SortedExperiments(Expe_ExperimentStore self);

#endif /* __incl__ccp_api_lims_Experiment_ExperimentStore_h__ */
