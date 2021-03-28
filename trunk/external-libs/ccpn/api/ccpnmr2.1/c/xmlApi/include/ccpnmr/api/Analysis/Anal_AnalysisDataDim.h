
#ifndef __incl__ccpnmr_api_Analysis_AnalysisDataDim_h__
#define __incl__ccpnmr_api_Analysis_AnalysisDataDim_h__

#include "ccp.h"

/*
  Analysis information for DataDim
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisDataDim_AddApplicationData(Anal_AnalysisDataDim self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisDataDim_CheckAllValid(Anal_AnalysisDataDim self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisDataDim_CheckValid(Anal_AnalysisDataDim self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData(Anal_AnalysisDataDim self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval0(Anal_AnalysisDataDim self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
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
extern ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings(Anal_AnalysisDataDim self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval0(Anal_AnalysisDataDim self);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
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
extern ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData(Anal_AnalysisDataDim self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval0(Anal_AnalysisDataDim self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
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
extern Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping(Anal_AnalysisDataDim self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval0(Anal_AnalysisDataDim self);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
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
extern Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AnalysisDataDim_Get(Anal_AnalysisDataDim self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisDataDim_GetAccess(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisDataDim_GetActiveAccess(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.analysisSpectrum

parent link
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Anal_AnalysisSpectrum Anal_AnalysisDataDim_GetAnalysisSpectrum(Anal_AnalysisDataDim self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiList Anal_AnalysisDataDim_GetApplicationData(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.assignTolerance

Chemical shift 
tolerance (ppm) for assignment
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetAssignTolerance(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiSet Anal_AnalysisDataDim_GetAxisMappings(Anal_AnalysisDataDim self);

/**
  GetByKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AnalysisDataDim Anal_AnalysisDataDim_GetByKey(Anal_AnalysisDataDim self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.chemShiftWeight

Weight for 
dimension in chemical shift averaging.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetChemShiftWeight(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiString Anal_AnalysisDataDim_GetClassName(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.dataDim

DAtDim that 
AnalysisDataDim points to
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Nmr_AbstractDataDim Anal_AnalysisDataDim_GetDataDim(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiList Anal_AnalysisDataDim_GetFieldNames(Anal_AnalysisDataDim self);

/**
  GetFullKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AnalysisDataDim_GetFullKey(Anal_AnalysisDataDim self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisDataDim_GetInConstructor(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisDataDim_GetIsDeleted(Anal_AnalysisDataDim self);

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  Local object key
**/
extern ApiObject Anal_AnalysisDataDim_GetLocalKey(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.noeTolerance

NBNB TBD ???
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetNoeTolerance(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiString Anal_AnalysisDataDim_GetPackageName(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiString Anal_AnalysisDataDim_GetPackageShortName(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.parent

link to parent object - 
synonym for analysisSpectrum
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Anal_AnalysisSpectrum Anal_AnalysisDataDim_GetParent(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.peakFindBoxWidth

Minimum line 
width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetPeakFindBoxWidth(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.peakFindMinLineWidth

Minimum 
line width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetPeakFindMinLineWidth(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiString Anal_AnalysisDataDim_GetQualifiedName(Anal_AnalysisDataDim self);

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.refSamplePlane

Index in this 
dimension that indicates plane used as reference plane. Intended for use 
with sampled dimensions in e.g. pseudo-3D experiments, where one plane 
is the reference plane.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiFloat Anal_AnalysisDataDim_GetRefSamplePlane(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AnalysisDataDim_GetRoot(Anal_AnalysisDataDim self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern Impl_TopObject Anal_AnalysisDataDim_GetTopObject(Anal_AnalysisDataDim self);

/**
  Constructor for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AnalysisDataDim Anal_AnalysisDataDim_Init(Anal_AnalysisSpectrum parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum parent
  @param  Nmr_AbstractDataDim dataDim
  @returns  the new object
**/
extern Anal_AnalysisDataDim Anal_AnalysisDataDim_Init_reqd(Anal_AnalysisSpectrum parent, Nmr_AbstractDataDim dataDim);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisDataDim_RemoveApplicationData(Anal_AnalysisDataDim self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AnalysisDataDim_Set(Anal_AnalysisDataDim self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisDataDim self
  @param  Acco_AccessObject value
**/
extern void *Anal_AnalysisDataDim_SetAccess(Anal_AnalysisDataDim self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  ApiList values
**/
extern void *Anal_AnalysisDataDim_SetApplicationData(Anal_AnalysisDataDim self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.assignTolerance

Chemical shift 
tolerance (ppm) for assignment
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetAssignTolerance(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiSet values
**/
extern void *Anal_AnalysisDataDim_SetAxisMappings(Anal_AnalysisDataDim self, ApiSet values);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.chemShiftWeight

Weight for 
dimension in chemical shift averaging.
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetChemShiftWeight(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.dataDim

DAtDim that 
AnalysisDataDim points to
  @param  Anal_AnalysisDataDim self
  @param  Nmr_AbstractDataDim value
**/
extern void *Anal_AnalysisDataDim_SetDataDim(Anal_AnalysisDataDim self, Nmr_AbstractDataDim value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.noeTolerance

NBNB TBD ???
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetNoeTolerance(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.peakFindBoxWidth

Minimum line 
width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetPeakFindBoxWidth(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.peakFindMinLineWidth

Minimum 
line width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetPeakFindMinLineWidth(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.refSamplePlane

Index in this 
dimension that indicates plane used as reference plane. Intended for use 
with sampled dimensions in e.g. pseudo-3D experiments, where one plane 
is the reference plane.
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
extern void *Anal_AnalysisDataDim_SetRefSamplePlane(Anal_AnalysisDataDim self, ApiFloat value);

/**
  Sorted for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
extern ApiList Anal_AnalysisDataDim_SortedAxisMappings(Anal_AnalysisDataDim self);

#endif /* __incl__ccpnmr_api_Analysis_AnalysisDataDim_h__ */
