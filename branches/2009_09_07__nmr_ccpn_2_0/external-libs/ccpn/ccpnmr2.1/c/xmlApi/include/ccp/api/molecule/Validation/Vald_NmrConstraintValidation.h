
#ifndef __incl__ccp_api_molecule_Validation_NmrConstraintValidation_h__
#define __incl__ccp_api_molecule_Validation_NmrConstraintValidation_h__

#include "ccp.h"

/*
  Validation result for one or more NmrConstraint.AbstractConstraints
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_NmrConstraintValidation_AddApplicationData(Vald_NmrConstraintValidation self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  Nmrc_AbstractConstraint value
**/
extern void *Vald_NmrConstraintValidation_AddNmrConstraint(Vald_NmrConstraintValidation self, Nmrc_AbstractConstraint value);

/**
  CheckAllValid for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_NmrConstraintValidation_CheckAllValid(Vald_NmrConstraintValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_NmrConstraintValidation_CheckValid(Vald_NmrConstraintValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData(Vald_NmrConstraintValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval0(Vald_NmrConstraintValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
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
extern ApiList Vald_NmrConstraintValidation_FindAllApplicationData_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints(Vald_NmrConstraintValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval0(Vald_NmrConstraintValidation self);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
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
extern ApiSet Vald_NmrConstraintValidation_FindAllNmrConstraints_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData(Vald_NmrConstraintValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval0(Vald_NmrConstraintValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
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
extern Impl_ApplicationData Vald_NmrConstraintValidation_FindFirstApplicationData_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint(Vald_NmrConstraintValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval0(Vald_NmrConstraintValidation self);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval1(Vald_NmrConstraintValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval2(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval3(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
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
extern Nmrc_AbstractConstraint Vald_NmrConstraintValidation_FindFirstNmrConstraint_keyval4(Vald_NmrConstraintValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_NmrConstraintValidation_Get(Vald_NmrConstraintValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_NmrConstraintValidation_GetAccess(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_NmrConstraintValidation_GetActiveAccess(Vald_NmrConstraintValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiList Vald_NmrConstraintValidation_GetApplicationData(Vald_NmrConstraintValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiBoolean Vald_NmrConstraintValidation_GetBooleanValue(Vald_NmrConstraintValidation self);

/**
  GetByKey for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_NmrConstraintValidation Vald_NmrConstraintValidation_GetByKey(Vald_NmrConstraintValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetClassName(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetContext(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetDetails(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiList Vald_NmrConstraintValidation_GetFieldNames(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiFloat Vald_NmrConstraintValidation_GetFigOfMerit(Vald_NmrConstraintValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiFloat Vald_NmrConstraintValidation_GetFloatValue(Vald_NmrConstraintValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiBoolean Vald_NmrConstraintValidation_GetInConstructor(Vald_NmrConstraintValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiInteger Vald_NmrConstraintValidation_GetIntValue(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiBoolean Vald_NmrConstraintValidation_GetIsDeleted(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetKeyword(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_NmrConstraintValidation_GetKeywordDefinition(Vald_NmrConstraintValidation self);

/**
  Get for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiSet Vald_NmrConstraintValidation_GetNmrConstraints(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetPackageName(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetPackageShortName(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_NmrConstraintValidation_GetParent(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetQualifiedName(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_NmrConstraintValidation_GetRoot(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiInteger Vald_NmrConstraintValidation_GetSerial(Vald_NmrConstraintValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiString Vald_NmrConstraintValidation_GetTextValue(Vald_NmrConstraintValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_NmrConstraintValidation_GetTopObject(Vald_NmrConstraintValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_NmrConstraintValidation_GetValidationStore(Vald_NmrConstraintValidation self);

/**
  Constructor for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_NmrConstraintValidation Vald_NmrConstraintValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_NmrConstraintValidation Vald_NmrConstraintValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_NmrConstraintValidation_RemoveApplicationData(Vald_NmrConstraintValidation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  Nmrc_AbstractConstraint value
**/
extern void *Vald_NmrConstraintValidation_RemoveNmrConstraint(Vald_NmrConstraintValidation self, Nmrc_AbstractConstraint value);

/**
  SetAttr for ccp.molecule.Validation.NmrConstraintValidation
  @param  Vald_NmrConstraintValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_NmrConstraintValidation_Set(Vald_NmrConstraintValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_NmrConstraintValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_NmrConstraintValidation_SetAccess(Vald_NmrConstraintValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_NmrConstraintValidation self
  @param  ApiList values
**/
extern void *Vald_NmrConstraintValidation_SetApplicationData(Vald_NmrConstraintValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_NmrConstraintValidation self
  @param  ApiBoolean value
**/
extern void *Vald_NmrConstraintValidation_SetBooleanValue(Vald_NmrConstraintValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
extern void *Vald_NmrConstraintValidation_SetContext(Vald_NmrConstraintValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
extern void *Vald_NmrConstraintValidation_SetDetails(Vald_NmrConstraintValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_NmrConstraintValidation self
  @param  ApiFloat value
**/
extern void *Vald_NmrConstraintValidation_SetFigOfMerit(Vald_NmrConstraintValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiFloat value
**/
extern void *Vald_NmrConstraintValidation_SetFloatValue(Vald_NmrConstraintValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiInteger value
**/
extern void *Vald_NmrConstraintValidation_SetIntValue(Vald_NmrConstraintValidation self, ApiInteger value);

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
extern void *Vald_NmrConstraintValidation_SetKeyword(Vald_NmrConstraintValidation self, ApiString value);

/**
  Set for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @param  ApiSet values
**/
extern void *Vald_NmrConstraintValidation_SetNmrConstraints(Vald_NmrConstraintValidation self, ApiSet values);

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_NmrConstraintValidation self
  @param  ApiInteger value
**/
extern void *Vald_NmrConstraintValidation_SetSerial(Vald_NmrConstraintValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_NmrConstraintValidation self
  @param  ApiString value
**/
extern void *Vald_NmrConstraintValidation_SetTextValue(Vald_NmrConstraintValidation self, ApiString value);

/**
  Sorted for 
ccp.molecule.Validation.NmrConstraintValidation.nmrConstraints

NmrConstraints 
being validated
  @param  Vald_NmrConstraintValidation self
  @returns   the result
**/
extern ApiList Vald_NmrConstraintValidation_SortedNmrConstraints(Vald_NmrConstraintValidation self);

#endif /* __incl__ccp_api_molecule_Validation_NmrConstraintValidation_h__ */
