
#ifndef __incl__ccp_api_molecule_StructureValidation_ResidueValidation_h__
#define __incl__ccp_api_molecule_StructureValidation_ResidueValidation_h__

#include "ccp.h"

/*
  Validation result for one or more Residues
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ResidueValidation_AddApplicationData(Vald_ResidueValidation self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  Coor_Residue value
**/
extern void *Vald_ResidueValidation_AddResidue(Vald_ResidueValidation self, Coor_Residue value);

/**
  CheckAllValid for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ResidueValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_ResidueValidation_CheckAllValid(Vald_ResidueValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ResidueValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_ResidueValidation_CheckValid(Vald_ResidueValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ResidueValidation_FindAllApplicationData(Vald_ResidueValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ResidueValidation_FindAllApplicationData_keyval0(Vald_ResidueValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ResidueValidation_FindAllApplicationData_keyval1(Vald_ResidueValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ResidueValidation_FindAllApplicationData_keyval2(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ResidueValidation_FindAllApplicationData_keyval3(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
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
extern ApiList Vald_ResidueValidation_FindAllApplicationData_keyval4(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ResidueValidation_FindAllResidues(Vald_ResidueValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ResidueValidation_FindAllResidues_keyval0(Vald_ResidueValidation self);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ResidueValidation_FindAllResidues_keyval1(Vald_ResidueValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ResidueValidation_FindAllResidues_keyval2(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ResidueValidation_FindAllResidues_keyval3(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
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
extern ApiSet Vald_ResidueValidation_FindAllResidues_keyval4(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData(Vald_ResidueValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData_keyval0(Vald_ResidueValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData_keyval1(Vald_ResidueValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData_keyval2(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData_keyval3(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
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
extern Impl_ApplicationData Vald_ResidueValidation_FindFirstApplicationData_keyval4(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue(Vald_ResidueValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue_keyval0(Vald_ResidueValidation self);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue_keyval1(Vald_ResidueValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue_keyval2(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue_keyval3(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
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
extern Coor_Residue Vald_ResidueValidation_FindFirstResidue_keyval4(Vald_ResidueValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ResidueValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_ResidueValidation_Get(Vald_ResidueValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_ResidueValidation_GetAccess(Vald_ResidueValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiList Vald_ResidueValidation_GetApplicationData(Vald_ResidueValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ResidueValidation_GetBooleanValue(Vald_ResidueValidation self);

/**
  GetByKey for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ResidueValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_ResidueValidation Vald_ResidueValidation_GetByKey(Vald_ResidueValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetClassName(Vald_ResidueValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetContext(Vald_ResidueValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetDetails(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiList Vald_ResidueValidation_GetFieldNames(Vald_ResidueValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiFloat Vald_ResidueValidation_GetFigOfMerit(Vald_ResidueValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiFloat Vald_ResidueValidation_GetFloatValue(Vald_ResidueValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ResidueValidation_GetInConstructor(Vald_ResidueValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiInteger Vald_ResidueValidation_GetIntValue(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiBoolean Vald_ResidueValidation_GetIsDeleted(Vald_ResidueValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetKeyword(Vald_ResidueValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_ResidueValidation_GetKeywordDefinition(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetPackageName(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetPackageShortName(Vald_ResidueValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_ResidueValidation_GetParent(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetQualifiedName(Vald_ResidueValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiSet Vald_ResidueValidation_GetResidues(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_ResidueValidation_GetRoot(Vald_ResidueValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiInteger Vald_ResidueValidation_GetSerial(Vald_ResidueValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_ResidueValidation_GetValidationStore(Vald_ResidueValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiString Vald_ResidueValidation_GetTextValue(Vald_ResidueValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_ResidueValidation_GetTopObject(Vald_ResidueValidation self);

/**
  Constructor for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_ResidueValidation Vald_ResidueValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_ResidueValidation Vald_ResidueValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ResidueValidation_RemoveApplicationData(Vald_ResidueValidation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  Coor_Residue value
**/
extern void *Vald_ResidueValidation_RemoveResidue(Vald_ResidueValidation self, Coor_Residue value);

/**
  SetAttr for ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ResidueValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_ResidueValidation_Set(Vald_ResidueValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ResidueValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_ResidueValidation_SetAccess(Vald_ResidueValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ResidueValidation self
  @param  ApiList values
**/
extern void *Vald_ResidueValidation_SetApplicationData(Vald_ResidueValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_ResidueValidation self
  @param  ApiBoolean value
**/
extern void *Vald_ResidueValidation_SetBooleanValue(Vald_ResidueValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_ResidueValidation self
  @param  ApiString value
**/
extern void *Vald_ResidueValidation_SetContext(Vald_ResidueValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_ResidueValidation self
  @param  ApiString value
**/
extern void *Vald_ResidueValidation_SetDetails(Vald_ResidueValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_ResidueValidation self
  @param  ApiFloat value
**/
extern void *Vald_ResidueValidation_SetFigOfMerit(Vald_ResidueValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_ResidueValidation self
  @param  ApiFloat value
**/
extern void *Vald_ResidueValidation_SetFloatValue(Vald_ResidueValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_ResidueValidation self
  @param  ApiInteger value
**/
extern void *Vald_ResidueValidation_SetIntValue(Vald_ResidueValidation self, ApiInteger value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_ResidueValidation self
  @param  ApiString value
**/
extern void *Vald_ResidueValidation_SetKeyword(Vald_ResidueValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @param  ApiSet values
**/
extern void *Vald_ResidueValidation_SetResidues(Vald_ResidueValidation self, ApiSet values);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_ResidueValidation self
  @param  ApiInteger value
**/
extern void *Vald_ResidueValidation_SetSerial(Vald_ResidueValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_ResidueValidation self
  @param  ApiString value
**/
extern void *Vald_ResidueValidation_SetTextValue(Vald_ResidueValidation self, ApiString value);

/**
  Sorted for 
ccp.molecule.StructureValidation.ResidueValidation.residues

Residues 
being validated
  @param  Vald_ResidueValidation self
  @returns   the result
**/
extern ApiList Vald_ResidueValidation_SortedResidues(Vald_ResidueValidation self);

#endif /* __incl__ccp_api_molecule_StructureValidation_ResidueValidation_h__ */
