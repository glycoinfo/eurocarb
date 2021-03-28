
#ifndef __incl__ccp_api_nmr_Nmr_SampledDataDim_h__
#define __incl__ccp_api_nmr_Nmr_SampledDataDim_h__

#include "ccp.h"

/*
  A data dimension where points are not regularly spaced. The point values are given as an explicit list (pointValues). Intended for non-linear sampling, T1 or titration series, ...
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampledDataDim_AddApplicationData(Nmr_SampledDataDim self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
extern void *Nmr_SampledDataDim_AddPointError(Nmr_SampledDataDim self, ApiFloat value);

/**
  Add for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
extern void *Nmr_SampledDataDim_AddPointValue(Nmr_SampledDataDim self, ApiFloat value);

/**
  CheckAllValid for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampledDataDim_CheckAllValid(Nmr_SampledDataDim self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampledDataDim_CheckValid(Nmr_SampledDataDim self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampledDataDim_FindAllApplicationData(Nmr_SampledDataDim self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval0(Nmr_SampledDataDim self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
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
extern ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings(Nmr_SampledDataDim self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval0(Nmr_SampledDataDim self);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
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
extern ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData(Nmr_SampledDataDim self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval0(Nmr_SampledDataDim self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
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
extern Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling(Nmr_SampledDataDim self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval0(Nmr_SampledDataDim self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
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
extern Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_SampledDataDim_Get(Nmr_SampledDataDim self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SampledDataDim_GetAccess(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SampledDataDim_GetActiveAccess(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.analysisDataDim

AnalysisDataDim 
associated with DataDim
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Anal_AnalysisDataDim Nmr_SampledDataDim_GetAnalysisDataDim(Nmr_SampledDataDim self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiList Nmr_SampledDataDim_GetApplicationData(Nmr_SampledDataDim self);

/**
  GetByKey for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_SampledDataDim Nmr_SampledDataDim_GetByKey(Nmr_SampledDataDim self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetClassName(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.SampledDataDim.conditionVaried

Description of the 
parameter being varied (e.g. temperature, pH, relaxation delay, ...)
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetConditionVaried(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dataSource

parent link
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Nmr_DataSource Nmr_SampledDataDim_GetDataSource(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.SampledDataDim.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetDetails(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dim

Dimension number. Dimensions go 
from 1 to numDim. For projections that means the numDim of the 
dataSource, not of the experiment. dim for an AbstractDataDim can be set 
independently of the dim for the corresponding ExpDim, although it is 
recommended that the acquisition dimension (if present) be given dim 1. 
The dim values correspond to the storage order in the corresponding 
file, 1 being the fastest varying dim.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiInteger Nmr_SampledDataDim_GetDim(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiSet Nmr_SampledDataDim_GetDimensionScalings(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.expDim

ExpDim corresponding to 
DataDim
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Nmr_ExpDim Nmr_SampledDataDim_GetExpDim(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiList Nmr_SampledDataDim_GetFieldNames(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.fileDim

Corresponding dimension in 
the dataSource (an integer, starting at zero).
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiInteger Nmr_SampledDataDim_GetFileDim(Nmr_SampledDataDim self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiBoolean Nmr_SampledDataDim_GetInConstructor(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.isComplex

Defines whether the 
underlying data are complex, i.e. whether both real and imaginary values 
are stored.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiBoolean Nmr_SampledDataDim_GetIsComplex(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiBoolean Nmr_SampledDataDim_GetIsDeleted(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.numPoints

Number of points. When 
isComplex is True, numPoints is the number of complex points (i.e. the 
number of time values for an FID), not the number of real numbers 
stored, so that 1024 complex points take up the same pace as 2048 real 
points. numPoints measures the size of the stored file, whether or not 
all storage slots contain meaningful data. For a SampledDataDim 
numPoints must be equal to the length of the pointValues array. For 
sparse sampling this described the grid sampled on, not the number of 
actual points.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiInteger Nmr_SampledDataDim_GetNumPoints(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetPackageName(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetPackageShortName(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.parent

link to parent object - 
synonym for dataSource
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Nmr_DataSource Nmr_SampledDataDim_GetParent(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiList Nmr_SampledDataDim_GetPointErrors(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiList Nmr_SampledDataDim_GetPointValues(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.predictMethod

Linear prediction 
method.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Meth_Method Nmr_SampledDataDim_GetPredictMethod(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetQualifiedName(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_SampledDataDim_GetRoot(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.shapeSerial

Serial number of 
corresponding DataSourceShape, if any. Note that several 
AbstractDataDims may correspond to the same DataSourceShape.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiInteger Nmr_SampledDataDim_GetShapeSerial(Nmr_SampledDataDim self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern Impl_TopObject Nmr_SampledDataDim_GetTopObject(Nmr_SampledDataDim self);

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.unit

unit for values on dimension 
axis. Typically seconds for a normal FID. For a frequency dimension unit 
is Herz, *not* ppm. Note that values in ppm (and equivalent) require 
referencing, and that referencing belongs to the DataDimRef, not to the 
DataDim.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiString Nmr_SampledDataDim_GetUnit(Nmr_SampledDataDim self);

/**
  Constructor for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SampledDataDim Nmr_SampledDataDim_Init(Nmr_DataSource parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource parent
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @returns  the new object
**/
extern Nmr_SampledDataDim Nmr_SampledDataDim_Init_reqd(Nmr_DataSource parent, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampledDataDim_RemoveApplicationData(Nmr_SampledDataDim self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
extern void *Nmr_SampledDataDim_RemovePointError(Nmr_SampledDataDim self, ApiFloat value);

/**
  Remove for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
extern void *Nmr_SampledDataDim_RemovePointValue(Nmr_SampledDataDim self, ApiFloat value);

/**
  SetAttr for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_SampledDataDim_Set(Nmr_SampledDataDim self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampledDataDim self
  @param  Acco_AccessObject value
**/
extern void *Nmr_SampledDataDim_SetAccess(Nmr_SampledDataDim self, Acco_AccessObject value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.analysisDataDim

AnalysisDataDim 
associated with DataDim
  @param  Nmr_SampledDataDim self
  @param  Anal_AnalysisDataDim value
**/
extern void *Nmr_SampledDataDim_SetAnalysisDataDim(Nmr_SampledDataDim self, Anal_AnalysisDataDim value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
extern void *Nmr_SampledDataDim_SetApplicationData(Nmr_SampledDataDim self, ApiList values);

/**
  Set for ccp.nmr.Nmr.SampledDataDim.conditionVaried

Description of the 
parameter being varied (e.g. temperature, pH, relaxation delay, ...)
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
extern void *Nmr_SampledDataDim_SetConditionVaried(Nmr_SampledDataDim self, ApiString value);

/**
  Set for ccp.nmr.Nmr.SampledDataDim.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
extern void *Nmr_SampledDataDim_SetDetails(Nmr_SampledDataDim self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.dim

Dimension number. Dimensions go 
from 1 to numDim. For projections that means the numDim of the 
dataSource, not of the experiment. dim for an AbstractDataDim can be set 
independently of the dim for the corresponding ExpDim, although it is 
recommended that the acquisition dimension (if present) be given dim 1. 
The dim values correspond to the storage order in the corresponding 
file, 1 being the fastest varying dim.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
extern void *Nmr_SampledDataDim_SetDim(Nmr_SampledDataDim self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.expDim

ExpDim corresponding to 
DataDim
  @param  Nmr_SampledDataDim self
  @param  Nmr_ExpDim value
**/
extern void *Nmr_SampledDataDim_SetExpDim(Nmr_SampledDataDim self, Nmr_ExpDim value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.fileDim

Corresponding dimension in 
the dataSource (an integer, starting at zero).
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
extern void *Nmr_SampledDataDim_SetFileDim(Nmr_SampledDataDim self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.isComplex

Defines whether the 
underlying data are complex, i.e. whether both real and imaginary values 
are stored.
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean value
**/
extern void *Nmr_SampledDataDim_SetIsComplex(Nmr_SampledDataDim self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.numPoints

Number of points. When 
isComplex is True, numPoints is the number of complex points (i.e. the 
number of time values for an FID), not the number of real numbers 
stored, so that 1024 complex points take up the same pace as 2048 real 
points. numPoints measures the size of the stored file, whether or not 
all storage slots contain meaningful data. For a SampledDataDim 
numPoints must be equal to the length of the pointValues array. For 
sparse sampling this described the grid sampled on, not the number of 
actual points.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
extern void *Nmr_SampledDataDim_SetNumPoints(Nmr_SampledDataDim self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
extern void *Nmr_SampledDataDim_SetPointErrors(Nmr_SampledDataDim self, ApiList values);

/**
  Set for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
extern void *Nmr_SampledDataDim_SetPointValues(Nmr_SampledDataDim self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.predictMethod

Linear prediction 
method.
  @param  Nmr_SampledDataDim self
  @param  Meth_Method value
**/
extern void *Nmr_SampledDataDim_SetPredictMethod(Nmr_SampledDataDim self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.shapeSerial

Serial number of 
corresponding DataSourceShape, if any. Note that several 
AbstractDataDims may correspond to the same DataSourceShape.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
extern void *Nmr_SampledDataDim_SetShapeSerial(Nmr_SampledDataDim self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.unit

unit for values on dimension 
axis. Typically seconds for a normal FID. For a frequency dimension unit 
is Herz, *not* ppm. Note that values in ppm (and equivalent) require 
referencing, and that referencing belongs to the DataDimRef, not to the 
DataDim.
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
extern void *Nmr_SampledDataDim_SetUnit(Nmr_SampledDataDim self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
extern ApiList Nmr_SampledDataDim_SortedDimensionScalings(Nmr_SampledDataDim self);

#endif /* __incl__ccp_api_nmr_Nmr_SampledDataDim_h__ */
