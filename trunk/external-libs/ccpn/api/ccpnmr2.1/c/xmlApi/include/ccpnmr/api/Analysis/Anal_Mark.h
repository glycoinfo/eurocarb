
#ifndef __incl__ccpnmr_api_Analysis_Mark_h__
#define __incl__ccpnmr_api_Analysis_Mark_h__

#include "ccp.h"

/*
  Multidimensional graphical mark.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  Impl_ApplicationData value
**/
extern void *Anal_Mark_AddApplicationData(Anal_Mark self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean complete
**/
extern void *Anal_Mark_CheckAllValid(Anal_Mark self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean complete
**/
extern void *Anal_Mark_CheckValid(Anal_Mark self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_Mark_FindAllApplicationData(Anal_Mark self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_Mark_FindAllApplicationData_keyval0(Anal_Mark self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_Mark_FindAllApplicationData_keyval1(Anal_Mark self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_Mark_FindAllApplicationData_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_Mark_FindAllApplicationData_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
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
extern ApiList Anal_Mark_FindAllApplicationData_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_Mark_FindAllMarkDims(Anal_Mark self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_Mark_FindAllMarkDims_keyval0(Anal_Mark self);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_Mark_FindAllMarkDims_keyval1(Anal_Mark self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_Mark_FindAllMarkDims_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_Mark_FindAllMarkDims_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
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
extern ApiSet Anal_Mark_FindAllMarkDims_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData(Anal_Mark self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval0(Anal_Mark self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval1(Anal_Mark self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
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
extern Impl_ApplicationData Anal_Mark_FindFirstApplicationData_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim(Anal_Mark self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval0(Anal_Mark self);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval1(Anal_Mark self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval2(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval3(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
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
extern Anal_MarkDim Anal_Mark_FindFirstMarkDim_keyval4(Anal_Mark self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_Mark_Get(Anal_Mark self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Mark self
  @returns   the result
**/
extern Acco_AccessObject Anal_Mark_GetAccess(Anal_Mark self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_Mark self
  @returns   the result
**/
extern Acco_AccessObject Anal_Mark_GetActiveAccess(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.Mark.analysisProject

parent link
  @param  Anal_Mark self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_Mark_GetAnalysisProject(Anal_Mark self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiList Anal_Mark_GetApplicationData(Anal_Mark self);

/**
  GetByKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_Mark Anal_Mark_GetByKey(Anal_Mark self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiString Anal_Mark_GetClassName(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.Mark.color

Mark color
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiString Anal_Mark_GetColor(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiInteger Anal_Mark_GetDashLength(Anal_Mark self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiList Anal_Mark_GetFieldNames(Anal_Mark self);

/**
  GetFullKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_Mark_GetFullKey(Anal_Mark self, ApiBoolean useGuid);

/**
  Get for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiInteger Anal_Mark_GetGapLength(Anal_Mark self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiBoolean Anal_Mark_GetInConstructor(Anal_Mark self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiBoolean Anal_Mark_GetIsDeleted(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiFloat Anal_Mark_GetLineWidth(Anal_Mark self);

/**
  GetLocalKey for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @returns  Local object key
**/
extern ApiObject Anal_Mark_GetLocalKey(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiSet Anal_Mark_GetMarkDims(Anal_Mark self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiString Anal_Mark_GetPackageName(Anal_Mark self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiString Anal_Mark_GetPackageShortName(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.Mark.parent

link to parent object - synonym for 
analysisProject
  @param  Anal_Mark self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_Mark_GetParent(Anal_Mark self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiString Anal_Mark_GetQualifiedName(Anal_Mark self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_Mark self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_Mark_GetRoot(Anal_Mark self);

/**
  Get for ccpnmr.Analysis.Mark.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiInteger Anal_Mark_GetSerial(Anal_Mark self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_Mark self
  @returns   the result
**/
extern Impl_TopObject Anal_Mark_GetTopObject(Anal_Mark self);

/**
  Constructor for ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_Mark Anal_Mark_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.Mark
  @param  Anal_AnalysisProject parent
  @returns  the new object
**/
extern Anal_Mark Anal_Mark_Init_reqd(Anal_AnalysisProject parent);

/**
  Factory function to create ccpnmr.Analysis.MarkDim
  @param  Anal_Mark self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_MarkDim Anal_Mark_NewMarkDim(Anal_Mark self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.MarkDim
  @param  Anal_Mark self
  @param  Anal_AxisType axisType
  @param  float position
  @returns  the new object
**/
extern Anal_MarkDim Anal_Mark_NewMarkDim_reqd(Anal_Mark self, Anal_AxisType axisType, float position);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  Impl_ApplicationData value
**/
extern void *Anal_Mark_RemoveApplicationData(Anal_Mark self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.Mark
  @param  Anal_Mark self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_Mark_Set(Anal_Mark self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Mark self
  @param  Acco_AccessObject value
**/
extern void *Anal_Mark_SetAccess(Anal_Mark self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Mark self
  @param  ApiList values
**/
extern void *Anal_Mark_SetApplicationData(Anal_Mark self, ApiList values);

/**
  Set for ccpnmr.Analysis.Mark.color

Mark color
  @param  Anal_Mark self
  @param  ApiString value
**/
extern void *Anal_Mark_SetColor(Anal_Mark self, ApiString value);

/**
  Set for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Mark self
  @param  ApiInteger value
**/
extern void *Anal_Mark_SetDashLength(Anal_Mark self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Mark self
  @param  ApiInteger value
**/
extern void *Anal_Mark_SetGapLength(Anal_Mark self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Mark self
  @param  ApiFloat value
**/
extern void *Anal_Mark_SetLineWidth(Anal_Mark self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.Mark.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Mark self
  @param  ApiInteger value
**/
extern void *Anal_Mark_SetSerial(Anal_Mark self, ApiInteger value);

/**
  Sorted for ccpnmr.Analysis.Mark.markDims

child link to class MarkDim
  @param  Anal_Mark self
  @returns   the result
**/
extern ApiList Anal_Mark_SortedMarkDims(Anal_Mark self);

#endif /* __incl__ccpnmr_api_Analysis_Mark_h__ */
