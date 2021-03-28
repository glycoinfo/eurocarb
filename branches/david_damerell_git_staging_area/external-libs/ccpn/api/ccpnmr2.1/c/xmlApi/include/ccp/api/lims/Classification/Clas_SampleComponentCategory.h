
#ifndef __incl__ccp_api_lims_Classification_SampleComponentCategory_h__
#define __incl__ccp_api_lims_Classification_SampleComponentCategory_h__

#include "ccp.h"

/*
  The category of the Samplecomponent classified by namingSystem. Different organisations can have their own categories. PIMS default caregories include buffering agent, salt, inhibitor,...
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  Impl_ApplicationData value
**/
extern void *Clas_SampleComponentCategory_AddApplicationData(Clas_SampleComponentCategory self, Impl_ApplicationData value);

/**
  Add for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  Refs_AbstractComponent value
**/
extern void *Clas_SampleComponentCategory_AddComponent(Clas_SampleComponentCategory self, Refs_AbstractComponent value);

/**
  CheckAllValid for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean complete
**/
extern void *Clas_SampleComponentCategory_CheckAllValid(Clas_SampleComponentCategory self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean complete
**/
extern void *Clas_SampleComponentCategory_CheckValid(Clas_SampleComponentCategory self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData(Clas_SampleComponentCategory self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval0(Clas_SampleComponentCategory self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
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
extern ApiList Clas_SampleComponentCategory_FindAllApplicationData_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_SampleComponentCategory_FindAllComponents(Clas_SampleComponentCategory self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval0(Clas_SampleComponentCategory self);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
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
extern ApiSet Clas_SampleComponentCategory_FindAllComponents_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData(Clas_SampleComponentCategory self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval0(Clas_SampleComponentCategory self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
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
extern Impl_ApplicationData Clas_SampleComponentCategory_FindFirstApplicationData_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent(Clas_SampleComponentCategory self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval0(Clas_SampleComponentCategory self);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval1(Clas_SampleComponentCategory self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval2(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval3(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
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
extern Refs_AbstractComponent Clas_SampleComponentCategory_FindFirstComponent_keyval4(Clas_SampleComponentCategory self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Clas_SampleComponentCategory_Get(Clas_SampleComponentCategory self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Acco_AccessObject Clas_SampleComponentCategory_GetAccess(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Acco_AccessObject Clas_SampleComponentCategory_GetActiveAccess(Clas_SampleComponentCategory self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiList Clas_SampleComponentCategory_GetApplicationData(Clas_SampleComponentCategory self);

/**
  GetByKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Clas_SampleComponentCategory Clas_SampleComponentCategory_GetByKey(Clas_SampleComponentCategory self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetClassName(Clas_SampleComponentCategory self);

/**
  Get for 
ccp.lims.Classification.SampleComponentCategory.classification

parent 
link
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Clas_Classification Clas_SampleComponentCategory_GetClassification(Clas_SampleComponentCategory self);

/**
  Get for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiSet Clas_SampleComponentCategory_GetComponents(Clas_SampleComponentCategory self);

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetDetails(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiList Clas_SampleComponentCategory_GetFieldNames(Clas_SampleComponentCategory self);

/**
  GetFullKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Clas_SampleComponentCategory_GetFullKey(Clas_SampleComponentCategory self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiBoolean Clas_SampleComponentCategory_GetInConstructor(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiBoolean Clas_SampleComponentCategory_GetIsDeleted(Clas_SampleComponentCategory self);

/**
  GetLocalKey for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @returns  Local object key
**/
extern ApiObject Clas_SampleComponentCategory_GetLocalKey(Clas_SampleComponentCategory self);

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetName(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetPackageName(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetPackageShortName(Clas_SampleComponentCategory self);

/**
  Get for ccp.lims.Classification.SampleComponentCategory.parent

link to 
parent object - synonym for classification
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Clas_Classification Clas_SampleComponentCategory_GetParent(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiString Clas_SampleComponentCategory_GetQualifiedName(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Impl_MemopsRoot Clas_SampleComponentCategory_GetRoot(Clas_SampleComponentCategory self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern Impl_TopObject Clas_SampleComponentCategory_GetTopObject(Clas_SampleComponentCategory self);

/**
  Constructor for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Clas_SampleComponentCategory Clas_SampleComponentCategory_Init(Clas_Classification parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
extern Clas_SampleComponentCategory Clas_SampleComponentCategory_Init_reqd(Clas_Classification parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  Impl_ApplicationData value
**/
extern void *Clas_SampleComponentCategory_RemoveApplicationData(Clas_SampleComponentCategory self, Impl_ApplicationData value);

/**
  Remove for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  Refs_AbstractComponent value
**/
extern void *Clas_SampleComponentCategory_RemoveComponent(Clas_SampleComponentCategory self, Refs_AbstractComponent value);

/**
  SetAttr for ccp.lims.Classification.SampleComponentCategory
  @param  Clas_SampleComponentCategory self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Clas_SampleComponentCategory_Set(Clas_SampleComponentCategory self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_SampleComponentCategory self
  @param  Acco_AccessObject value
**/
extern void *Clas_SampleComponentCategory_SetAccess(Clas_SampleComponentCategory self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_SampleComponentCategory self
  @param  ApiList values
**/
extern void *Clas_SampleComponentCategory_SetApplicationData(Clas_SampleComponentCategory self, ApiList values);

/**
  Set for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @param  ApiSet values
**/
extern void *Clas_SampleComponentCategory_SetComponents(Clas_SampleComponentCategory self, ApiSet values);

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_SampleComponentCategory self
  @param  ApiString value
**/
extern void *Clas_SampleComponentCategory_SetDetails(Clas_SampleComponentCategory self, ApiString value);

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_SampleComponentCategory self
  @param  ApiString value
**/
extern void *Clas_SampleComponentCategory_SetName(Clas_SampleComponentCategory self, ApiString value);

/**
  Sorted for 
ccp.lims.Classification.SampleComponentCategory.components

Component 
list associated to a category.
  @param  Clas_SampleComponentCategory self
  @returns   the result
**/
extern ApiList Clas_SampleComponentCategory_SortedComponents(Clas_SampleComponentCategory self);

#endif /* __incl__ccp_api_lims_Classification_SampleComponentCategory_h__ */
