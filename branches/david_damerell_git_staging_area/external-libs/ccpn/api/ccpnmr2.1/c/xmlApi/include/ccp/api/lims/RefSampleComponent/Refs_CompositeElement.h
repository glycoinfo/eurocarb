
#ifndef __incl__ccp_api_lims_RefSampleComponent_CompositeElement_h__
#define __incl__ccp_api_lims_RefSampleComponent_CompositeElement_h__

#include "ccp.h"

/*
  One element of the composite.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  Impl_ApplicationData value
**/
extern void *Refs_CompositeElement_AddApplicationData(Refs_CompositeElement self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean complete
**/
extern void *Refs_CompositeElement_CheckAllValid(Refs_CompositeElement self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean complete
**/
extern void *Refs_CompositeElement_CheckValid(Refs_CompositeElement self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeElement_FindAllApplicationData(Refs_CompositeElement self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeElement_FindAllApplicationData_keyval0(Refs_CompositeElement self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeElement_FindAllApplicationData_keyval1(Refs_CompositeElement self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeElement_FindAllApplicationData_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_CompositeElement_FindAllApplicationData_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
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
extern ApiList Refs_CompositeElement_FindAllApplicationData_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeElement_FindAllInteractions(Refs_CompositeElement self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeElement_FindAllInteractions_keyval0(Refs_CompositeElement self);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeElement_FindAllInteractions_keyval1(Refs_CompositeElement self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeElement_FindAllInteractions_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Refs_CompositeElement_FindAllInteractions_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
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
extern ApiSet Refs_CompositeElement_FindAllInteractions_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData(Refs_CompositeElement self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval0(Refs_CompositeElement self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval1(Refs_CompositeElement self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
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
extern Impl_ApplicationData Refs_CompositeElement_FindFirstApplicationData_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction(Refs_CompositeElement self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval0(Refs_CompositeElement self);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval1(Refs_CompositeElement self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval2(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval3(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
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
extern Refs_CompositeInteraction Refs_CompositeElement_FindFirstInteraction_keyval4(Refs_CompositeElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_CompositeElement_Get(Refs_CompositeElement self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Acco_AccessObject Refs_CompositeElement_GetAccess(Refs_CompositeElement self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Acco_AccessObject Refs_CompositeElement_GetActiveAccess(Refs_CompositeElement self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiList Refs_CompositeElement_GetApplicationData(Refs_CompositeElement self);

/**
  GetByKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_CompositeElement Refs_CompositeElement_GetByKey(Refs_CompositeElement self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiString Refs_CompositeElement_GetClassName(Refs_CompositeElement self);

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeElement.component

Component 
involved as an element in a composite.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Refs_AbstractComponent Refs_CompositeElement_GetComponent(Refs_CompositeElement self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.composite

parent 
link
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Refs_Composite Refs_CompositeElement_GetComposite(Refs_CompositeElement self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.details

Detail 
field for comments.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiString Refs_CompositeElement_GetDetails(Refs_CompositeElement self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiList Refs_CompositeElement_GetFieldNames(Refs_CompositeElement self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_CompositeElement_GetFullKey(Refs_CompositeElement self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiBoolean Refs_CompositeElement_GetInConstructor(Refs_CompositeElement self);

/**
  Get for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiSet Refs_CompositeElement_GetInteractions(Refs_CompositeElement self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiBoolean Refs_CompositeElement_GetIsDeleted(Refs_CompositeElement self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @returns  Local object key
**/
extern ApiObject Refs_CompositeElement_GetLocalKey(Refs_CompositeElement self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiString Refs_CompositeElement_GetPackageName(Refs_CompositeElement self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiString Refs_CompositeElement_GetPackageShortName(Refs_CompositeElement self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.parent

link to 
parent object - synonym for composite
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Refs_Composite Refs_CompositeElement_GetParent(Refs_CompositeElement self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiString Refs_CompositeElement_GetQualifiedName(Refs_CompositeElement self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_CompositeElement_GetRoot(Refs_CompositeElement self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.serial

Unique 
identifier.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiInteger Refs_CompositeElement_GetSerial(Refs_CompositeElement self);

/**
  Get for ccp.lims.RefSampleComponent.CompositeElement.stoichiometry

The 
stoichiometry is the number of this element involved in the composit.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiInteger Refs_CompositeElement_GetStoichiometry(Refs_CompositeElement self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern Impl_TopObject Refs_CompositeElement_GetTopObject(Refs_CompositeElement self);

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_CompositeElement Refs_CompositeElement_Init(Refs_Composite parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_Composite parent
  @param  Refs_AbstractComponent component
  @returns  the new object
**/
extern Refs_CompositeElement Refs_CompositeElement_Init_reqd(Refs_Composite parent, Refs_AbstractComponent component);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  Impl_ApplicationData value
**/
extern void *Refs_CompositeElement_RemoveApplicationData(Refs_CompositeElement self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.RefSampleComponent.CompositeElement
  @param  Refs_CompositeElement self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_CompositeElement_Set(Refs_CompositeElement self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_CompositeElement self
  @param  Acco_AccessObject value
**/
extern void *Refs_CompositeElement_SetAccess(Refs_CompositeElement self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_CompositeElement self
  @param  ApiList values
**/
extern void *Refs_CompositeElement_SetApplicationData(Refs_CompositeElement self, ApiList values);

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeElement.component

Component 
involved as an element in a composite.
  @param  Refs_CompositeElement self
  @param  Refs_AbstractComponent value
**/
extern void *Refs_CompositeElement_SetComponent(Refs_CompositeElement self, Refs_AbstractComponent value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.details

Detail 
field for comments.
  @param  Refs_CompositeElement self
  @param  ApiString value
**/
extern void *Refs_CompositeElement_SetDetails(Refs_CompositeElement self, ApiString value);

/**
  Set for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @param  ApiSet values
**/
extern void *Refs_CompositeElement_SetInteractions(Refs_CompositeElement self, ApiSet values);

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.serial

Unique 
identifier.
  @param  Refs_CompositeElement self
  @param  ApiInteger value
**/
extern void *Refs_CompositeElement_SetSerial(Refs_CompositeElement self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.CompositeElement.stoichiometry

The 
stoichiometry is the number of this element involved in the composit.
  @param  Refs_CompositeElement self
  @param  ApiInteger value
**/
extern void *Refs_CompositeElement_SetStoichiometry(Refs_CompositeElement self, ApiInteger value);

/**
  Sorted for 
ccp.lims.RefSampleComponent.CompositeElement.interactions

Interactions 
where a composite element is involved.
  @param  Refs_CompositeElement self
  @returns   the result
**/
extern ApiList Refs_CompositeElement_SortedInteractions(Refs_CompositeElement self);

#endif /* __incl__ccp_api_lims_RefSampleComponent_CompositeElement_h__ */
