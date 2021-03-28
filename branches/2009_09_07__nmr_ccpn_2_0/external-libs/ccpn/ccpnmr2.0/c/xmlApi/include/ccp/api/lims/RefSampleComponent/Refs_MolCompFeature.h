
#ifndef __incl__ccp_api_lims_RefSampleComponent_MolCompFeature_h__
#define __incl__ccp_api_lims_RefSampleComponent_MolCompFeature_h__

#include "ccp.h"

/*
  The MolCompFeature is used to assign information to each part of the MolComponent sequence, as defined by a series of MolResidues with consecutive serials.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  Impl_ApplicationData value
**/
extern void *Refs_MolCompFeature_AddApplicationData(Refs_MolCompFeature self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean complete
**/
extern void *Refs_MolCompFeature_CheckAllValid(Refs_MolCompFeature self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean complete
**/
extern void *Refs_MolCompFeature_CheckValid(Refs_MolCompFeature self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolCompFeature_FindAllApplicationData(Refs_MolCompFeature self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolCompFeature_FindAllApplicationData_keyval0(Refs_MolCompFeature self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolCompFeature_FindAllApplicationData_keyval1(Refs_MolCompFeature self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolCompFeature_FindAllApplicationData_keyval2(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_MolCompFeature_FindAllApplicationData_keyval3(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
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
extern ApiList Refs_MolCompFeature_FindAllApplicationData_keyval4(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData(Refs_MolCompFeature self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval0(Refs_MolCompFeature self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval1(Refs_MolCompFeature self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval2(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval3(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
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
extern Impl_ApplicationData Refs_MolCompFeature_FindFirstApplicationData_keyval4(Refs_MolCompFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_MolCompFeature_Get(Refs_MolCompFeature self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Acco_AccessObject Refs_MolCompFeature_GetAccess(Refs_MolCompFeature self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiList Refs_MolCompFeature_GetApplicationData(Refs_MolCompFeature self);

/**
  GetByKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_MolCompFeature Refs_MolCompFeature_GetByKey(Refs_MolCompFeature self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetClassName(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.details

Detail field 
for comments.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetDetails(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.endSeqId

Residue 
number (MolResidue.serial) of the end sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiInteger Refs_MolCompFeature_GetEndSeqId(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.featureType

The type 
of the feature e.g. 'tag', 'cleavage site', 'promoter', 'resistance', 
'marker', 'product',...
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetFeatureType(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiList Refs_MolCompFeature_GetFieldNames(Refs_MolCompFeature self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_MolCompFeature_GetFullKey(Refs_MolCompFeature self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiBoolean Refs_MolCompFeature_GetInConstructor(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiBoolean Refs_MolCompFeature_GetIsDeleted(Refs_MolCompFeature self);

/**
  Getter for derived attribute length.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiInteger Refs_MolCompFeature_GetLength(Refs_MolCompFeature self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @returns  Local object key
**/
extern ApiObject Refs_MolCompFeature_GetLocalKey(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.molComponent

parent 
link
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Refs_MolComponent Refs_MolCompFeature_GetMolComponent(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.name

The name of the 
feature.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetName(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.ordering

Integer 
defining the ordering of MolCompFeatures. For when startSeqId and 
endSeqId are not known.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiInteger Refs_MolCompFeature_GetOrdering(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetPackageName(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetPackageShortName(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.parent

link to 
parent object - synonym for molComponent
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Refs_MolComponent Refs_MolCompFeature_GetParent(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetQualifiedName(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.refMolComponent
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Refs_MolComponent Refs_MolCompFeature_GetRefMolComponent(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_MolCompFeature_GetRoot(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiInteger Refs_MolCompFeature_GetSerial(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.startSeqId

Residue 
number (MolResidue.serial) of the start sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiInteger Refs_MolCompFeature_GetStartSeqId(Refs_MolCompFeature self);

/**
  Get for ccp.lims.RefSampleComponent.MolCompFeature.status

The status of 
the feature e.g. cut, uncut,...
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern ApiString Refs_MolCompFeature_GetStatus(Refs_MolCompFeature self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_MolCompFeature self
  @returns   the result
**/
extern Impl_TopObject Refs_MolCompFeature_GetTopObject(Refs_MolCompFeature self);

/**
  Constructor for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_MolCompFeature Refs_MolCompFeature_Init(Refs_MolComponent parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolComponent parent
  @param  char * featureType
  @param  char * name
  @returns  the new object
**/
extern Refs_MolCompFeature Refs_MolCompFeature_Init_reqd(Refs_MolComponent parent, char * featureType, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  Impl_ApplicationData value
**/
extern void *Refs_MolCompFeature_RemoveApplicationData(Refs_MolCompFeature self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.RefSampleComponent.MolCompFeature
  @param  Refs_MolCompFeature self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_MolCompFeature_Set(Refs_MolCompFeature self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_MolCompFeature self
  @param  Acco_AccessObject value
**/
extern void *Refs_MolCompFeature_SetAccess(Refs_MolCompFeature self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_MolCompFeature self
  @param  ApiList values
**/
extern void *Refs_MolCompFeature_SetApplicationData(Refs_MolCompFeature self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.details

Detail field 
for comments.
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
extern void *Refs_MolCompFeature_SetDetails(Refs_MolCompFeature self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.endSeqId

Residue 
number (MolResidue.serial) of the end sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
extern void *Refs_MolCompFeature_SetEndSeqId(Refs_MolCompFeature self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.featureType

The type 
of the feature e.g. 'tag', 'cleavage site', 'promoter', 'resistance', 
'marker', 'product',...
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
extern void *Refs_MolCompFeature_SetFeatureType(Refs_MolCompFeature self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.name

The name of the 
feature.
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
extern void *Refs_MolCompFeature_SetName(Refs_MolCompFeature self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.ordering

Integer 
defining the ordering of MolCompFeatures. For when startSeqId and 
endSeqId are not known.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
extern void *Refs_MolCompFeature_SetOrdering(Refs_MolCompFeature self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.refMolComponent
  @param  Refs_MolCompFeature self
  @param  Refs_MolComponent value
**/
extern void *Refs_MolCompFeature_SetRefMolComponent(Refs_MolCompFeature self, Refs_MolComponent value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
extern void *Refs_MolCompFeature_SetSerial(Refs_MolCompFeature self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.startSeqId

Residue 
number (MolResidue.serial) of the start sequence in the MolComponent.
  @param  Refs_MolCompFeature self
  @param  ApiInteger value
**/
extern void *Refs_MolCompFeature_SetStartSeqId(Refs_MolCompFeature self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.MolCompFeature.status

The status of 
the feature e.g. cut, uncut,...
  @param  Refs_MolCompFeature self
  @param  ApiString value
**/
extern void *Refs_MolCompFeature_SetStatus(Refs_MolCompFeature self, ApiString value);

#endif /* __incl__ccp_api_lims_RefSampleComponent_MolCompFeature_h__ */
