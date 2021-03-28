
#ifndef __incl__ccpnmr_api_Analysis_StoredContour_h__
#define __incl__ccpnmr_api_Analysis_StoredContour_h__

#include "ccp.h"

/*
  Set of stored contours for a spectrum (dataSource)
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  Impl_ApplicationData value
**/
extern void *Anal_StoredContour_AddApplicationData(Anal_StoredContour self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean complete
**/
extern void *Anal_StoredContour_CheckAllValid(Anal_StoredContour self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean complete
**/
extern void *Anal_StoredContour_CheckValid(Anal_StoredContour self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllApplicationData(Anal_StoredContour self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllApplicationData_keyval0(Anal_StoredContour self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllApplicationData_keyval1(Anal_StoredContour self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllApplicationData_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllApplicationData_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
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
extern ApiList Anal_StoredContour_FindAllApplicationData_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllDataDims(Anal_StoredContour self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllDataDims_keyval0(Anal_StoredContour self);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllDataDims_keyval1(Anal_StoredContour self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllDataDims_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_StoredContour_FindAllDataDims_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
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
extern ApiList Anal_StoredContour_FindAllDataDims_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData(Anal_StoredContour self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval0(Anal_StoredContour self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval1(Anal_StoredContour self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
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
extern Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim(Anal_StoredContour self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval0(Anal_StoredContour self);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval1(Anal_StoredContour self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
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
extern Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_StoredContour_Get(Anal_StoredContour self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Acco_AccessObject Anal_StoredContour_GetAccess(Anal_StoredContour self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Acco_AccessObject Anal_StoredContour_GetActiveAccess(Anal_StoredContour self);

/**
  Get for ccpnmr.Analysis.StoredContour.analysisSpectrum

parent link
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Anal_AnalysisSpectrum Anal_StoredContour_GetAnalysisSpectrum(Anal_StoredContour self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiList Anal_StoredContour_GetApplicationData(Anal_StoredContour self);

/**
  GetByKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_StoredContour Anal_StoredContour_GetByKey(Anal_StoredContour self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetClassName(Anal_StoredContour self);

/**
  getter for derived link dataDims
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiList Anal_StoredContour_GetDataDims(Anal_StoredContour self);

/**
  Get for ccpnmr.Analysis.StoredContour.dims

Dimensions that contours 
apply to.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiList Anal_StoredContour_GetDims(Anal_StoredContour self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiList Anal_StoredContour_GetFieldNames(Anal_StoredContour self);

/**
  GetFullKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_StoredContour_GetFullKey(Anal_StoredContour self, ApiBoolean useGuid);

/**
  getter for derived attribute fullPath
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetFullPath(Anal_StoredContour self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiBoolean Anal_StoredContour_GetInConstructor(Anal_StoredContour self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiBoolean Anal_StoredContour_GetIsDeleted(Anal_StoredContour self);

/**
  GetLocalKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @returns  Local object key
**/
extern ApiObject Anal_StoredContour_GetLocalKey(Anal_StoredContour self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetPackageName(Anal_StoredContour self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetPackageShortName(Anal_StoredContour self);

/**
  Get for ccpnmr.Analysis.StoredContour.parent

link to parent object - 
synonym for analysisSpectrum
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Anal_AnalysisSpectrum Anal_StoredContour_GetParent(Anal_StoredContour self);

/**
  Get for ccpnmr.Analysis.StoredContour.path

relative path to contour 
file - to be combined with analysisSpectrum.contourDir path.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetPath(Anal_StoredContour self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiString Anal_StoredContour_GetQualifiedName(Anal_StoredContour self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_StoredContour_GetRoot(Anal_StoredContour self);

/**
  Get for ccpnmr.Analysis.StoredContour.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_StoredContour self
  @returns   the result
**/
extern ApiInteger Anal_StoredContour_GetSerial(Anal_StoredContour self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_StoredContour self
  @returns   the result
**/
extern Impl_TopObject Anal_StoredContour_GetTopObject(Anal_StoredContour self);

/**
  Constructor for ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_StoredContour Anal_StoredContour_Init(Anal_AnalysisSpectrum parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum parent
  @param  ApiList dims
  @param  char * path
  @returns  the new object
**/
extern Anal_StoredContour Anal_StoredContour_Init_reqd(Anal_AnalysisSpectrum parent, ApiList dims, char * path);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  Impl_ApplicationData value
**/
extern void *Anal_StoredContour_RemoveApplicationData(Anal_StoredContour self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_StoredContour_Set(Anal_StoredContour self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_StoredContour self
  @param  Acco_AccessObject value
**/
extern void *Anal_StoredContour_SetAccess(Anal_StoredContour self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  ApiList values
**/
extern void *Anal_StoredContour_SetApplicationData(Anal_StoredContour self, ApiList values);

/**
  Set for ccpnmr.Analysis.StoredContour.dims

Dimensions that contours 
apply to.
  @param  Anal_StoredContour self
  @param  ApiList values
**/
extern void *Anal_StoredContour_SetDims(Anal_StoredContour self, ApiList values);

/**
  Set for ccpnmr.Analysis.StoredContour.path

relative path to contour 
file - to be combined with analysisSpectrum.contourDir path.
  @param  Anal_StoredContour self
  @param  ApiString value
**/
extern void *Anal_StoredContour_SetPath(Anal_StoredContour self, ApiString value);

/**
  Set for ccpnmr.Analysis.StoredContour.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_StoredContour self
  @param  ApiInteger value
**/
extern void *Anal_StoredContour_SetSerial(Anal_StoredContour self, ApiInteger value);

#endif /* __incl__ccpnmr_api_Analysis_StoredContour_h__ */
