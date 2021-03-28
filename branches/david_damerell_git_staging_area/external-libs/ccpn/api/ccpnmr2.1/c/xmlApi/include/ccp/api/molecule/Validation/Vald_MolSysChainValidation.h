
#ifndef __incl__ccp_api_molecule_Validation_MolSysChainValidation_h__
#define __incl__ccp_api_molecule_Validation_MolSysChainValidation_h__

#include "ccp.h"

/*
  Validation result for MolSystem.Chain
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_MolSysChainValidation_AddApplicationData(Vald_MolSysChainValidation self, Impl_ApplicationData value);

/**
  Add for ccp.molecule.Validation.MolSysChainValidation.chains

Molystem 
Chains being validated
  @param  Vald_MolSysChainValidation self
  @param  Mols_Chain value
**/
extern void *Vald_MolSysChainValidation_AddChain(Vald_MolSysChainValidation self, Mols_Chain value);

/**
  CheckAllValid for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_MolSysChainValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_MolSysChainValidation_CheckAllValid(Vald_MolSysChainValidation self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_MolSysChainValidation self
  @param  ApiBoolean complete
**/
extern void *Vald_MolSysChainValidation_CheckValid(Vald_MolSysChainValidation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData(Vald_MolSysChainValidation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData_keyval0(Vald_MolSysChainValidation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData_keyval1(Vald_MolSysChainValidation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData_keyval2(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData_keyval3(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
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
extern ApiList Vald_MolSysChainValidation_FindAllApplicationData_keyval4(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_MolSysChainValidation_FindAllChains(Vald_MolSysChainValidation self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_MolSysChainValidation_FindAllChains_keyval0(Vald_MolSysChainValidation self);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_MolSysChainValidation_FindAllChains_keyval1(Vald_MolSysChainValidation self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_MolSysChainValidation_FindAllChains_keyval2(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_MolSysChainValidation_FindAllChains_keyval3(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
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
extern ApiSet Vald_MolSysChainValidation_FindAllChains_keyval4(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData(Vald_MolSysChainValidation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData_keyval0(Vald_MolSysChainValidation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData_keyval1(Vald_MolSysChainValidation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData_keyval2(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData_keyval3(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
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
extern Impl_ApplicationData Vald_MolSysChainValidation_FindFirstApplicationData_keyval4(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain(Vald_MolSysChainValidation self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain_keyval0(Vald_MolSysChainValidation self);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain_keyval1(Vald_MolSysChainValidation self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain_keyval2(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain_keyval3(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
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
extern Mols_Chain Vald_MolSysChainValidation_FindFirstChain_keyval4(Vald_MolSysChainValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_MolSysChainValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_MolSysChainValidation_Get(Vald_MolSysChainValidation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_MolSysChainValidation_GetAccess(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Acco_AccessObject Vald_MolSysChainValidation_GetActiveAccess(Vald_MolSysChainValidation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiList Vald_MolSysChainValidation_GetApplicationData(Vald_MolSysChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_MolSysChainValidation_GetBooleanValue(Vald_MolSysChainValidation self);

/**
  GetByKey for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_MolSysChainValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_MolSysChainValidation Vald_MolSysChainValidation_GetByKey(Vald_MolSysChainValidation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.Validation.MolSysChainValidation.chains

Molystem 
Chains being validated
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiSet Vald_MolSysChainValidation_GetChains(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetClassName(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetContext(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetDetails(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiList Vald_MolSysChainValidation_GetFieldNames(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiFloat Vald_MolSysChainValidation_GetFigOfMerit(Vald_MolSysChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiFloat Vald_MolSysChainValidation_GetFloatValue(Vald_MolSysChainValidation self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_MolSysChainValidation_GetInConstructor(Vald_MolSysChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiInteger Vald_MolSysChainValidation_GetIntValue(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiBoolean Vald_MolSysChainValidation_GetIsDeleted(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetKeyword(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Kwdf_KeywordDefinition Vald_MolSysChainValidation_GetKeywordDefinition(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetPackageName(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetPackageShortName(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_MolSysChainValidation_GetParent(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetQualifiedName(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_MolSysChainValidation_GetRoot(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiInteger Vald_MolSysChainValidation_GetSerial(Vald_MolSysChainValidation self);

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiString Vald_MolSysChainValidation_GetTextValue(Vald_MolSysChainValidation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Impl_TopObject Vald_MolSysChainValidation_GetTopObject(Vald_MolSysChainValidation self);

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern Vald_ValidationStore Vald_MolSysChainValidation_GetValidationStore(Vald_MolSysChainValidation self);

/**
  Constructor for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_MolSysChainValidation Vald_MolSysChainValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_MolSysChainValidation Vald_MolSysChainValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  Impl_ApplicationData value
**/
extern void *Vald_MolSysChainValidation_RemoveApplicationData(Vald_MolSysChainValidation self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @param  Mols_Chain value
**/
extern void *Vald_MolSysChainValidation_RemoveChain(Vald_MolSysChainValidation self, Mols_Chain value);

/**
  SetAttr for ccp.molecule.Validation.MolSysChainValidation
  @param  Vald_MolSysChainValidation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_MolSysChainValidation_Set(Vald_MolSysChainValidation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_MolSysChainValidation self
  @param  Acco_AccessObject value
**/
extern void *Vald_MolSysChainValidation_SetAccess(Vald_MolSysChainValidation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysChainValidation self
  @param  ApiList values
**/
extern void *Vald_MolSysChainValidation_SetApplicationData(Vald_MolSysChainValidation self, ApiList values);

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_MolSysChainValidation self
  @param  ApiBoolean value
**/
extern void *Vald_MolSysChainValidation_SetBooleanValue(Vald_MolSysChainValidation self, ApiBoolean value);

/**
  Set for ccp.molecule.Validation.MolSysChainValidation.chains

Molystem 
Chains being validated
  @param  Vald_MolSysChainValidation self
  @param  ApiSet values
**/
extern void *Vald_MolSysChainValidation_SetChains(Vald_MolSysChainValidation self, ApiSet values);

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_MolSysChainValidation self
  @param  ApiString value
**/
extern void *Vald_MolSysChainValidation_SetContext(Vald_MolSysChainValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_MolSysChainValidation self
  @param  ApiString value
**/
extern void *Vald_MolSysChainValidation_SetDetails(Vald_MolSysChainValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_MolSysChainValidation self
  @param  ApiFloat value
**/
extern void *Vald_MolSysChainValidation_SetFigOfMerit(Vald_MolSysChainValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_MolSysChainValidation self
  @param  ApiFloat value
**/
extern void *Vald_MolSysChainValidation_SetFloatValue(Vald_MolSysChainValidation self, ApiFloat value);

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_MolSysChainValidation self
  @param  ApiInteger value
**/
extern void *Vald_MolSysChainValidation_SetIntValue(Vald_MolSysChainValidation self, ApiInteger value);

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_MolSysChainValidation self
  @param  ApiString value
**/
extern void *Vald_MolSysChainValidation_SetKeyword(Vald_MolSysChainValidation self, ApiString value);

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_MolSysChainValidation self
  @param  ApiInteger value
**/
extern void *Vald_MolSysChainValidation_SetSerial(Vald_MolSysChainValidation self, ApiInteger value);

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_MolSysChainValidation self
  @param  ApiString value
**/
extern void *Vald_MolSysChainValidation_SetTextValue(Vald_MolSysChainValidation self, ApiString value);

/**
  Sorted for 
ccp.molecule.Validation.MolSysChainValidation.chains

Molystem Chains 
being validated
  @param  Vald_MolSysChainValidation self
  @returns   the result
**/
extern ApiList Vald_MolSysChainValidation_SortedChains(Vald_MolSysChainValidation self);

#endif /* __incl__ccp_api_molecule_Validation_MolSysChainValidation_h__ */
