
#ifndef __incl__ccp_api_lims_RefSampleComponent_ComponentDbRef_h__
#define __incl__ccp_api_lims_RefSampleComponent_ComponentDbRef_h__

#include "ccp.h"

/*
  The link between a database reference (DbRef) and a component.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  Impl_ApplicationData value
**/
extern void *Refs_ComponentDbRef_AddApplicationData(Refs_ComponentDbRef self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean complete
**/
extern void *Refs_ComponentDbRef_CheckAllValid(Refs_ComponentDbRef self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean complete
**/
extern void *Refs_ComponentDbRef_CheckValid(Refs_ComponentDbRef self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_ComponentDbRef_FindAllApplicationData(Refs_ComponentDbRef self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval0(Refs_ComponentDbRef self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval1(Refs_ComponentDbRef self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval2(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval3(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
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
extern ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval4(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData(Refs_ComponentDbRef self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval0(Refs_ComponentDbRef self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval1(Refs_ComponentDbRef self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval2(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval3(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
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
extern Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval4(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Refs_ComponentDbRef_Get(Refs_ComponentDbRef self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Acco_AccessObject Refs_ComponentDbRef_GetAccess(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Acco_AccessObject Refs_ComponentDbRef_GetActiveAccess(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.alignBegin

Optional. 
Residue number  (MolRedidue.serial)in the molecule sequence where the 
alignment begins.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiInteger Refs_ComponentDbRef_GetAlignBegin(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.alignEnd

Optional. 
Residue number (MolRedidue.serial) in the molecule sequence where the 
alignment ends.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiInteger Refs_ComponentDbRef_GetAlignEnd(Refs_ComponentDbRef self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiList Refs_ComponentDbRef_GetApplicationData(Refs_ComponentDbRef self);

/**
  GetByKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Refs_ComponentDbRef Refs_ComponentDbRef_GetByKey(Refs_ComponentDbRef self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetClassName(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.component

Link to 
the abstract component to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Refs_AbstractComponent Refs_ComponentDbRef_GetComponent(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Dbr_Entry Refs_ComponentDbRef_GetDbRef(Refs_ComponentDbRef self);

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiInteger Refs_ComponentDbRef_GetDbRefAlignBegin(Refs_ComponentDbRef self);

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignEnd

Optional. 
Residue number in the database reference sequence where the alignment 
ends.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiInteger Refs_ComponentDbRef_GetDbRefAlignEnd(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.details

Detail field 
for comments.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetDetails(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiList Refs_ComponentDbRef_GetFieldNames(Refs_ComponentDbRef self);

/**
  GetFullKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Refs_ComponentDbRef_GetFullKey(Refs_ComponentDbRef self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiBoolean Refs_ComponentDbRef_GetInConstructor(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiBoolean Refs_ComponentDbRef_GetIsDeleted(Refs_ComponentDbRef self);

/**
  GetLocalKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @returns  Local object key
**/
extern ApiObject Refs_ComponentDbRef_GetLocalKey(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetPackageName(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetPackageShortName(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.parent

link to 
parent object - synonym for component
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Refs_AbstractComponent Refs_ComponentDbRef_GetParent(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetQualifiedName(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Impl_MemopsRoot Refs_ComponentDbRef_GetRoot(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.serial

Unique 
identifier.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiInteger Refs_ComponentDbRef_GetSerial(Refs_ComponentDbRef self);

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.threadingProg

Program used 
to obtain the threading score.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiString Refs_ComponentDbRef_GetThreadingProg(Refs_ComponentDbRef self);

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.threadingScore

The 
scoring value.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern ApiFloat Refs_ComponentDbRef_GetThreadingScore(Refs_ComponentDbRef self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
extern Impl_TopObject Refs_ComponentDbRef_GetTopObject(Refs_ComponentDbRef self);

/**
  Constructor for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Refs_ComponentDbRef Refs_ComponentDbRef_Init(Refs_AbstractComponent parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent parent
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
extern Refs_ComponentDbRef Refs_ComponentDbRef_Init_reqd(Refs_AbstractComponent parent, Dbr_Entry dbRef);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  Impl_ApplicationData value
**/
extern void *Refs_ComponentDbRef_RemoveApplicationData(Refs_ComponentDbRef self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Refs_ComponentDbRef_Set(Refs_ComponentDbRef self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_ComponentDbRef self
  @param  Acco_AccessObject value
**/
extern void *Refs_ComponentDbRef_SetAccess(Refs_ComponentDbRef self, Acco_AccessObject value);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.alignBegin

Optional. 
Residue number  (MolRedidue.serial)in the molecule sequence where the 
alignment begins.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
extern void *Refs_ComponentDbRef_SetAlignBegin(Refs_ComponentDbRef self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.alignEnd

Optional. 
Residue number (MolRedidue.serial) in the molecule sequence where the 
alignment ends.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
extern void *Refs_ComponentDbRef_SetAlignEnd(Refs_ComponentDbRef self, ApiInteger value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  ApiList values
**/
extern void *Refs_ComponentDbRef_SetApplicationData(Refs_ComponentDbRef self, ApiList values);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @param  Dbr_Entry value
**/
extern void *Refs_ComponentDbRef_SetDbRef(Refs_ComponentDbRef self, Dbr_Entry value);

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
extern void *Refs_ComponentDbRef_SetDbRefAlignBegin(Refs_ComponentDbRef self, ApiInteger value);

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignEnd

Optional. 
Residue number in the database reference sequence where the alignment 
ends.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
extern void *Refs_ComponentDbRef_SetDbRefAlignEnd(Refs_ComponentDbRef self, ApiInteger value);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.details

Detail field 
for comments.
  @param  Refs_ComponentDbRef self
  @param  ApiString value
**/
extern void *Refs_ComponentDbRef_SetDetails(Refs_ComponentDbRef self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.serial

Unique 
identifier.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
extern void *Refs_ComponentDbRef_SetSerial(Refs_ComponentDbRef self, ApiInteger value);

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.threadingProg

Program used 
to obtain the threading score.
  @param  Refs_ComponentDbRef self
  @param  ApiString value
**/
extern void *Refs_ComponentDbRef_SetThreadingProg(Refs_ComponentDbRef self, ApiString value);

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.threadingScore

The 
scoring value.
  @param  Refs_ComponentDbRef self
  @param  ApiFloat value
**/
extern void *Refs_ComponentDbRef_SetThreadingScore(Refs_ComponentDbRef self, ApiFloat value);

#endif /* __incl__ccp_api_lims_RefSampleComponent_ComponentDbRef_h__ */
