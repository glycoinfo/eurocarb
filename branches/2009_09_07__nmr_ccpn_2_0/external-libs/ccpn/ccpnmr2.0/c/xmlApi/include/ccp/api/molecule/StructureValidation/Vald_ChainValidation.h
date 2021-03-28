
#ifndef __incl__ccp_api_molecule_StructureValidation_ChainValidation_h__
#define __incl__ccp_api_molecule_StructureValidation_ChainValidation_h__

#include "ccp.h"

/*
  Validation result for one or more Chains
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ChainValidation_AddApplicationData(Vald_ChainValidation self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.StructureValidation.ChainValidation.chains

Chains 
being validated
  @param  Vald_ChainValidation self
  @param  Coor_Chain value
**/
extern void *Vald_ChainValidation_AddChain(Vald_ChainValidation self, Coor_Chain value);

/**
  CheckAllValid for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ChainValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_ChainValidation_CheckAllValid(Vald_ChainValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ChainValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_ChainValidation_CheckValid(Vald_ChainValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ChainValidation_FindAllApplicationData(Vald_ChainValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ChainValidation_FindAllApplicationData_keyval0(Vald_ChainValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ChainValidation_FindAllApplicationData_keyval1(Vald_ChainValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ChainValidation_FindAllApplicationData_keyval2(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ChainValidation_FindAllApplicationData_keyval3(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
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
extern ApiList Vald_ChainValidation_FindAllApplicationData_keyval4(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ChainValidation_FindAllChains(Vald_ChainValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ChainValidation_FindAllChains_keyval0(Vald_ChainValidation self);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ChainValidation_FindAllChains_keyval1(Vald_ChainValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ChainValidation_FindAllChains_keyval2(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ChainValidation_FindAllChains_keyval3(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
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
extern ApiSet Vald_ChainValidation_FindAllChains_keyval4(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData(Vald_ChainValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData_keyval0(Vald_ChainValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData_keyval1(Vald_ChainValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData_keyval2(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData_keyval3(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
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
extern Impl_ApplicationData Vald_ChainValidation_FindFirstApplicationData_keyval4(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Chain Vald_ChainValidation_FindFirstChain(Vald_ChainValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Chain Vald_ChainValidation_FindFirstChain_keyval0(Vald_ChainValidation self);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Chain Vald_ChainValidation_FindFirstChain_keyval1(Vald_ChainValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Chain Vald_ChainValidation_FindFirstChain_keyval2(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Chain Vald_ChainValidation_FindFirstChain_keyval3(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
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
extern Coor_Chain Vald_ChainValidation_FindFirstChain_keyval4(Vald_ChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ChainValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_ChainValidation_Get(Vald_ChainValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_ChainValidation_GetAccess(Vald_ChainValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiList Vald_ChainValidation_GetApplicationData(Vald_ChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ChainValidation_GetBooleanValue(Vald_ChainValidation self);

/**
  GetByKey for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ChainValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_ChainValidation Vald_ChainValidation_GetByKey(Vald_ChainValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.StructureValidation.ChainValidation.chains

Chains 
being validated
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiSet Vald_ChainValidation_GetChains(Vald_ChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetClassName(Vald_ChainValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetContext(Vald_ChainValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetDetails(Vald_ChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiList Vald_ChainValidation_GetFieldNames(Vald_ChainValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiFloat Vald_ChainValidation_GetFigOfMerit(Vald_ChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiFloat Vald_ChainValidation_GetFloatValue(Vald_ChainValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ChainValidation_GetInConstructor(Vald_ChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiInteger Vald_ChainValidation_GetIntValue(Vald_ChainValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ChainValidation_GetIsDeleted(Vald_ChainValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetKeyword(Vald_ChainValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_ChainValidation_GetKeywordDefinition(Vald_ChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetPackageName(Vald_ChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetPackageShortName(Vald_ChainValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_ChainValidation_GetParent(Vald_ChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetQualifiedName(Vald_ChainValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_ChainValidation_GetRoot(Vald_ChainValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiInteger Vald_ChainValidation_GetSerial(Vald_ChainValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_ChainValidation_GetValidationStore(Vald_ChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiString Vald_ChainValidation_GetTextValue(Vald_ChainValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_ChainValidation_GetTopObject(Vald_ChainValidation self);

/**
  Constructor for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_ChainValidation Vald_ChainValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_ChainValidation Vald_ChainValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ChainValidation_RemoveApplicationData(Vald_ChainValidation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @param  Coor_Chain value
**/
extern void *Vald_ChainValidation_RemoveChain(Vald_ChainValidation self, Coor_Chain value);

/**
  SetAttr for ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ChainValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_ChainValidation_Set(Vald_ChainValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ChainValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_ChainValidation_SetAccess(Vald_ChainValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ChainValidation self
  @param  ApiList values
**/
extern void *Vald_ChainValidation_SetApplicationData(Vald_ChainValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_ChainValidation self
  @param  ApiBoolean value
**/
extern void *Vald_ChainValidation_SetBooleanValue(Vald_ChainValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.StructureValidation.ChainValidation.chains

Chains 
being validated
  @param  Vald_ChainValidation self
  @param  ApiSet values
**/
extern void *Vald_ChainValidation_SetChains(Vald_ChainValidation self, ApiSet values);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_ChainValidation self
  @param  ApiString value
**/
extern void *Vald_ChainValidation_SetContext(Vald_ChainValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_ChainValidation self
  @param  ApiString value
**/
extern void *Vald_ChainValidation_SetDetails(Vald_ChainValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_ChainValidation self
  @param  ApiFloat value
**/
extern void *Vald_ChainValidation_SetFigOfMerit(Vald_ChainValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_ChainValidation self
  @param  ApiFloat value
**/
extern void *Vald_ChainValidation_SetFloatValue(Vald_ChainValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_ChainValidation self
  @param  ApiInteger value
**/
extern void *Vald_ChainValidation_SetIntValue(Vald_ChainValidation self, ApiInteger value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_ChainValidation self
  @param  ApiString value
**/
extern void *Vald_ChainValidation_SetKeyword(Vald_ChainValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_ChainValidation self
  @param  ApiInteger value
**/
extern void *Vald_ChainValidation_SetSerial(Vald_ChainValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_ChainValidation self
  @param  ApiString value
**/
extern void *Vald_ChainValidation_SetTextValue(Vald_ChainValidation self, ApiString value);

/**
  Sorted for 
ccp.molecule.StructureValidation.ChainValidation.chains

Chains being 
validated
  @param  Vald_ChainValidation self
  @returns   the result
**/
extern ApiList Vald_ChainValidation_SortedChains(Vald_ChainValidation self);

#endif /* __incl__ccp_api_molecule_StructureValidation_ChainValidation_h__ */
