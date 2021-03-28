
#ifndef __incl__ccpnmr_api_Analysis_AxisUnit_h__
#define __incl__ccpnmr_api_Analysis_AxisUnit_h__

#include "ccp.h"

/*
  This is one possible unit for an AxisType.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisUnit_AddApplicationData(Anal_AxisUnit self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisUnit_CheckAllValid(Anal_AxisUnit self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  ApiBoolean complete
**/
extern void *Anal_AxisUnit_CheckValid(Anal_AxisUnit self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisUnit_FindAllApplicationData(Anal_AxisUnit self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisUnit_FindAllApplicationData_keyval0(Anal_AxisUnit self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisUnit_FindAllApplicationData_keyval1(Anal_AxisUnit self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisUnit_FindAllApplicationData_keyval2(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AxisUnit_FindAllApplicationData_keyval3(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
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
extern ApiList Anal_AxisUnit_FindAllApplicationData_keyval4(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData(Anal_AxisUnit self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData_keyval0(Anal_AxisUnit self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData_keyval1(Anal_AxisUnit self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData_keyval2(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData_keyval3(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
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
extern Impl_ApplicationData Anal_AxisUnit_FindFirstApplicationData_keyval4(Anal_AxisUnit self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AxisUnit_Get(Anal_AxisUnit self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern Acco_AccessObject Anal_AxisUnit_GetAccess(Anal_AxisUnit self);

/**
  Get for ccpnmr.Analysis.AxisUnit.analysisProject

parent link
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AxisUnit_GetAnalysisProject(Anal_AxisUnit self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiList Anal_AxisUnit_GetApplicationData(Anal_AxisUnit self);

/**
  GetByKey for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AxisUnit Anal_AxisUnit_GetByKey(Anal_AxisUnit self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiString Anal_AxisUnit_GetClassName(Anal_AxisUnit self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiList Anal_AxisUnit_GetFieldNames(Anal_AxisUnit self);

/**
  GetFullKey for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AxisUnit_GetFullKey(Anal_AxisUnit self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiBoolean Anal_AxisUnit_GetInConstructor(Anal_AxisUnit self);

/**
  Get for ccpnmr.Analysis.AxisUnit.isBackwards

if true then left (bottom) 
of region has higher value than right (top)
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiBoolean Anal_AxisUnit_GetIsBackwards(Anal_AxisUnit self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiBoolean Anal_AxisUnit_GetIsDeleted(Anal_AxisUnit self);

/**
  GetLocalKey for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @returns  Local object key
**/
extern ApiObject Anal_AxisUnit_GetLocalKey(Anal_AxisUnit self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiString Anal_AxisUnit_GetPackageName(Anal_AxisUnit self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiString Anal_AxisUnit_GetPackageShortName(Anal_AxisUnit self);

/**
  Get for ccpnmr.Analysis.AxisUnit.parent

link to parent object - synonym 
for analysisProject
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AxisUnit_GetParent(Anal_AxisUnit self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiString Anal_AxisUnit_GetQualifiedName(Anal_AxisUnit self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AxisUnit_GetRoot(Anal_AxisUnit self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern Impl_TopObject Anal_AxisUnit_GetTopObject(Anal_AxisUnit self);

/**
  Get for ccpnmr.Analysis.AxisUnit.unit

e.g. 'ppm', 'Hz', 'deg K'
  @param  Anal_AxisUnit self
  @returns   the result
**/
extern ApiString Anal_AxisUnit_GetUnit(Anal_AxisUnit self);

/**
  Constructor for ccpnmr.Analysis.AxisUnit
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisUnit Anal_AxisUnit_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AxisUnit
  @param  Anal_AnalysisProject parent
  @param  char * unit
  @returns  the new object
**/
extern Anal_AxisUnit Anal_AxisUnit_Init_reqd(Anal_AnalysisProject parent, char * unit);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AxisUnit_RemoveApplicationData(Anal_AxisUnit self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.AxisUnit
  @param  Anal_AxisUnit self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AxisUnit_Set(Anal_AxisUnit self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisUnit self
  @param  Acco_AccessObject value
**/
extern void *Anal_AxisUnit_SetAccess(Anal_AxisUnit self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisUnit self
  @param  ApiList values
**/
extern void *Anal_AxisUnit_SetApplicationData(Anal_AxisUnit self, ApiList values);

/**
  Set for ccpnmr.Analysis.AxisUnit.isBackwards

if true then left (bottom) 
of region has higher value than right (top)
  @param  Anal_AxisUnit self
  @param  ApiBoolean value
**/
extern void *Anal_AxisUnit_SetIsBackwards(Anal_AxisUnit self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.AxisUnit.unit

e.g. 'ppm', 'Hz', 'deg K'
  @param  Anal_AxisUnit self
  @param  ApiString value
**/
extern void *Anal_AxisUnit_SetUnit(Anal_AxisUnit self, ApiString value);

#endif /* __incl__ccpnmr_api_Analysis_AxisUnit_h__ */
