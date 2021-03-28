
#ifndef __incl__ccp_api_general_Annotation_MolFeature_h__
#define __incl__ccp_api_general_Annotation_MolFeature_h__

#include "ccp.h"

/*
  The feature is an annotation on a residue. The feature is a modification, a mutation,... made in comparison to the wild type sequence, or a simple comment for a particular residue.
*/

/* package ccp.api.general.Annotation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  Impl_ApplicationData value
**/
extern void *Anno_MolFeature_AddApplicationData(Anno_MolFeature self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean complete
**/
extern void *Anno_MolFeature_CheckAllValid(Anno_MolFeature self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean complete
**/
extern void *Anno_MolFeature_CheckValid(Anno_MolFeature self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anno_MolFeature_FindAllApplicationData(Anno_MolFeature self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anno_MolFeature_FindAllApplicationData_keyval0(Anno_MolFeature self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anno_MolFeature_FindAllApplicationData_keyval1(Anno_MolFeature self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anno_MolFeature_FindAllApplicationData_keyval2(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anno_MolFeature_FindAllApplicationData_keyval3(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
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
extern ApiList Anno_MolFeature_FindAllApplicationData_keyval4(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData(Anno_MolFeature self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval0(Anno_MolFeature self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval1(Anno_MolFeature self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval2(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval3(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
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
extern Impl_ApplicationData Anno_MolFeature_FindFirstApplicationData_keyval4(Anno_MolFeature self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anno_MolFeature_Get(Anno_MolFeature self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Acco_AccessObject Anno_MolFeature_GetAccess(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.annotationStore

parent link
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Anno_AnnotationStore Anno_MolFeature_GetAnnotationStore(Anno_MolFeature self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiList Anno_MolFeature_GetApplicationData(Anno_MolFeature self);

/**
  GetByKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anno_MolFeature Anno_MolFeature_GetByKey(Anno_MolFeature self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetClassName(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.details

Detail field for 
comments.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetDetails(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.featureType

The type of the 
feature. e.g. 'Selenomethionated', 'Oxidised', 'Reduced', 
'Phosphorylated', 'Methylated', 'Glycosylated', 'Ubiquitinated', 
'Hydroxyprolinated', 'Gammacarboxybutylated', 'Myristolated', 
'Sulfonated'.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetFeatureType(Anno_MolFeature self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiList Anno_MolFeature_GetFieldNames(Anno_MolFeature self);

/**
  GetFullKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anno_MolFeature_GetFullKey(Anno_MolFeature self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiBoolean Anno_MolFeature_GetInConstructor(Anno_MolFeature self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiBoolean Anno_MolFeature_GetIsDeleted(Anno_MolFeature self);

/**
  GetLocalKey for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @returns  Local object key
**/
extern ApiObject Anno_MolFeature_GetLocalKey(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.molResidue

The MolResidue who 
has the different features.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Mole_MolResidue Anno_MolFeature_GetMolResidue(Anno_MolFeature self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetPackageName(Anno_MolFeature self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetPackageShortName(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.parent

link to parent object 
- synonym for annotationStore
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Anno_AnnotationStore Anno_MolFeature_GetParent(Anno_MolFeature self);

/**
  getter for position attribute.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiInteger Anno_MolFeature_GetPosition(Anno_MolFeature self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiString Anno_MolFeature_GetQualifiedName(Anno_MolFeature self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Impl_MemopsRoot Anno_MolFeature_GetRoot(Anno_MolFeature self);

/**
  Get for ccp.general.Annotation.MolFeature.serial

Unique identifier.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern ApiInteger Anno_MolFeature_GetSerial(Anno_MolFeature self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anno_MolFeature self
  @returns   the result
**/
extern Impl_TopObject Anno_MolFeature_GetTopObject(Anno_MolFeature self);

/**
  Constructor for ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anno_MolFeature Anno_MolFeature_Init(Anno_AnnotationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore parent
  @param  char * featureType
  @param  Mole_MolResidue molResidue
  @returns  the new object
**/
extern Anno_MolFeature Anno_MolFeature_Init_reqd(Anno_AnnotationStore parent, char * featureType, Mole_MolResidue molResidue);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  Impl_ApplicationData value
**/
extern void *Anno_MolFeature_RemoveApplicationData(Anno_MolFeature self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.Annotation.MolFeature
  @param  Anno_MolFeature self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anno_MolFeature_Set(Anno_MolFeature self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_MolFeature self
  @param  Acco_AccessObject value
**/
extern void *Anno_MolFeature_SetAccess(Anno_MolFeature self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_MolFeature self
  @param  ApiList values
**/
extern void *Anno_MolFeature_SetApplicationData(Anno_MolFeature self, ApiList values);

/**
  Set for ccp.general.Annotation.MolFeature.details

Detail field for 
comments.
  @param  Anno_MolFeature self
  @param  ApiString value
**/
extern void *Anno_MolFeature_SetDetails(Anno_MolFeature self, ApiString value);

/**
  Set for ccp.general.Annotation.MolFeature.featureType

The type of the 
feature. e.g. 'Selenomethionated', 'Oxidised', 'Reduced', 
'Phosphorylated', 'Methylated', 'Glycosylated', 'Ubiquitinated', 
'Hydroxyprolinated', 'Gammacarboxybutylated', 'Myristolated', 
'Sulfonated'.
  @param  Anno_MolFeature self
  @param  ApiString value
**/
extern void *Anno_MolFeature_SetFeatureType(Anno_MolFeature self, ApiString value);

/**
  Set for ccp.general.Annotation.MolFeature.molResidue

The MolResidue who 
has the different features.
  @param  Anno_MolFeature self
  @param  Mole_MolResidue value
**/
extern void *Anno_MolFeature_SetMolResidue(Anno_MolFeature self, Mole_MolResidue value);

/**
  Set for ccp.general.Annotation.MolFeature.serial

Unique identifier.
  @param  Anno_MolFeature self
  @param  ApiInteger value
**/
extern void *Anno_MolFeature_SetSerial(Anno_MolFeature self, ApiInteger value);

#endif /* __incl__ccp_api_general_Annotation_MolFeature_h__ */
