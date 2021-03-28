
#ifndef __incl__ccp_api_nmr_Nmr_PeakDimContrib_h__
#define __incl__ccp_api_nmr_Nmr_PeakDimContrib_h__

#include "ccp.h"

/*
  PeakDimContrib for parameters assigned to a single Resonance (the normal case).
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakDimContrib_AddApplicationData(Nmr_PeakDimContrib self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  Nmr_PeakContrib value
**/
extern void *Nmr_PeakDimContrib_AddPeakContrib(Nmr_PeakDimContrib self, Nmr_PeakContrib value);

/**
  CheckAllValid for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakDimContrib_CheckAllValid(Nmr_PeakDimContrib self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakDimContrib_CheckValid(Nmr_PeakDimContrib self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData(Nmr_PeakDimContrib self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData_keyval0(Nmr_PeakDimContrib self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData_keyval1(Nmr_PeakDimContrib self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData_keyval2(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData_keyval3(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
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
extern ApiList Nmr_PeakDimContrib_FindAllApplicationData_keyval4(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs(Nmr_PeakDimContrib self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs_keyval0(Nmr_PeakDimContrib self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs_keyval1(Nmr_PeakDimContrib self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs_keyval2(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs_keyval3(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
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
extern ApiSet Nmr_PeakDimContrib_FindAllPeakContribs_keyval4(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData(Nmr_PeakDimContrib self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData_keyval0(Nmr_PeakDimContrib self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData_keyval1(Nmr_PeakDimContrib self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData_keyval2(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData_keyval3(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
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
extern Impl_ApplicationData Nmr_PeakDimContrib_FindFirstApplicationData_keyval4(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib(Nmr_PeakDimContrib self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib_keyval0(Nmr_PeakDimContrib self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib_keyval1(Nmr_PeakDimContrib self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib_keyval2(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib_keyval3(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
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
extern Nmr_PeakContrib Nmr_PeakDimContrib_FindFirstPeakContrib_keyval4(Nmr_PeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_PeakDimContrib_Get(Nmr_PeakDimContrib self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Acco_AccessObject Nmr_PeakDimContrib_GetAccess(Nmr_PeakDimContrib self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakDimContrib_GetApplicationData(Nmr_PeakDimContrib self);

/**
  GetByKey for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_PeakDimContrib Nmr_PeakDimContrib_GetByKey(Nmr_PeakDimContrib self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakDimContrib_GetClassName(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.dim

Dimension number of 
PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiInteger Nmr_PeakDimContrib_GetDim(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakDimContrib_GetFieldNames(Nmr_PeakDimContrib self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakDimContrib_GetInConstructor(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakDimContrib_GetIsDeleted(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakDimContrib_GetPackageName(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakDimContrib_GetPackageShortName(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.parent

link to parent object 
- synonym for peakDim
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Nmr_PeakDim Nmr_PeakDimContrib_GetParent(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiSet Nmr_PeakDimContrib_GetPeakContribs(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.peakDim

parent link
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Nmr_PeakDim Nmr_PeakDimContrib_GetPeakDim(Nmr_PeakDimContrib self);

/**
  Get for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakDimComponent

PeakDimComponent to 
which this AbstractPeakDimContrib is attached. if it is attached to 
none, it belongs instead to teh main assignment component of the peak.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Nmr_PeakDimComponent Nmr_PeakDimContrib_GetPeakDimComponent(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiString Nmr_PeakDimContrib_GetQualifiedName(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.PeakDimContrib.resonance

Resonance assigned to 
PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Nmr_Resonance Nmr_PeakDimContrib_GetResonance(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_PeakDimContrib_GetRoot(Nmr_PeakDimContrib self);

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiInteger Nmr_PeakDimContrib_GetSerial(Nmr_PeakDimContrib self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern Impl_TopObject Nmr_PeakDimContrib_GetTopObject(Nmr_PeakDimContrib self);

/**
  Constructor for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_PeakDimContrib Nmr_PeakDimContrib_Init(Nmr_PeakDim parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDim parent
  @param  ApiSet peakContribs
  @param  Nmr_Resonance resonance
  @returns  the new object
**/
extern Nmr_PeakDimContrib Nmr_PeakDimContrib_Init_reqd(Nmr_PeakDim parent, ApiSet peakContribs, Nmr_Resonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakDimContrib_RemoveApplicationData(Nmr_PeakDimContrib self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  Nmr_PeakContrib value
**/
extern void *Nmr_PeakDimContrib_RemovePeakContrib(Nmr_PeakDimContrib self, Nmr_PeakContrib value);

/**
  SetAttr for ccp.nmr.Nmr.PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_PeakDimContrib_Set(Nmr_PeakDimContrib self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimContrib self
  @param  Acco_AccessObject value
**/
extern void *Nmr_PeakDimContrib_SetAccess(Nmr_PeakDimContrib self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContrib self
  @param  ApiList values
**/
extern void *Nmr_PeakDimContrib_SetApplicationData(Nmr_PeakDimContrib self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @param  ApiSet values
**/
extern void *Nmr_PeakDimContrib_SetPeakContribs(Nmr_PeakDimContrib self, ApiSet values);

/**
  Set for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakDimComponent

PeakDimComponent to 
which this AbstractPeakDimContrib is attached. if it is attached to 
none, it belongs instead to teh main assignment component of the peak.
  @param  Nmr_PeakDimContrib self
  @param  Nmr_PeakDimComponent value
**/
extern void *Nmr_PeakDimContrib_SetPeakDimComponent(Nmr_PeakDimContrib self, Nmr_PeakDimComponent value);

/**
  Set for ccp.nmr.Nmr.PeakDimContrib.resonance

Resonance assigned to 
PeakDimContrib
  @param  Nmr_PeakDimContrib self
  @param  Nmr_Resonance value
**/
extern void *Nmr_PeakDimContrib_SetResonance(Nmr_PeakDimContrib self, Nmr_Resonance value);

/**
  Set for ccp.nmr.Nmr.AbstractPeakDimContrib.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_PeakDimContrib self
  @param  ApiInteger value
**/
extern void *Nmr_PeakDimContrib_SetSerial(Nmr_PeakDimContrib self, ApiInteger value);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContrib self
  @returns   the result
**/
extern ApiList Nmr_PeakDimContrib_SortedPeakContribs(Nmr_PeakDimContrib self);

#endif /* __incl__ccp_api_nmr_Nmr_PeakDimContrib_h__ */
