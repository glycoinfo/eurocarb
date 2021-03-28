
#ifndef __incl__molsim_api_Symmetry_Symmetry_h__
#define __incl__molsim_api_Symmetry_Symmetry_h__

#include "ccp.h"

/*
  Single symmetry that applies to MolSystem.Each Symmetry describes a set of chani segents that are symmetric under some symmetry operation, such as C2 or C3. You would need several Symmetry objects to describe a Symmetry group such as C3v, or even to describe a simple C2 symmetry of a multichain MolSystem.
*/

/* package molsim.api.Symmetry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  Impl_ApplicationData value
**/
extern void *Symm_Symmetry_AddApplicationData(Symm_Symmetry self, Impl_ApplicationData value);

/**
  CheckAllValid for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean complete
**/
extern void *Symm_Symmetry_CheckAllValid(Symm_Symmetry self, ApiBoolean complete);

/**
  CheckValid for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean complete
**/
extern void *Symm_Symmetry_CheckValid(Symm_Symmetry self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Symmetry_FindAllApplicationData(Symm_Symmetry self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Symmetry_FindAllApplicationData_keyval0(Symm_Symmetry self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Symmetry_FindAllApplicationData_keyval1(Symm_Symmetry self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Symmetry_FindAllApplicationData_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Symm_Symmetry_FindAllApplicationData_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
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
extern ApiList Symm_Symmetry_FindAllApplicationData_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Symm_Symmetry_FindAllSegments(Symm_Symmetry self, ApiMap conditions);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Symm_Symmetry_FindAllSegments_keyval0(Symm_Symmetry self);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Symm_Symmetry_FindAllSegments_keyval1(Symm_Symmetry self, char * key, ApiObject value);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Symm_Symmetry_FindAllSegments_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Symm_Symmetry_FindAllSegments_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
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
extern ApiSet Symm_Symmetry_FindAllSegments_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData(Symm_Symmetry self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval0(Symm_Symmetry self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval1(Symm_Symmetry self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
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
extern Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Symm_Segment Symm_Symmetry_FindFirstSegment(Symm_Symmetry self, ApiMap conditions);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns  the first value that satisfies the conditions 
**/
extern Symm_Segment Symm_Symmetry_FindFirstSegment_keyval0(Symm_Symmetry self);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Symm_Segment Symm_Symmetry_FindFirstSegment_keyval1(Symm_Symmetry self, char * key, ApiObject value);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Symm_Segment Symm_Symmetry_FindFirstSegment_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Symm_Segment Symm_Symmetry_FindFirstSegment_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
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
extern Symm_Segment Symm_Symmetry_FindFirstSegment_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Symm_Symmetry_Get(Symm_Symmetry self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Symmetry self
  @returns   the result
**/
extern Acco_AccessObject Symm_Symmetry_GetAccess(Symm_Symmetry self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiList Symm_Symmetry_GetApplicationData(Symm_Symmetry self);

/**
  GetByKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Symm_Symmetry Symm_Symmetry_GetByKey(Symm_Symmetry self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiString Symm_Symmetry_GetClassName(Symm_Symmetry self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiList Symm_Symmetry_GetFieldNames(Symm_Symmetry self);

/**
  GetFullKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Symm_Symmetry_GetFullKey(Symm_Symmetry self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiBoolean Symm_Symmetry_GetInConstructor(Symm_Symmetry self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiBoolean Symm_Symmetry_GetIsDeleted(Symm_Symmetry self);

/**
  GetLocalKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @returns  Local object key
**/
extern ApiObject Symm_Symmetry_GetLocalKey(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.molSystemSymmetrySet

parent link
  @param  Symm_Symmetry self
  @returns   the result
**/
extern Symm_MolSystemSymmetrySet Symm_Symmetry_GetMolSystemSymmetrySet(Symm_Symmetry self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiString Symm_Symmetry_GetPackageName(Symm_Symmetry self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiString Symm_Symmetry_GetPackageShortName(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.parent

link to parent object - synonym 
for molSystemSymmetrySet
  @param  Symm_Symmetry self
  @returns   the result
**/
extern Symm_MolSystemSymmetrySet Symm_Symmetry_GetParent(Symm_Symmetry self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiString Symm_Symmetry_GetQualifiedName(Symm_Symmetry self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern Impl_MemopsRoot Symm_Symmetry_GetRoot(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.segmentLength

Length of segments that 
are symmetrical
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiInteger Symm_Symmetry_GetSegmentLength(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.segments

child link to class Segment
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiSet Symm_Symmetry_GetSegments(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiInteger Symm_Symmetry_GetSerial(Symm_Symmetry self);

/**
  Get for molsim.Symmetry.Symmetry.symmetryCode
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiString Symm_Symmetry_GetSymmetryCode(Symm_Symmetry self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Symm_Symmetry self
  @returns   the result
**/
extern Impl_TopObject Symm_Symmetry_GetTopObject(Symm_Symmetry self);

/**
  Constructor for molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Symm_Symmetry Symm_Symmetry_Init(Symm_MolSystemSymmetrySet parent, ApiMap attrlinks);

/**
  Constructor for molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet parent
  @returns  the new object
**/
extern Symm_Symmetry Symm_Symmetry_Init_reqd(Symm_MolSystemSymmetrySet parent);

/**
  Factory function to create molsim.Symmetry.Segment
  @param  Symm_Symmetry self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Symm_Segment Symm_Symmetry_NewSegment(Symm_Symmetry self, ApiMap attrlinks);

/**
  Factory function to create molsim.Symmetry.Segment
  @param  Symm_Symmetry self
  @param  char * chainCode
  @param  ApiInteger firstSeqId
  @returns  the new object
**/
extern Symm_Segment Symm_Symmetry_NewSegment_reqd(Symm_Symmetry self, char * chainCode, ApiInteger firstSeqId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  Impl_ApplicationData value
**/
extern void *Symm_Symmetry_RemoveApplicationData(Symm_Symmetry self, Impl_ApplicationData value);

/**
  SetAttr for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Symm_Symmetry_Set(Symm_Symmetry self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Symmetry self
  @param  Acco_AccessObject value
**/
extern void *Symm_Symmetry_SetAccess(Symm_Symmetry self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  ApiList values
**/
extern void *Symm_Symmetry_SetApplicationData(Symm_Symmetry self, ApiList values);

/**
  Set for molsim.Symmetry.Symmetry.segmentLength

Length of segments that 
are symmetrical
  @param  Symm_Symmetry self
  @param  ApiInteger value
**/
extern void *Symm_Symmetry_SetSegmentLength(Symm_Symmetry self, ApiInteger value);

/**
  Set for molsim.Symmetry.Symmetry.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Symm_Symmetry self
  @param  ApiInteger value
**/
extern void *Symm_Symmetry_SetSerial(Symm_Symmetry self, ApiInteger value);

/**
  Set for molsim.Symmetry.Symmetry.symmetryCode
  @param  Symm_Symmetry self
  @param  ApiString value
**/
extern void *Symm_Symmetry_SetSymmetryCode(Symm_Symmetry self, ApiString value);

/**
  Sorted for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns   the result
**/
extern ApiList Symm_Symmetry_SortedSegments(Symm_Symmetry self);

#endif /* __incl__molsim_api_Symmetry_Symmetry_h__ */
