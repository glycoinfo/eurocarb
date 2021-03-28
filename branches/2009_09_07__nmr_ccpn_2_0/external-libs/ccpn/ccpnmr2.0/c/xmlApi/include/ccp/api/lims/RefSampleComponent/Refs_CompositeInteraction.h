
#ifndef __incl__ccp_api_lims_RefSampleComponent_CompositeInteraction_h__
#define __incl__ccp_api_lims_RefSampleComponent_CompositeInteraction_h__

#include "ccp.h"

/*
  The interaction between two composite elements.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  Impl_ApplicationData value
**/
extern void *Refs_CompositeInteraction_AddApplicationData(Refs_CompositeInteraction self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean complete
**/
extern void *Refs_CompositeInteraction_CheckAllValid(Refs_CompositeInteraction self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean complete
**/
extern void *Refs_CompositeInteraction_CheckValid(Refs_CompositeInteraction self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeInteraction_FindAllApplicationData(Refs_CompositeInteraction self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval0(Refs_CompositeInteraction self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
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
extern ApiList Refs_CompositeInteraction_FindAllApplicationData_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeInteraction_FindAllElements(Refs_CompositeInteraction self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeInteraction_FindAllElements_keyval0(Refs_CompositeInteraction self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeInteraction_FindAllElements_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeInteraction_FindAllElements_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeInteraction_FindAllElements_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
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
extern ApiSet Refs_CompositeInteraction_FindAllElements_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData(Refs_CompositeInteraction self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval0(Refs_CompositeInteraction self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
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
extern Impl_ApplicationData Refs_CompositeInteraction_FindFirstApplicationData_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement(Refs_CompositeInteraction self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval0(Refs_CompositeInteraction self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval1(Refs_CompositeInteraction self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval2(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval3(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
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
extern Refs_CompositeElement Refs_CompositeInteraction_FindFirstElement_keyval4(Refs_CompositeInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_CompositeInteraction_Get(Refs_CompositeInteraction self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern Acco_AccessObject Refs_CompositeInteraction_GetAccess(Refs_CompositeInteraction self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.affinity

The 
dissociation constant K of the complex, in units of M (moles/liter) to 
the appropriate power, according to the formula 
K=[A][B][C]/[ABC] 
Here 
in units of M-squared (for a ternary complex).
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiFloat Refs_CompositeInteraction_GetAffinity(Refs_CompositeInteraction self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiList Refs_CompositeInteraction_GetApplicationData(Refs_CompositeInteraction self);

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.assessmentMethod

The 
assessment method used to define this interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetAssessmentMethod(Refs_CompositeInteraction self);

/**
  GetByKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_CompositeInteraction Refs_CompositeInteraction_GetByKey(Refs_CompositeInteraction self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetClassName(Refs_CompositeInteraction self);

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.composite

parent link
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern Refs_Composite Refs_CompositeInteraction_GetComposite(Refs_CompositeInteraction self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.details

Detail 
field for comments.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetDetails(Refs_CompositeInteraction self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiSet Refs_CompositeInteraction_GetElements(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiList Refs_CompositeInteraction_GetFieldNames(Refs_CompositeInteraction self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_CompositeInteraction_GetFullKey(Refs_CompositeInteraction self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiBoolean Refs_CompositeInteraction_GetInConstructor(Refs_CompositeInteraction self);

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeInteraction.interactionType

The 
type of the interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetInteractionType(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiBoolean Refs_CompositeInteraction_GetIsDeleted(Refs_CompositeInteraction self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @returns  Local object key
**/
extern ApiObject Refs_CompositeInteraction_GetLocalKey(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetPackageName(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetPackageShortName(Refs_CompositeInteraction self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.parent

link to 
parent object - synonym for composite
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern Refs_Composite Refs_CompositeInteraction_GetParent(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiString Refs_CompositeInteraction_GetQualifiedName(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_CompositeInteraction_GetRoot(Refs_CompositeInteraction self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeInteraction.serial

Unique 
identifier.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiInteger Refs_CompositeInteraction_GetSerial(Refs_CompositeInteraction self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern Impl_TopObject Refs_CompositeInteraction_GetTopObject(Refs_CompositeInteraction self);

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_CompositeInteraction Refs_CompositeInteraction_Init(Refs_Composite parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_Composite parent
  @param  ApiSet elements
  @param  char * interactionType
  @returns  the new object
**/
extern Refs_CompositeInteraction Refs_CompositeInteraction_Init_reqd(Refs_Composite parent, ApiSet elements, char * interactionType);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  Impl_ApplicationData value
**/
extern void *Refs_CompositeInteraction_RemoveApplicationData(Refs_CompositeInteraction self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.RefSampleComponent.CompositeInteraction
  @param  Refs_CompositeInteraction self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_CompositeInteraction_Set(Refs_CompositeInteraction self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeInteraction self
  @param  Acco_AccessObject value
**/
extern void *Refs_CompositeInteraction_SetAccess(Refs_CompositeInteraction self, Acco_AccessObject value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.affinity

The 
dissociation constant K of the complex, in units of M (moles/liter) to 
the appropriate power, according to the formula 
K=[A][B][C]/[ABC] 
Here 
in units of M-squared (for a ternary complex).
  @param  Refs_CompositeInteraction self
  @param  ApiFloat value
**/
extern void *Refs_CompositeInteraction_SetAffinity(Refs_CompositeInteraction self, ApiFloat value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeInteraction self
  @param  ApiList values
**/
extern void *Refs_CompositeInteraction_SetApplicationData(Refs_CompositeInteraction self, ApiList values);

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeInteraction.assessmentMethod

The 
assessment method used to define this interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
extern void *Refs_CompositeInteraction_SetAssessmentMethod(Refs_CompositeInteraction self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.details

Detail 
field for comments.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
extern void *Refs_CompositeInteraction_SetDetails(Refs_CompositeInteraction self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiSet values
**/
extern void *Refs_CompositeInteraction_SetElements(Refs_CompositeInteraction self, ApiSet values);

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeInteraction.interactionType

The 
type of the interaction.
  @param  Refs_CompositeInteraction self
  @param  ApiString value
**/
extern void *Refs_CompositeInteraction_SetInteractionType(Refs_CompositeInteraction self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeInteraction.serial

Unique 
identifier.
  @param  Refs_CompositeInteraction self
  @param  ApiInteger value
**/
extern void *Refs_CompositeInteraction_SetSerial(Refs_CompositeInteraction self, ApiInteger value);

/**
  Sorted for 
ccp.lims.RefSampleComponent.CompositeInteraction.elements

The 2 
composite elements involved in an interaction.
  @param  Refs_CompositeInteraction self
  @returns   the result
**/
extern ApiList Refs_CompositeInteraction_SortedElements(Refs_CompositeInteraction self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_CompositeInteraction_h__ */
