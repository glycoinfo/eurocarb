
#ifndef __incl__ccpnmr_api_Analysis_AxisRegion_h__
#define __incl__ccpnmr_api_Analysis_AxisRegion_h__

#include "ccp.h"

/*
  This corresponds to one region of an AxisPanel.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisRegion_AddApplicationData(Anal_AxisRegion self, Impl_ApplicationData value);

/**
  Add for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiFloat value
**/
extern void *Anal_AxisRegion_AddOverrideRegion(Anal_AxisRegion self, ApiFloat value);

/**
  CheckAllValid for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisRegion_CheckAllValid(Anal_AxisRegion self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisRegion_CheckValid(Anal_AxisRegion self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegion_FindAllApplicationData(Anal_AxisRegion self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegion_FindAllApplicationData_keyval0(Anal_AxisRegion self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegion_FindAllApplicationData_keyval1(Anal_AxisRegion self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegion_FindAllApplicationData_keyval2(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisRegion_FindAllApplicationData_keyval3(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
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
extern ApiList Anal_AxisRegion_FindAllApplicationData_keyval4(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData(Anal_AxisRegion self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval0(Anal_AxisRegion self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval1(Anal_AxisRegion self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval2(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval3(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
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
extern Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval4(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AxisRegion_Get(Anal_AxisRegion self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Acco_AccessObject Anal_AxisRegion_GetAccess(Anal_AxisRegion self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiList Anal_AxisRegion_GetApplicationData(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.axisPanel

parent link
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Anal_AxisPanel Anal_AxisRegion_GetAxisPanel(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.axisRegionGroup

AxisRegionGroup that 
groups AxisRegions
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Anal_AxisRegionGroup Anal_AxisRegion_GetAxisRegionGroup(Anal_AxisRegion self);

/**
  GetByKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AxisRegion Anal_AxisRegion_GetByKey(Anal_AxisRegion self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiString Anal_AxisRegion_GetClassName(Anal_AxisRegion self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiList Anal_AxisRegion_GetFieldNames(Anal_AxisRegion self);

/**
  GetFullKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AxisRegion_GetFullKey(Anal_AxisRegion self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiBoolean Anal_AxisRegion_GetInConstructor(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.isActive

Determines whether this 
region in the spectrum window is currently considered active, usually 
for the purpose of strip plots.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiBoolean Anal_AxisRegion_GetIsActive(Anal_AxisRegion self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiBoolean Anal_AxisRegion_GetIsDeleted(Anal_AxisRegion self);

/**
  GetLocalKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @returns  Local object key
**/
extern ApiObject Anal_AxisRegion_GetLocalKey(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiList Anal_AxisRegion_GetOverrideRegion(Anal_AxisRegion self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiString Anal_AxisRegion_GetPackageName(Anal_AxisRegion self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiString Anal_AxisRegion_GetPackageShortName(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.parent

link to parent object - 
synonym for axisPanel
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Anal_AxisPanel Anal_AxisRegion_GetParent(Anal_AxisRegion self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiString Anal_AxisRegion_GetQualifiedName(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.region

The region of this axis in 
the units specified by the AxisUnit of the AxisPanel.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiList Anal_AxisRegion_GetRegion(Anal_AxisRegion self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AxisRegion_GetRoot(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiInteger Anal_AxisRegion_GetSerial(Anal_AxisRegion self);

/**
  Get for ccpnmr.Analysis.AxisRegion.size

The size of the region in 
pixels.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern ApiInteger Anal_AxisRegion_GetSize(Anal_AxisRegion self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AxisRegion self
  @returns   the result
**/
extern Impl_TopObject Anal_AxisRegion_GetTopObject(Anal_AxisRegion self);

/**
  Constructor for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisRegion Anal_AxisRegion_Init(Anal_AxisPanel parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel parent
  @returns  the new object
**/
extern Anal_AxisRegion Anal_AxisRegion_Init_reqd(Anal_AxisPanel parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisRegion_RemoveApplicationData(Anal_AxisRegion self, Impl_ApplicationData value);

/**
  Remove for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, 
to use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiFloat value
**/
extern void *Anal_AxisRegion_RemoveOverrideRegion(Anal_AxisRegion self, ApiFloat value);

/**
  SetAttr for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AxisRegion_Set(Anal_AxisRegion self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegion self
  @param  Acco_AccessObject value
**/
extern void *Anal_AxisRegion_SetAccess(Anal_AxisRegion self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
extern void *Anal_AxisRegion_SetApplicationData(Anal_AxisRegion self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisRegion.axisRegionGroup

AxisRegionGroup that 
groups AxisRegions
  @param  Anal_AxisRegion self
  @param  Anal_AxisRegionGroup value
**/
extern void *Anal_AxisRegion_SetAxisRegionGroup(Anal_AxisRegion self, Anal_AxisRegionGroup value);

/**
  Set for ccpnmr.Analysis.AxisRegion.isActive

Determines whether this 
region in the spectrum window is currently considered active, usually 
for the purpose of strip plots.
  @param  Anal_AxisRegion self
  @param  ApiBoolean value
**/
extern void *Anal_AxisRegion_SetIsActive(Anal_AxisRegion self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
extern void *Anal_AxisRegion_SetOverrideRegion(Anal_AxisRegion self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisRegion.region

The region of this axis in 
the units specified by the AxisUnit of the AxisPanel.
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
extern void *Anal_AxisRegion_SetRegion(Anal_AxisRegion self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisRegion.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegion self
  @param  ApiInteger value
**/
extern void *Anal_AxisRegion_SetSerial(Anal_AxisRegion self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AxisRegion.size

The size of the region in 
pixels.
  @param  Anal_AxisRegion self
  @param  ApiInteger value
**/
extern void *Anal_AxisRegion_SetSize(Anal_AxisRegion self, ApiInteger value);

#endif /* __incl__ccpnmr_api_Analysis_AxisRegion_h__ */
