
#ifndef __incl__ccp_api_lims_Protocol_RefOutputSample_h__
#define __incl__ccp_api_lims_Protocol_RefOutputSample_h__

#include "ccp.h"

/*
  An OutputSampleDef is used to specify that an Experiment created from the parent Protocol should have an OutputSample that accepts Samples belonging to the specified SampleCategory (any if OutputSampleDef.sampleCategory is null).
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  Impl_ApplicationData value
**/
extern void *Prot_RefOutputSample_AddApplicationData(Prot_RefOutputSample self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  Expe_OutputSample value
**/
extern void *Prot_RefOutputSample_AddOutputSample(Prot_RefOutputSample self, Expe_OutputSample value);

/**
  CheckAllValid for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean complete
**/
extern void *Prot_RefOutputSample_CheckAllValid(Prot_RefOutputSample self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean complete
**/
extern void *Prot_RefOutputSample_CheckValid(Prot_RefOutputSample self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefOutputSample_FindAllApplicationData(Prot_RefOutputSample self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefOutputSample_FindAllApplicationData_keyval0(Prot_RefOutputSample self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefOutputSample_FindAllApplicationData_keyval1(Prot_RefOutputSample self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefOutputSample_FindAllApplicationData_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefOutputSample_FindAllApplicationData_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
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
extern ApiList Prot_RefOutputSample_FindAllApplicationData_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples(Prot_RefOutputSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval0(Prot_RefOutputSample self);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval1(Prot_RefOutputSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
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
extern ApiSet Prot_RefOutputSample_FindAllOutputSamples_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData(Prot_RefOutputSample self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval0(Prot_RefOutputSample self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval1(Prot_RefOutputSample self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
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
extern Impl_ApplicationData Prot_RefOutputSample_FindFirstApplicationData_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample(Prot_RefOutputSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval0(Prot_RefOutputSample self);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval1(Prot_RefOutputSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval2(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval3(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
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
extern Expe_OutputSample Prot_RefOutputSample_FindFirstOutputSample_keyval4(Prot_RefOutputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Prot_RefOutputSample_Get(Prot_RefOutputSample self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Acco_AccessObject Prot_RefOutputSample_GetAccess(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.amount

The default amount of 
Sample to create for an OutputSample created from this OutputSampleDef.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiFloat Prot_RefOutputSample_GetAmount(Prot_RefOutputSample self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiList Prot_RefOutputSample_GetApplicationData(Prot_RefOutputSample self);

/**
  GetByKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Prot_RefOutputSample Prot_RefOutputSample_GetByKey(Prot_RefOutputSample self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetClassName(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.displayUnit

The unit to 
display for OutputSampleDef.amount.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetDisplayUnit(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiList Prot_RefOutputSample_GetFieldNames(Prot_RefOutputSample self);

/**
  GetFullKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Prot_RefOutputSample_GetFullKey(Prot_RefOutputSample self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiBoolean Prot_RefOutputSample_GetInConstructor(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiBoolean Prot_RefOutputSample_GetIsDeleted(Prot_RefOutputSample self);

/**
  GetLocalKey for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @returns  Local object key
**/
extern ApiObject Prot_RefOutputSample_GetLocalKey(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.name

The name of the 
OutputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to OutputSample.name when an OutputSample is created from 
an OutputSampleDef.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetName(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiSet Prot_RefOutputSample_GetOutputSamples(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetPackageName(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetPackageShortName(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.parent

link to parent object 
- synonym for protocol
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Prot_Protocol Prot_RefOutputSample_GetParent(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.protocol

parent link
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Prot_Protocol Prot_RefOutputSample_GetProtocol(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetQualifiedName(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.refSample
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Sam_RefSample Prot_RefOutputSample_GetRefSample(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Impl_MemopsRoot Prot_RefOutputSample_GetRoot(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.serial

Unique identifier.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiInteger Prot_RefOutputSample_GetSerial(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Prot_Step Prot_RefOutputSample_GetStep(Prot_RefOutputSample self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern Impl_TopObject Prot_RefOutputSample_GetTopObject(Prot_RefOutputSample self);

/**
  Get for ccp.lims.Protocol.RefOutputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for OutputSampleDef.amount
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiString Prot_RefOutputSample_GetUnit(Prot_RefOutputSample self);

/**
  Constructor for ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Prot_RefOutputSample Prot_RefOutputSample_Init(Prot_Protocol parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Protocol.RefOutputSample
  @param  Prot_Protocol parent
  @returns  the new object
**/
extern Prot_RefOutputSample Prot_RefOutputSample_Init_reqd(Prot_Protocol parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  Impl_ApplicationData value
**/
extern void *Prot_RefOutputSample_RemoveApplicationData(Prot_RefOutputSample self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  Expe_OutputSample value
**/
extern void *Prot_RefOutputSample_RemoveOutputSample(Prot_RefOutputSample self, Expe_OutputSample value);

/**
  SetAttr for ccp.lims.Protocol.RefOutputSample
  @param  Prot_RefOutputSample self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Prot_RefOutputSample_Set(Prot_RefOutputSample self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefOutputSample self
  @param  Acco_AccessObject value
**/
extern void *Prot_RefOutputSample_SetAccess(Prot_RefOutputSample self, Acco_AccessObject value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.amount

The default amount of 
Sample to create for an OutputSample created from this OutputSampleDef.
  @param  Prot_RefOutputSample self
  @param  ApiFloat value
**/
extern void *Prot_RefOutputSample_SetAmount(Prot_RefOutputSample self, ApiFloat value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefOutputSample self
  @param  ApiList values
**/
extern void *Prot_RefOutputSample_SetApplicationData(Prot_RefOutputSample self, ApiList values);

/**
  Set for ccp.lims.Protocol.RefOutputSample.displayUnit

The unit to 
display for OutputSampleDef.amount.
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
extern void *Prot_RefOutputSample_SetDisplayUnit(Prot_RefOutputSample self, ApiString value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.name

The name of the 
OutputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to OutputSample.name when an OutputSample is created from 
an OutputSampleDef.
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
extern void *Prot_RefOutputSample_SetName(Prot_RefOutputSample self, ApiString value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @param  ApiSet values
**/
extern void *Prot_RefOutputSample_SetOutputSamples(Prot_RefOutputSample self, ApiSet values);

/**
  Set for ccp.lims.Protocol.RefOutputSample.refSample
  @param  Prot_RefOutputSample self
  @param  Sam_RefSample value
**/
extern void *Prot_RefOutputSample_SetRefSample(Prot_RefOutputSample self, Sam_RefSample value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.serial

Unique identifier.
  @param  Prot_RefOutputSample self
  @param  ApiInteger value
**/
extern void *Prot_RefOutputSample_SetSerial(Prot_RefOutputSample self, ApiInteger value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefOutputSample self
  @param  Prot_Step value
**/
extern void *Prot_RefOutputSample_SetStep(Prot_RefOutputSample self, Prot_Step value);

/**
  Set for ccp.lims.Protocol.RefOutputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for OutputSampleDef.amount
  @param  Prot_RefOutputSample self
  @param  ApiString value
**/
extern void *Prot_RefOutputSample_SetUnit(Prot_RefOutputSample self, ApiString value);

/**
  Sorted for ccp.lims.Protocol.RefOutputSample.outputSamples
  @param  Prot_RefOutputSample self
  @returns   the result
**/
extern ApiList Prot_RefOutputSample_SortedOutputSamples(Prot_RefOutputSample self);

#endif /* __incl__ccp_api_lims_Protocol_RefOutputSample_h__ */
