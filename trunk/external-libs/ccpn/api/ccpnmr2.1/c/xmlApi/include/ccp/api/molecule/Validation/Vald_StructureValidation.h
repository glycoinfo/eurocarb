
#ifndef __incl__ccp_api_molecule_Validation_StructureValidation_h__
#define __incl__ccp_api_molecule_Validation_StructureValidation_h__

#include "ccp.h"

/*
  Validation result for one or more MolStructures
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_StructureValidation_AddApplicationData(Vald_StructureValidation self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.Validation.StructureValidation.models

Structure 
models being validated
  @param  Vald_StructureValidation self
  @param  Coor_Model value
**/
extern void *Vald_StructureValidation_AddModel(Vald_StructureValidation self, Coor_Model value);

/**
  CheckAllValid for ccp.molecule.Validation.StructureValidation
  @param  Vald_StructureValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_StructureValidation_CheckAllValid(Vald_StructureValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Validation.StructureValidation
  @param  Vald_StructureValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_StructureValidation_CheckValid(Vald_StructureValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_StructureValidation_FindAllApplicationData(Vald_StructureValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_StructureValidation_FindAllApplicationData_keyval0(Vald_StructureValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_StructureValidation_FindAllApplicationData_keyval1(Vald_StructureValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_StructureValidation_FindAllApplicationData_keyval2(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_StructureValidation_FindAllApplicationData_keyval3(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
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
extern ApiList Vald_StructureValidation_FindAllApplicationData_keyval4(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_StructureValidation_FindAllModels(Vald_StructureValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_StructureValidation_FindAllModels_keyval0(Vald_StructureValidation self);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_StructureValidation_FindAllModels_keyval1(Vald_StructureValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_StructureValidation_FindAllModels_keyval2(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_StructureValidation_FindAllModels_keyval3(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
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
extern ApiSet Vald_StructureValidation_FindAllModels_keyval4(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData(Vald_StructureValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData_keyval0(Vald_StructureValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData_keyval1(Vald_StructureValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData_keyval2(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData_keyval3(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
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
extern Impl_ApplicationData Vald_StructureValidation_FindFirstApplicationData_keyval4(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Vald_StructureValidation_FindFirstModel(Vald_StructureValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Vald_StructureValidation_FindFirstModel_keyval0(Vald_StructureValidation self);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Vald_StructureValidation_FindFirstModel_keyval1(Vald_StructureValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Vald_StructureValidation_FindFirstModel_keyval2(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Vald_StructureValidation_FindFirstModel_keyval3(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.Validation.StructureValidation.models

Structure models 
being validated
  @param  Vald_StructureValidation self
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
extern Coor_Model Vald_StructureValidation_FindFirstModel_keyval4(Vald_StructureValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Validation.StructureValidation
  @param  Vald_StructureValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_StructureValidation_Get(Vald_StructureValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_StructureValidation_GetAccess(Vald_StructureValidation self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_StructureValidation_GetActiveAccess(Vald_StructureValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiList Vald_StructureValidation_GetApplicationData(Vald_StructureValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiBoolean Vald_StructureValidation_GetBooleanValue(Vald_StructureValidation self);

/**
  GetByKey for ccp.molecule.Validation.StructureValidation
  @param  Vald_StructureValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_StructureValidation Vald_StructureValidation_GetByKey(Vald_StructureValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetClassName(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetContext(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetDetails(Vald_StructureValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiList Vald_StructureValidation_GetFieldNames(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiFloat Vald_StructureValidation_GetFigOfMerit(Vald_StructureValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiFloat Vald_StructureValidation_GetFloatValue(Vald_StructureValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiBoolean Vald_StructureValidation_GetInConstructor(Vald_StructureValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiInteger Vald_StructureValidation_GetIntValue(Vald_StructureValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiBoolean Vald_StructureValidation_GetIsDeleted(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetKeyword(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_StructureValidation_GetKeywordDefinition(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.StructureValidation.models

Structure 
models being validated
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiSet Vald_StructureValidation_GetModels(Vald_StructureValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetPackageName(Vald_StructureValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetPackageShortName(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_StructureValidation_GetParent(Vald_StructureValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetQualifiedName(Vald_StructureValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_StructureValidation_GetRoot(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiInteger Vald_StructureValidation_GetSerial(Vald_StructureValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiString Vald_StructureValidation_GetTextValue(Vald_StructureValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_StructureValidation_GetTopObject(Vald_StructureValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_StructureValidation_GetValidationStore(Vald_StructureValidation self);

/**
  Constructor for ccp.molecule.Validation.StructureValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_StructureValidation Vald_StructureValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Validation.StructureValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_StructureValidation Vald_StructureValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_StructureValidation_RemoveApplicationData(Vald_StructureValidation self, Impl_ApplicationData value);

/**
  Remove for ccp.molecule.Validation.StructureValidation.models

Structure 
models being validated
  @param  Vald_StructureValidation self
  @param  Coor_Model value
**/
extern void *Vald_StructureValidation_RemoveModel(Vald_StructureValidation self, Coor_Model value);

/**
  SetAttr for ccp.molecule.Validation.StructureValidation
  @param  Vald_StructureValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_StructureValidation_Set(Vald_StructureValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_StructureValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_StructureValidation_SetAccess(Vald_StructureValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_StructureValidation self
  @param  ApiList values
**/
extern void *Vald_StructureValidation_SetApplicationData(Vald_StructureValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_StructureValidation self
  @param  ApiBoolean value
**/
extern void *Vald_StructureValidation_SetBooleanValue(Vald_StructureValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_StructureValidation self
  @param  ApiString value
**/
extern void *Vald_StructureValidation_SetContext(Vald_StructureValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_StructureValidation self
  @param  ApiString value
**/
extern void *Vald_StructureValidation_SetDetails(Vald_StructureValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_StructureValidation self
  @param  ApiFloat value
**/
extern void *Vald_StructureValidation_SetFigOfMerit(Vald_StructureValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_StructureValidation self
  @param  ApiFloat value
**/
extern void *Vald_StructureValidation_SetFloatValue(Vald_StructureValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_StructureValidation self
  @param  ApiInteger value
**/
extern void *Vald_StructureValidation_SetIntValue(Vald_StructureValidation self, ApiInteger value);

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_StructureValidation self
  @param  ApiString value
**/
extern void *Vald_StructureValidation_SetKeyword(Vald_StructureValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.StructureValidation.models

Structure 
models being validated
  @param  Vald_StructureValidation self
  @param  ApiSet values
**/
extern void *Vald_StructureValidation_SetModels(Vald_StructureValidation self, ApiSet values);

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_StructureValidation self
  @param  ApiInteger value
**/
extern void *Vald_StructureValidation_SetSerial(Vald_StructureValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_StructureValidation self
  @param  ApiString value
**/
extern void *Vald_StructureValidation_SetTextValue(Vald_StructureValidation self, ApiString value);

/**
  Sorted for ccp.molecule.Validation.StructureValidation.models

Structure 
models being validated
  @param  Vald_StructureValidation self
  @returns   the result
**/
extern ApiList Vald_StructureValidation_SortedModels(Vald_StructureValidation self);

#endif /* __incl__ccp_api_molecule_Validation_StructureValidation_h__ */
