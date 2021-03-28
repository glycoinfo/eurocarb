
#ifndef __incl__ccp_api_nmr_Nmr_PeakContrib_h__
#define __incl__ccp_api_nmr_Nmr_PeakContrib_h__

#include "ccp.h"

/*
  Crosspeak contribution.  PeakContribs serve two slightly different purposes. They describe a Peak as a sum of different contributions (e.g. ovelapped peaks), whose relative values is determined by their relative weights. They also serve simply as a way of describing mutually exclusive sets of assignment possibilities, without any implication about the peak arising from multiple contributions. The two aspects are almost identical in practice. If all PeakContrib weights are 0.0, as is the default, it can be assumed that the Contribs are only describing assignment possibilities.
  
  Each PeakContrib may have any number (including zero) peakDimContrib for every dim. The set of possible complete assignments for a PeakContrib is found as follows:
  For each dimension all PeakDimContribs belonging to the dimension are potential assignments. If there are say 3, 2, and 5 possibilities in the three dimensions (of a 3D peak) there will be a total of 3*2*5=30 possible assignment states belonging to the PeakContrib. If there are no possibilities for one dimension (say 3, 0, and 5 for the three dimensions), there will be 3*5=15 alternative (partial) assignment states. 
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakContrib_AddApplicationData(Nmr_PeakContrib self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  Nmr_AbstractPeakDimContrib value
**/
extern void *Nmr_PeakContrib_AddPeakDimContrib(Nmr_PeakContrib self, Nmr_AbstractPeakDimContrib value);

/**
  CheckAllValid for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakContrib_CheckAllValid(Nmr_PeakContrib self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakContrib_CheckValid(Nmr_PeakContrib self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakContrib_FindAllApplicationData(Nmr_PeakContrib self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakContrib_FindAllApplicationData_keyval0(Nmr_PeakContrib self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakContrib_FindAllApplicationData_keyval1(Nmr_PeakContrib self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakContrib_FindAllApplicationData_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakContrib_FindAllApplicationData_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
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
extern ApiList Nmr_PeakContrib_FindAllApplicationData_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs(Nmr_PeakContrib self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval0(Nmr_PeakContrib self);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval1(Nmr_PeakContrib self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
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
extern ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData(Nmr_PeakContrib self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval0(Nmr_PeakContrib self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval1(Nmr_PeakContrib self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
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
extern Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib(Nmr_PeakContrib self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval0(Nmr_PeakContrib self);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval1(Nmr_PeakContrib self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
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
extern Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_PeakContrib_Get(Nmr_PeakContrib self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern Acco_AccessObject Nmr_PeakContrib_GetAccess(Nmr_PeakContrib self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakContrib_GetApplicationData(Nmr_PeakContrib self);

/**
  GetByKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_PeakContrib Nmr_PeakContrib_GetByKey(Nmr_PeakContrib self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakContrib_GetClassName(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakContrib_GetFieldNames(Nmr_PeakContrib self);

/**
  GetFullKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_PeakContrib_GetFullKey(Nmr_PeakContrib self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakContrib_GetInConstructor(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakContrib_GetIsDeleted(Nmr_PeakContrib self);

/**
  GetLocalKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @returns  Local object key
**/
extern ApiObject Nmr_PeakContrib_GetLocalKey(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakContrib_GetPackageName(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakContrib_GetPackageShortName(Nmr_PeakContrib self);

/**
  Get for ccp.nmr.Nmr.PeakContrib.parent

link to parent object - synonym 
for peak
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern Nmr_Peak Nmr_PeakContrib_GetParent(Nmr_PeakContrib self);

/**
  Get for ccp.nmr.Nmr.PeakContrib.peak

parent link
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern Nmr_Peak Nmr_PeakContrib_GetPeak(Nmr_PeakContrib self);

/**
  Get for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiSet Nmr_PeakContrib_GetPeakDimContribs(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakContrib_GetQualifiedName(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_PeakContrib_GetRoot(Nmr_PeakContrib self);

/**
  Get for ccp.nmr.Nmr.PeakContrib.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiInteger Nmr_PeakContrib_GetSerial(Nmr_PeakContrib self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern Impl_TopObject Nmr_PeakContrib_GetTopObject(Nmr_PeakContrib self);

/**
  Get for ccp.nmr.Nmr.PeakContrib.weight

Weight (relative probability or 
relative contribution) of PeakContrib for a given Peak. If the division 
in PeakContribs is not significant, but simply a way of describing 
alternative assignments, all weights may be set to zero.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiFloat Nmr_PeakContrib_GetWeight(Nmr_PeakContrib self);

/**
  Constructor for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_PeakContrib Nmr_PeakContrib_Init(Nmr_Peak parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak parent
  @returns  the new object
**/
extern Nmr_PeakContrib Nmr_PeakContrib_Init_reqd(Nmr_Peak parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakContrib_RemoveApplicationData(Nmr_PeakContrib self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  Nmr_AbstractPeakDimContrib value
**/
extern void *Nmr_PeakContrib_RemovePeakDimContrib(Nmr_PeakContrib self, Nmr_AbstractPeakDimContrib value);

/**
  SetAttr for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_PeakContrib_Set(Nmr_PeakContrib self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakContrib self
  @param  Acco_AccessObject value
**/
extern void *Nmr_PeakContrib_SetAccess(Nmr_PeakContrib self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  ApiList values
**/
extern void *Nmr_PeakContrib_SetApplicationData(Nmr_PeakContrib self, ApiList values);

/**
  Set for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiSet values
**/
extern void *Nmr_PeakContrib_SetPeakDimContribs(Nmr_PeakContrib self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.PeakContrib.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakContrib self
  @param  ApiInteger value
**/
extern void *Nmr_PeakContrib_SetSerial(Nmr_PeakContrib self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.PeakContrib.weight

Weight (relative probability or 
relative contribution) of PeakContrib for a given Peak. If the division 
in PeakContribs is not significant, but simply a way of describing 
alternative assignments, all weights may be set to zero.
  @param  Nmr_PeakContrib self
  @param  ApiFloat value
**/
extern void *Nmr_PeakContrib_SetWeight(Nmr_PeakContrib self, ApiFloat value);

/**
  Sorted for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakContrib_SortedPeakDimContribs(Nmr_PeakContrib self);

#endif /* __incl__ccp_api_nmr_Nmr_PeakContrib_h__ */
