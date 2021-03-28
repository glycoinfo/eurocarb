
#ifndef __incl__ccp_api_nmr_Nmr_PeakDimComponent_h__
#define __incl__ccp_api_nmr_Nmr_PeakDimComponent_h__

#include "ccp.h"

/*
  Additional assignment component of peak. In many cases (TROSY, reduced-dimensionality experiments, multiplet components), the position of a peak reflects the sum of more than one NMR parameter. In those cases the additional NMR parameters are assigned through PeakDimComponents. E.g. a DQF-COSY multiplet component would have a main contribution from the shift, and one or more PeakDimComponents for the various couplings that contribute to the peak position.
  
  NOTE: To calculate the value corresponding to the PeakDimComponent, you yourself must calculate xPoints, the (signed) number of points that are due to the PeakDimComponent. The desired value is then self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakDimComponent_AddApplicationData(Nmr_PeakDimComponent self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_AbstractPeakDimContrib value
**/
extern void *Nmr_PeakDimComponent_AddPeakDimContrib(Nmr_PeakDimComponent self, Nmr_AbstractPeakDimContrib value);

/**
  CheckAllValid for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakDimComponent_CheckAllValid(Nmr_PeakDimComponent self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakDimComponent_CheckValid(Nmr_PeakDimComponent self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData(Nmr_PeakDimComponent self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval0(Nmr_PeakDimComponent self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
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
extern ApiList Nmr_PeakDimComponent_FindAllApplicationData_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs(Nmr_PeakDimComponent self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval0(Nmr_PeakDimComponent self);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
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
extern ApiSet Nmr_PeakDimComponent_FindAllPeakDimContribs_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData(Nmr_PeakDimComponent self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval0(Nmr_PeakDimComponent self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
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
extern Impl_ApplicationData Nmr_PeakDimComponent_FindFirstApplicationData_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib(Nmr_PeakDimComponent self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval0(Nmr_PeakDimComponent self);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval1(Nmr_PeakDimComponent self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval2(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval3(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs attached 
to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
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
extern Nmr_AbstractPeakDimContrib Nmr_PeakDimComponent_FindFirstPeakDimContrib_keyval4(Nmr_PeakDimComponent self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_PeakDimComponent_Get(Nmr_PeakDimComponent self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Acco_AccessObject Nmr_PeakDimComponent_GetAccess(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.annotation

Descriptive text 
string, designed for annotation of Xpks on graphics displays. Long 
annotations should be avoided.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiString Nmr_PeakDimComponent_GetAnnotation(Nmr_PeakDimComponent self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiList Nmr_PeakDimComponent_GetApplicationData(Nmr_PeakDimComponent self);

/**
  GetByKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_PeakDimComponent Nmr_PeakDimComponent_GetByKey(Nmr_PeakDimComponent self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiString Nmr_PeakDimComponent_GetClassName(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.dataDimRef

DataDimRef that 
describes reference and measurement for PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Nmr_DataDimRef Nmr_PeakDimComponent_GetDataDimRef(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiList Nmr_PeakDimComponent_GetFieldNames(Nmr_PeakDimComponent self);

/**
  GetFullKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_PeakDimComponent_GetFullKey(Nmr_PeakDimComponent self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakDimComponent_GetInConstructor(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakDimComponent_GetIsDeleted(Nmr_PeakDimComponent self);

/**
  GetLocalKey for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @returns  Local object key
**/
extern ApiObject Nmr_PeakDimComponent_GetLocalKey(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiString Nmr_PeakDimComponent_GetPackageName(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiString Nmr_PeakDimComponent_GetPackageShortName(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.parent

link to parent object - 
synonym for peakDim
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Nmr_PeakDim Nmr_PeakDimComponent_GetParent(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.peakDim

parent link
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Nmr_PeakDim Nmr_PeakDimComponent_GetPeakDim(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiSet Nmr_PeakDimComponent_GetPeakDimContribs(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiString Nmr_PeakDimComponent_GetQualifiedName(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_PeakDimComponent_GetRoot(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.scalingFactor

Scaling factor for 
PeakDimComponent. Is multiplied by the value that comes out of the 
dataDimRef to get the actual contribution from this PeakDimComponent to 
the position of the peak. E.g.  a 1D NMR quartet would have 
scalingFactors -3, -1, 1, 3 on its four subpeaks. 

NOTE: To calculate 
the value corresponding to the PeakDimComponent, you yourself must 
calculate xPoints, the (signed) number of points that are due to the 
PeakDimComponent. The desired value is then 
self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiInteger Nmr_PeakDimComponent_GetScalingFactor(Nmr_PeakDimComponent self);

/**
  Get for ccp.nmr.Nmr.PeakDimComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiInteger Nmr_PeakDimComponent_GetSerial(Nmr_PeakDimComponent self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern Impl_TopObject Nmr_PeakDimComponent_GetTopObject(Nmr_PeakDimComponent self);

/**
  Constructor for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_PeakDimComponent Nmr_PeakDimComponent_Init(Nmr_PeakDim parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDim parent
  @returns  the new object
**/
extern Nmr_PeakDimComponent Nmr_PeakDimComponent_Init_reqd(Nmr_PeakDim parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakDimComponent_RemoveApplicationData(Nmr_PeakDimComponent self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_AbstractPeakDimContrib value
**/
extern void *Nmr_PeakDimComponent_RemovePeakDimContrib(Nmr_PeakDimComponent self, Nmr_AbstractPeakDimContrib value);

/**
  SetAttr for ccp.nmr.Nmr.PeakDimComponent
  @param  Nmr_PeakDimComponent self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_PeakDimComponent_Set(Nmr_PeakDimComponent self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimComponent self
  @param  Acco_AccessObject value
**/
extern void *Nmr_PeakDimComponent_SetAccess(Nmr_PeakDimComponent self, Acco_AccessObject value);

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.annotation

Descriptive text 
string, designed for annotation of Xpks on graphics displays. Long 
annotations should be avoided.
  @param  Nmr_PeakDimComponent self
  @param  ApiString value
**/
extern void *Nmr_PeakDimComponent_SetAnnotation(Nmr_PeakDimComponent self, ApiString value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimComponent self
  @param  ApiList values
**/
extern void *Nmr_PeakDimComponent_SetApplicationData(Nmr_PeakDimComponent self, ApiList values);

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.dataDimRef

DataDimRef that 
describes reference and measurement for PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  Nmr_DataDimRef value
**/
extern void *Nmr_PeakDimComponent_SetDataDimRef(Nmr_PeakDimComponent self, Nmr_DataDimRef value);

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @param  ApiSet values
**/
extern void *Nmr_PeakDimComponent_SetPeakDimContribs(Nmr_PeakDimComponent self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.scalingFactor

Scaling factor for 
PeakDimComponent. Is multiplied by the value that comes out of the 
dataDimRef to get the actual contribution from this PeakDimComponent to 
the position of the peak. E.g.  a 1D NMR quartet would have 
scalingFactors -3, -1, 1, 3 on its four subpeaks. 

NOTE: To calculate 
the value corresponding to the PeakDimComponent, you yourself must 
calculate xPoints, the (signed) number of points that are due to the 
PeakDimComponent. The desired value is then 
self.scalingFactor*self.dataDimRef.pointToValue(xPoints)
  @param  Nmr_PeakDimComponent self
  @param  ApiInteger value
**/
extern void *Nmr_PeakDimComponent_SetScalingFactor(Nmr_PeakDimComponent self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.PeakDimComponent.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_PeakDimComponent self
  @param  ApiInteger value
**/
extern void *Nmr_PeakDimComponent_SetSerial(Nmr_PeakDimComponent self, ApiInteger value);

/**
  Sorted for ccp.nmr.Nmr.PeakDimComponent.peakDimContribs

PeakDimContribs 
attached to this PeakDimComponent.
  @param  Nmr_PeakDimComponent self
  @returns   the result
**/
extern ApiList Nmr_PeakDimComponent_SortedPeakDimContribs(Nmr_PeakDimComponent self);

#endif /* __incl__ccp_api_nmr_Nmr_PeakDimComponent_h__ */
