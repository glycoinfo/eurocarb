
#ifndef __incl__ccp_api_lims_ExpBlueprint_BlueprintStatus_h__
#define __incl__ccp_api_lims_ExpBlueprint_BlueprintStatus_h__

#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  Impl_ApplicationData value
**/
extern void *Expb_BlueprintStatus_AddApplicationData(Expb_BlueprintStatus self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean complete
**/
extern void *Expb_BlueprintStatus_CheckAllValid(Expb_BlueprintStatus self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean complete
**/
extern void *Expb_BlueprintStatus_CheckValid(Expb_BlueprintStatus self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintStatus_FindAllApplicationData(Expb_BlueprintStatus self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval0(Expb_BlueprintStatus self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval1(Expb_BlueprintStatus self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval2(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval3(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
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
extern ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval4(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData(Expb_BlueprintStatus self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval0(Expb_BlueprintStatus self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval1(Expb_BlueprintStatus self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval2(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval3(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
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
extern Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval4(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expb_BlueprintStatus_Get(Expb_BlueprintStatus self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Acco_AccessObject Expb_BlueprintStatus_GetAccess(Expb_BlueprintStatus self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiList Expb_BlueprintStatus_GetApplicationData(Expb_BlueprintStatus self);

/**
  GetByKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expb_BlueprintStatus Expb_BlueprintStatus_GetByKey(Expb_BlueprintStatus self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiString Expb_BlueprintStatus_GetClassName(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.code
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Clas_TargetStatus Expb_BlueprintStatus_GetCode(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.date

The date when the 
status is assigned.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiString Expb_BlueprintStatus_GetDate(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.expBlueprint

parent link
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Expb_ExpBlueprint Expb_BlueprintStatus_GetExpBlueprint(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.experiment
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Expe_Experiment Expb_BlueprintStatus_GetExperiment(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiList Expb_BlueprintStatus_GetFieldNames(Expb_BlueprintStatus self);

/**
  GetFullKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expb_BlueprintStatus_GetFullKey(Expb_BlueprintStatus self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiBoolean Expb_BlueprintStatus_GetInConstructor(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiBoolean Expb_BlueprintStatus_GetIsDeleted(Expb_BlueprintStatus self);

/**
  GetLocalKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @returns  Local object key
**/
extern ApiObject Expb_BlueprintStatus_GetLocalKey(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiString Expb_BlueprintStatus_GetPackageName(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiString Expb_BlueprintStatus_GetPackageShortName(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.parent

link to parent 
object - synonym for expBlueprint
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Expb_ExpBlueprint Expb_BlueprintStatus_GetParent(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiString Expb_BlueprintStatus_GetQualifiedName(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_BlueprintStatus_GetRoot(Expb_BlueprintStatus self);

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern ApiInteger Expb_BlueprintStatus_GetSerial(Expb_BlueprintStatus self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
extern Impl_TopObject Expb_BlueprintStatus_GetTopObject(Expb_BlueprintStatus self);

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_BlueprintStatus Expb_BlueprintStatus_Init(Expb_ExpBlueprint parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint parent
  @param  Clas_TargetStatus code
  @returns  the new object
**/
extern Expb_BlueprintStatus Expb_BlueprintStatus_Init_reqd(Expb_ExpBlueprint parent, Clas_TargetStatus code);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  Impl_ApplicationData value
**/
extern void *Expb_BlueprintStatus_RemoveApplicationData(Expb_BlueprintStatus self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expb_BlueprintStatus_Set(Expb_BlueprintStatus self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintStatus self
  @param  Acco_AccessObject value
**/
extern void *Expb_BlueprintStatus_SetAccess(Expb_BlueprintStatus self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  ApiList values
**/
extern void *Expb_BlueprintStatus_SetApplicationData(Expb_BlueprintStatus self, ApiList values);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.code
  @param  Expb_BlueprintStatus self
  @param  Clas_TargetStatus value
**/
extern void *Expb_BlueprintStatus_SetCode(Expb_BlueprintStatus self, Clas_TargetStatus value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.date

The date when the 
status is assigned.
  @param  Expb_BlueprintStatus self
  @param  ApiString value
**/
extern void *Expb_BlueprintStatus_SetDate(Expb_BlueprintStatus self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.experiment
  @param  Expb_BlueprintStatus self
  @param  Expe_Experiment value
**/
extern void *Expb_BlueprintStatus_SetExperiment(Expb_BlueprintStatus self, Expe_Experiment value);

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Expb_BlueprintStatus self
  @param  ApiInteger value
**/
extern void *Expb_BlueprintStatus_SetSerial(Expb_BlueprintStatus self, ApiInteger value);

#endif /* __incl__ccp_api_lims_ExpBlueprint_BlueprintStatus_h__ */
