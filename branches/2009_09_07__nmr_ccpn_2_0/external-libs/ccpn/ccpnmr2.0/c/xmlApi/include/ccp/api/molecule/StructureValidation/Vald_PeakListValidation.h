
#ifndef __incl__ccp_api_molecule_StructureValidation_PeakListValidation_h__
#define __incl__ccp_api_molecule_StructureValidation_PeakListValidation_h__

#include "ccp.h"

/*
  Validation result for one or more PeakLists
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_PeakListValidation_AddApplicationData(Vald_PeakListValidation self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  Nmr_PeakList value
**/
extern void *Vald_PeakListValidation_AddPeakList(Vald_PeakListValidation self, Nmr_PeakList value);

/**
  CheckAllValid for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_PeakListValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_PeakListValidation_CheckAllValid(Vald_PeakListValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_PeakListValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_PeakListValidation_CheckValid(Vald_PeakListValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_PeakListValidation_FindAllApplicationData(Vald_PeakListValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_PeakListValidation_FindAllApplicationData_keyval0(Vald_PeakListValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_PeakListValidation_FindAllApplicationData_keyval1(Vald_PeakListValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_PeakListValidation_FindAllApplicationData_keyval2(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_PeakListValidation_FindAllApplicationData_keyval3(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
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
extern ApiList Vald_PeakListValidation_FindAllApplicationData_keyval4(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_PeakListValidation_FindAllPeakLists(Vald_PeakListValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_PeakListValidation_FindAllPeakLists_keyval0(Vald_PeakListValidation self);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_PeakListValidation_FindAllPeakLists_keyval1(Vald_PeakListValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_PeakListValidation_FindAllPeakLists_keyval2(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_PeakListValidation_FindAllPeakLists_keyval3(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
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
extern ApiSet Vald_PeakListValidation_FindAllPeakLists_keyval4(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData(Vald_PeakListValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData_keyval0(Vald_PeakListValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData_keyval1(Vald_PeakListValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData_keyval2(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData_keyval3(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
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
extern Impl_ApplicationData Vald_PeakListValidation_FindFirstApplicationData_keyval4(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList(Vald_PeakListValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList_keyval0(Vald_PeakListValidation self);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList_keyval1(Vald_PeakListValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList_keyval2(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList_keyval3(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
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
extern Nmr_PeakList Vald_PeakListValidation_FindFirstPeakList_keyval4(Vald_PeakListValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_PeakListValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_PeakListValidation_Get(Vald_PeakListValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_PeakListValidation_GetAccess(Vald_PeakListValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiList Vald_PeakListValidation_GetApplicationData(Vald_PeakListValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiBoolean Vald_PeakListValidation_GetBooleanValue(Vald_PeakListValidation self);

/**
  GetByKey for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_PeakListValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_PeakListValidation Vald_PeakListValidation_GetByKey(Vald_PeakListValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetClassName(Vald_PeakListValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetContext(Vald_PeakListValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetDetails(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiList Vald_PeakListValidation_GetFieldNames(Vald_PeakListValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiFloat Vald_PeakListValidation_GetFigOfMerit(Vald_PeakListValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiFloat Vald_PeakListValidation_GetFloatValue(Vald_PeakListValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiBoolean Vald_PeakListValidation_GetInConstructor(Vald_PeakListValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiInteger Vald_PeakListValidation_GetIntValue(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiBoolean Vald_PeakListValidation_GetIsDeleted(Vald_PeakListValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetKeyword(Vald_PeakListValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_PeakListValidation_GetKeywordDefinition(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetPackageName(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetPackageShortName(Vald_PeakListValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_PeakListValidation_GetParent(Vald_PeakListValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiSet Vald_PeakListValidation_GetPeakLists(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetQualifiedName(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_PeakListValidation_GetRoot(Vald_PeakListValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiInteger Vald_PeakListValidation_GetSerial(Vald_PeakListValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_PeakListValidation_GetValidationStore(Vald_PeakListValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiString Vald_PeakListValidation_GetTextValue(Vald_PeakListValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_PeakListValidation_GetTopObject(Vald_PeakListValidation self);

/**
  Constructor for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_PeakListValidation Vald_PeakListValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_PeakListValidation Vald_PeakListValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_PeakListValidation_RemoveApplicationData(Vald_PeakListValidation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  Nmr_PeakList value
**/
extern void *Vald_PeakListValidation_RemovePeakList(Vald_PeakListValidation self, Nmr_PeakList value);

/**
  SetAttr for ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_PeakListValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_PeakListValidation_Set(Vald_PeakListValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_PeakListValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_PeakListValidation_SetAccess(Vald_PeakListValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakListValidation self
  @param  ApiList values
**/
extern void *Vald_PeakListValidation_SetApplicationData(Vald_PeakListValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_PeakListValidation self
  @param  ApiBoolean value
**/
extern void *Vald_PeakListValidation_SetBooleanValue(Vald_PeakListValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_PeakListValidation self
  @param  ApiString value
**/
extern void *Vald_PeakListValidation_SetContext(Vald_PeakListValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_PeakListValidation self
  @param  ApiString value
**/
extern void *Vald_PeakListValidation_SetDetails(Vald_PeakListValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_PeakListValidation self
  @param  ApiFloat value
**/
extern void *Vald_PeakListValidation_SetFigOfMerit(Vald_PeakListValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_PeakListValidation self
  @param  ApiFloat value
**/
extern void *Vald_PeakListValidation_SetFloatValue(Vald_PeakListValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_PeakListValidation self
  @param  ApiInteger value
**/
extern void *Vald_PeakListValidation_SetIntValue(Vald_PeakListValidation self, ApiInteger value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_PeakListValidation self
  @param  ApiString value
**/
extern void *Vald_PeakListValidation_SetKeyword(Vald_PeakListValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @param  ApiSet values
**/
extern void *Vald_PeakListValidation_SetPeakLists(Vald_PeakListValidation self, ApiSet values);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_PeakListValidation self
  @param  ApiInteger value
**/
extern void *Vald_PeakListValidation_SetSerial(Vald_PeakListValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_PeakListValidation self
  @param  ApiString value
**/
extern void *Vald_PeakListValidation_SetTextValue(Vald_PeakListValidation self, ApiString value);

/**
  Sorted for 
ccp.molecule.StructureValidation.PeakListValidation.peakLists

PeakLists 
being validated
  @param  Vald_PeakListValidation self
  @returns   the result
**/
extern ApiList Vald_PeakListValidation_SortedPeakLists(Vald_PeakListValidation self);

#endif /* __incl__ccp_api_molecule_StructureValidation_PeakListValidation_h__ */
