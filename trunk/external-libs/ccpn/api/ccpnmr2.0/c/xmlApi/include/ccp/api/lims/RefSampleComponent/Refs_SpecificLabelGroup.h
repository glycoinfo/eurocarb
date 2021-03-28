
#ifndef __incl__ccp_api_lims_RefSampleComponent_SpecificLabelGroup_h__
#define __incl__ccp_api_lims_RefSampleComponent_SpecificLabelGroup_h__

#include "ccp.h"

/*
  Group of specific isotope labels that apply together to an individual molecule. Molecules that are mixtures of isotopomers may have several SpecificLabelGroups. Isotope labeling given in SpecificLabelGroup and IsotopeLabel must be consistent with labeling given in the Label class, as both are valid together.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  Impl_ApplicationData value
**/
extern void *Refs_SpecificLabelGroup_AddApplicationData(Refs_SpecificLabelGroup self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean complete
**/
extern void *Refs_SpecificLabelGroup_CheckAllValid(Refs_SpecificLabelGroup self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean complete
**/
extern void *Refs_SpecificLabelGroup_CheckValid(Refs_SpecificLabelGroup self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData(Refs_SpecificLabelGroup self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval0(Refs_SpecificLabelGroup self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
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
extern ApiList Refs_SpecificLabelGroup_FindAllApplicationData_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels(Refs_SpecificLabelGroup self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval0(Refs_SpecificLabelGroup self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
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
extern ApiSet Refs_SpecificLabelGroup_FindAllIsotopeLabels_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData(Refs_SpecificLabelGroup self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval0(Refs_SpecificLabelGroup self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
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
extern Impl_ApplicationData Refs_SpecificLabelGroup_FindFirstApplicationData_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel(Refs_SpecificLabelGroup self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval0(Refs_SpecificLabelGroup self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval1(Refs_SpecificLabelGroup self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval2(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval3(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
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
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_FindFirstIsotopeLabel_keyval4(Refs_SpecificLabelGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_SpecificLabelGroup_Get(Refs_SpecificLabelGroup self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern Acco_AccessObject Refs_SpecificLabelGroup_GetAccess(Refs_SpecificLabelGroup self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiList Refs_SpecificLabelGroup_GetApplicationData(Refs_SpecificLabelGroup self);

/**
  GetByKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_SpecificLabelGroup Refs_SpecificLabelGroup_GetByKey(Refs_SpecificLabelGroup self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiString Refs_SpecificLabelGroup_GetClassName(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiList Refs_SpecificLabelGroup_GetFieldNames(Refs_SpecificLabelGroup self);

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.fraction

Fraction of the 
molecules that are labeled with the labeing pattern defined by the 
SpecificLabelGroup. If the fraction attributes of the various 
specificLabelGroups do not add up to 100%, the remainder of the 
molecules in the group are assumed to be at natural abundance.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiFloat Refs_SpecificLabelGroup_GetFraction(Refs_SpecificLabelGroup self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_SpecificLabelGroup_GetFullKey(Refs_SpecificLabelGroup self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiBoolean Refs_SpecificLabelGroup_GetInConstructor(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiBoolean Refs_SpecificLabelGroup_GetIsDeleted(Refs_SpecificLabelGroup self);

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiSet Refs_SpecificLabelGroup_GetIsotopeLabels(Refs_SpecificLabelGroup self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @returns  Local object key
**/
extern ApiObject Refs_SpecificLabelGroup_GetLocalKey(Refs_SpecificLabelGroup self);

/**
  Get for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.molComponent

parent link
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern Refs_MolComponent Refs_SpecificLabelGroup_GetMolComponent(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiString Refs_SpecificLabelGroup_GetPackageName(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiString Refs_SpecificLabelGroup_GetPackageShortName(Refs_SpecificLabelGroup self);

/**
  Get for ccp.lims.RefSampleComponent.SpecificLabelGroup.parent

link to 
parent object - synonym for molComponent
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern Refs_MolComponent Refs_SpecificLabelGroup_GetParent(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiString Refs_SpecificLabelGroup_GetQualifiedName(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_SpecificLabelGroup_GetRoot(Refs_SpecificLabelGroup self);

/**
  Get for ccp.lims.RefSampleComponent.SpecificLabelGroup.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiInteger Refs_SpecificLabelGroup_GetSerial(Refs_SpecificLabelGroup self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern Impl_TopObject Refs_SpecificLabelGroup_GetTopObject(Refs_SpecificLabelGroup self);

/**
  Constructor for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_SpecificLabelGroup Refs_SpecificLabelGroup_Init(Refs_MolComponent parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_MolComponent parent
  @returns  the new object
**/
extern Refs_SpecificLabelGroup Refs_SpecificLabelGroup_Init_reqd(Refs_MolComponent parent);

/**
  Factory function to create ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_NewIsotopeLabel(Refs_SpecificLabelGroup self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.RefSampleComponent.IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @param  char * elementSymbol
  @param  ApiInteger massNumber
  @returns  the new object
**/
extern Refs_IsotopeLabel Refs_SpecificLabelGroup_NewIsotopeLabel_reqd(Refs_SpecificLabelGroup self, char * elementSymbol, ApiInteger massNumber);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  Impl_ApplicationData value
**/
extern void *Refs_SpecificLabelGroup_RemoveApplicationData(Refs_SpecificLabelGroup self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.RefSampleComponent.SpecificLabelGroup
  @param  Refs_SpecificLabelGroup self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_SpecificLabelGroup_Set(Refs_SpecificLabelGroup self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_SpecificLabelGroup self
  @param  Acco_AccessObject value
**/
extern void *Refs_SpecificLabelGroup_SetAccess(Refs_SpecificLabelGroup self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_SpecificLabelGroup self
  @param  ApiList values
**/
extern void *Refs_SpecificLabelGroup_SetApplicationData(Refs_SpecificLabelGroup self, ApiList values);

/**
  Set for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.fraction

Fraction of the 
molecules that are labeled with the labeing pattern defined by the 
SpecificLabelGroup. If the fraction attributes of the various 
specificLabelGroups do not add up to 100%, the remainder of the 
molecules in the group are assumed to be at natural abundance.
  @param  Refs_SpecificLabelGroup self
  @param  ApiFloat value
**/
extern void *Refs_SpecificLabelGroup_SetFraction(Refs_SpecificLabelGroup self, ApiFloat value);

/**
  Set for ccp.lims.RefSampleComponent.SpecificLabelGroup.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Refs_SpecificLabelGroup self
  @param  ApiInteger value
**/
extern void *Refs_SpecificLabelGroup_SetSerial(Refs_SpecificLabelGroup self, ApiInteger value);

/**
  Sorted for 
ccp.lims.RefSampleComponent.SpecificLabelGroup.isotopeLabels

child link 
to class IsotopeLabel
  @param  Refs_SpecificLabelGroup self
  @returns   the result
**/
extern ApiList Refs_SpecificLabelGroup_SortedIsotopeLabels(Refs_SpecificLabelGroup self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_SpecificLabelGroup_h__ */
