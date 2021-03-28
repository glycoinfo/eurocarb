
#ifndef __incl__ccpnmr_api_Analysis_AxisRegionGroup_h__
#define __incl__ccpnmr_api_Analysis_AxisRegionGroup_h__

#include "ccp.h"

/*
  Group of axis regions which are tied together. Used e.g. for strip plots.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisRegionGroup_AddApplicationData(Anal_AxisRegionGroup self, Impl_ApplicationData value);

/**
  Add for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Anal_AxisRegion value
**/
extern void *Anal_AxisRegionGroup_AddAxisRegion(Anal_AxisRegionGroup self, Anal_AxisRegion value);

/**
  CheckAllValid for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisRegionGroup_CheckAllValid(Anal_AxisRegionGroup self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisRegionGroup_CheckValid(Anal_AxisRegionGroup self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData(Anal_AxisRegionGroup self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval0(Anal_AxisRegionGroup self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
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
extern ApiList Anal_AxisRegionGroup_FindAllApplicationData_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions(Anal_AxisRegionGroup self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval0(Anal_AxisRegionGroup self);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
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
extern ApiSet Anal_AxisRegionGroup_FindAllAxisRegions_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData(Anal_AxisRegionGroup self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval0(Anal_AxisRegionGroup self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
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
extern Impl_ApplicationData Anal_AxisRegionGroup_FindFirstApplicationData_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion(Anal_AxisRegionGroup self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval0(Anal_AxisRegionGroup self);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval1(Anal_AxisRegionGroup self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval2(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval3(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions 
that make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
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
extern Anal_AxisRegion Anal_AxisRegionGroup_FindFirstAxisRegion_keyval4(Anal_AxisRegionGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AxisRegionGroup_Get(Anal_AxisRegionGroup self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Acco_AccessObject Anal_AxisRegionGroup_GetAccess(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Acco_AccessObject Anal_AxisRegionGroup_GetActiveAccess(Anal_AxisRegionGroup self);

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.analysisProject

parent link
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AxisRegionGroup_GetAnalysisProject(Anal_AxisRegionGroup self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiList Anal_AxisRegionGroup_GetApplicationData(Anal_AxisRegionGroup self);

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiSet Anal_AxisRegionGroup_GetAxisRegions(Anal_AxisRegionGroup self);

/**
  GetByKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AxisRegionGroup Anal_AxisRegionGroup_GetByKey(Anal_AxisRegionGroup self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiString Anal_AxisRegionGroup_GetClassName(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiList Anal_AxisRegionGroup_GetFieldNames(Anal_AxisRegionGroup self);

/**
  GetFullKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AxisRegionGroup_GetFullKey(Anal_AxisRegionGroup self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiBoolean Anal_AxisRegionGroup_GetInConstructor(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiBoolean Anal_AxisRegionGroup_GetIsDeleted(Anal_AxisRegionGroup self);

/**
  GetLocalKey for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns  Local object key
**/
extern ApiObject Anal_AxisRegionGroup_GetLocalKey(Anal_AxisRegionGroup self);

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.name

name of AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiString Anal_AxisRegionGroup_GetName(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiString Anal_AxisRegionGroup_GetPackageName(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiString Anal_AxisRegionGroup_GetPackageShortName(Anal_AxisRegionGroup self);

/**
  getter for derived link panelType
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Anal_PanelType Anal_AxisRegionGroup_GetPanelType(Anal_AxisRegionGroup self);

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AxisRegionGroup_GetParent(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiString Anal_AxisRegionGroup_GetQualifiedName(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AxisRegionGroup_GetRoot(Anal_AxisRegionGroup self);

/**
  Get for ccpnmr.Analysis.AxisRegionGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiInteger Anal_AxisRegionGroup_GetSerial(Anal_AxisRegionGroup self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern Impl_TopObject Anal_AxisRegionGroup_GetTopObject(Anal_AxisRegionGroup self);

/**
  Constructor for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisRegionGroup Anal_AxisRegionGroup_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
extern Anal_AxisRegionGroup Anal_AxisRegionGroup_Init_reqd(Anal_AnalysisProject parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisRegionGroup_RemoveApplicationData(Anal_AxisRegionGroup self, Impl_ApplicationData value);

/**
  Remove for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  Anal_AxisRegion value
**/
extern void *Anal_AxisRegionGroup_RemoveAxisRegion(Anal_AxisRegionGroup self, Anal_AxisRegion value);

/**
  SetAttr for ccpnmr.Analysis.AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AxisRegionGroup_Set(Anal_AxisRegionGroup self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegionGroup self
  @param  Acco_AccessObject value
**/
extern void *Anal_AxisRegionGroup_SetAccess(Anal_AxisRegionGroup self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegionGroup self
  @param  ApiList values
**/
extern void *Anal_AxisRegionGroup_SetApplicationData(Anal_AxisRegionGroup self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiSet values
**/
extern void *Anal_AxisRegionGroup_SetAxisRegions(Anal_AxisRegionGroup self, ApiSet values);

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.name

name of AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @param  ApiString value
**/
extern void *Anal_AxisRegionGroup_SetName(Anal_AxisRegionGroup self, ApiString value);

/**
  Set for ccpnmr.Analysis.AxisRegionGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegionGroup self
  @param  ApiInteger value
**/
extern void *Anal_AxisRegionGroup_SetSerial(Anal_AxisRegionGroup self, ApiInteger value);

/**
  Sorted for ccpnmr.Analysis.AxisRegionGroup.axisRegions

AxisRegions that 
make up AxisRegionGroup
  @param  Anal_AxisRegionGroup self
  @returns   the result
**/
extern ApiList Anal_AxisRegionGroup_SortedAxisRegions(Anal_AxisRegionGroup self);

#endif /* __incl__ccpnmr_api_Analysis_AxisRegionGroup_h__ */
