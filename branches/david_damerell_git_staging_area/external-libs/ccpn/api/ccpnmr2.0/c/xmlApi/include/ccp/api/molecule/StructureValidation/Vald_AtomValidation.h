
#ifndef __incl__ccp_api_molecule_StructureValidation_AtomValidation_h__
#define __incl__ccp_api_molecule_StructureValidation_AtomValidation_h__

#include "ccp.h"

/*
  Validation result for one or more Atoms
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_AtomValidation_AddApplicationData(Vald_AtomValidation self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  Coor_Atom value
**/
extern void *Vald_AtomValidation_AddAtom(Vald_AtomValidation self, Coor_Atom value);

/**
  CheckAllValid for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_AtomValidation_CheckAllValid(Vald_AtomValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_AtomValidation_CheckValid(Vald_AtomValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_AtomValidation_FindAllApplicationData(Vald_AtomValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_AtomValidation_FindAllApplicationData_keyval0(Vald_AtomValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_AtomValidation_FindAllApplicationData_keyval1(Vald_AtomValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_AtomValidation_FindAllApplicationData_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_AtomValidation_FindAllApplicationData_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
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
extern ApiList Vald_AtomValidation_FindAllApplicationData_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_AtomValidation_FindAllAtoms(Vald_AtomValidation self, ApiMap conditions);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_AtomValidation_FindAllAtoms_keyval0(Vald_AtomValidation self);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_AtomValidation_FindAllAtoms_keyval1(Vald_AtomValidation self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_AtomValidation_FindAllAtoms_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_AtomValidation_FindAllAtoms_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
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
extern ApiSet Vald_AtomValidation_FindAllAtoms_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData(Vald_AtomValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval0(Vald_AtomValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval1(Vald_AtomValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
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
extern Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Atom Vald_AtomValidation_FindFirstAtom(Vald_AtomValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval0(Vald_AtomValidation self);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval1(Vald_AtomValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
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
extern Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_AtomValidation_Get(Vald_AtomValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_AtomValidation_GetAccess(Vald_AtomValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiList Vald_AtomValidation_GetApplicationData(Vald_AtomValidation self);

/**
  Get for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiSet Vald_AtomValidation_GetAtoms(Vald_AtomValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiBoolean Vald_AtomValidation_GetBooleanValue(Vald_AtomValidation self);

/**
  GetByKey for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_AtomValidation Vald_AtomValidation_GetByKey(Vald_AtomValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetClassName(Vald_AtomValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetContext(Vald_AtomValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetDetails(Vald_AtomValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiList Vald_AtomValidation_GetFieldNames(Vald_AtomValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiFloat Vald_AtomValidation_GetFigOfMerit(Vald_AtomValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiFloat Vald_AtomValidation_GetFloatValue(Vald_AtomValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiBoolean Vald_AtomValidation_GetInConstructor(Vald_AtomValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiInteger Vald_AtomValidation_GetIntValue(Vald_AtomValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiBoolean Vald_AtomValidation_GetIsDeleted(Vald_AtomValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetKeyword(Vald_AtomValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_AtomValidation_GetKeywordDefinition(Vald_AtomValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetPackageName(Vald_AtomValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetPackageShortName(Vald_AtomValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_AtomValidation_GetParent(Vald_AtomValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetQualifiedName(Vald_AtomValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_AtomValidation_GetRoot(Vald_AtomValidation self);

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiInteger Vald_AtomValidation_GetSerial(Vald_AtomValidation self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_AtomValidation_GetValidationStore(Vald_AtomValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiString Vald_AtomValidation_GetTextValue(Vald_AtomValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_AtomValidation_GetTopObject(Vald_AtomValidation self);

/**
  Constructor for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_AtomValidation Vald_AtomValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_AtomValidation Vald_AtomValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_AtomValidation_RemoveApplicationData(Vald_AtomValidation self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  Coor_Atom value
**/
extern void *Vald_AtomValidation_RemoveAtom(Vald_AtomValidation self, Coor_Atom value);

/**
  SetAttr for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_AtomValidation_Set(Vald_AtomValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_AtomValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_AtomValidation_SetAccess(Vald_AtomValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  ApiList values
**/
extern void *Vald_AtomValidation_SetApplicationData(Vald_AtomValidation self, ApiList values);

/**
  Set for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  ApiSet values
**/
extern void *Vald_AtomValidation_SetAtoms(Vald_AtomValidation self, ApiSet values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_AtomValidation self
  @param  ApiBoolean value
**/
extern void *Vald_AtomValidation_SetBooleanValue(Vald_AtomValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
extern void *Vald_AtomValidation_SetContext(Vald_AtomValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
extern void *Vald_AtomValidation_SetDetails(Vald_AtomValidation self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_AtomValidation self
  @param  ApiFloat value
**/
extern void *Vald_AtomValidation_SetFigOfMerit(Vald_AtomValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_AtomValidation self
  @param  ApiFloat value
**/
extern void *Vald_AtomValidation_SetFloatValue(Vald_AtomValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_AtomValidation self
  @param  ApiInteger value
**/
extern void *Vald_AtomValidation_SetIntValue(Vald_AtomValidation self, ApiInteger value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
extern void *Vald_AtomValidation_SetKeyword(Vald_AtomValidation self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_AtomValidation self
  @param  ApiInteger value
**/
extern void *Vald_AtomValidation_SetSerial(Vald_AtomValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
extern void *Vald_AtomValidation_SetTextValue(Vald_AtomValidation self, ApiString value);

/**
  Sorted for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns   the result
**/
extern ApiList Vald_AtomValidation_SortedAtoms(Vald_AtomValidation self);

#endif /* __incl__ccp_api_molecule_StructureValidation_AtomValidation_h__ */
