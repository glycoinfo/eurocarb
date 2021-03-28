
#ifndef __incl__ccp_api_nmr_NmrConstraint_Violation_h__
#define __incl__ccp_api_nmr_NmrConstraint_Violation_h__

#include "ccp.h"

/*
  Violation of linked-to constraint, calculated over structures defined in ViolationList.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_Violation_AddApplicationData(Nmrc_Violation self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  ApiBoolean complete
**/
extern void *Nmrc_Violation_CheckAllValid(Nmrc_Violation self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  ApiBoolean complete
**/
extern void *Nmrc_Violation_CheckValid(Nmrc_Violation self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_Violation_FindAllApplicationData(Nmrc_Violation self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_Violation_FindAllApplicationData_keyval0(Nmrc_Violation self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_Violation_FindAllApplicationData_keyval1(Nmrc_Violation self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_Violation_FindAllApplicationData_keyval2(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_Violation_FindAllApplicationData_keyval3(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
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
extern ApiList Nmrc_Violation_FindAllApplicationData_keyval4(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData(Nmrc_Violation self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData_keyval0(Nmrc_Violation self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData_keyval1(Nmrc_Violation self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData_keyval2(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData_keyval3(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
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
extern Impl_ApplicationData Nmrc_Violation_FindFirstApplicationData_keyval4(Nmrc_Violation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_Violation_Get(Nmrc_Violation self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_Violation_GetAccess(Nmrc_Violation self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_Violation_GetActiveAccess(Nmrc_Violation self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiList Nmrc_Violation_GetApplicationData(Nmrc_Violation self);

/**
  GetByKey for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_Violation Nmrc_Violation_GetByKey(Nmrc_Violation self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrConstraint.Violation.calcValue

The value calculated 
for the quantity being constrained.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiFloat Nmrc_Violation_GetCalcValue(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.calcValueError

Error (standard 
deviation) in the calculated value
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiFloat Nmrc_Violation_GetCalcValueError(Nmrc_Violation self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiString Nmrc_Violation_GetClassName(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.constraint

Constraint being 
violated
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Nmrc_AbstractConstraint Nmrc_Violation_GetConstraint(Nmrc_Violation self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiList Nmrc_Violation_GetFieldNames(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.fractionViolated

Fraction of 
structures in which the constraint was violated
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiFloat Nmrc_Violation_GetFractionViolated(Nmrc_Violation self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_Violation_GetFullKey(Nmrc_Violation self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiBoolean Nmrc_Violation_GetInConstructor(Nmrc_Violation self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiBoolean Nmrc_Violation_GetIsDeleted(Nmrc_Violation self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @returns  Local object key
**/
extern ApiObject Nmrc_Violation_GetLocalKey(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.method

Method used for 
calculating violation
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Meth_Method Nmrc_Violation_GetMethod(Nmrc_Violation self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiString Nmrc_Violation_GetPackageName(Nmrc_Violation self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiString Nmrc_Violation_GetPackageShortName(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.parent

link to parent object - 
synonym for violationList
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Nmrc_ViolationList Nmrc_Violation_GetParent(Nmrc_Violation self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiString Nmrc_Violation_GetQualifiedName(Nmrc_Violation self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_Violation_GetRoot(Nmrc_Violation self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Impl_TopObject Nmrc_Violation_GetTopObject(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.violation

Value of the 
violation - the amount by which the calcValue exceeds the limit given in 
the Constraint. The violation is always given as positive. The unit is 
given by the ConstraintList containing the violated Constraint
  @param  Nmrc_Violation self
  @returns   the result
**/
extern ApiFloat Nmrc_Violation_GetViolation(Nmrc_Violation self);

/**
  Get for ccp.nmr.NmrConstraint.Violation.violationList

parent link
  @param  Nmrc_Violation self
  @returns   the result
**/
extern Nmrc_ViolationList Nmrc_Violation_GetViolationList(Nmrc_Violation self);

/**
  Constructor for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_ViolationList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_Violation Nmrc_Violation_Init(Nmrc_ViolationList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_ViolationList parent
  @param  float calcValue
  @param  Nmrc_AbstractConstraint constraint
  @param  float fractionViolated
  @param  float violation
  @returns  the new object
**/
extern Nmrc_Violation Nmrc_Violation_Init_reqd(Nmrc_ViolationList parent, float calcValue, Nmrc_AbstractConstraint constraint, float fractionViolated, float violation);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_Violation_RemoveApplicationData(Nmrc_Violation self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrConstraint.Violation
  @param  Nmrc_Violation self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_Violation_Set(Nmrc_Violation self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_Violation self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_Violation_SetAccess(Nmrc_Violation self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_Violation self
  @param  ApiList values
**/
extern void *Nmrc_Violation_SetApplicationData(Nmrc_Violation self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.Violation.calcValue

The value calculated 
for the quantity being constrained.
  @param  Nmrc_Violation self
  @param  ApiFloat value
**/
extern void *Nmrc_Violation_SetCalcValue(Nmrc_Violation self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.Violation.calcValueError

Error (standard 
deviation) in the calculated value
  @param  Nmrc_Violation self
  @param  ApiFloat value
**/
extern void *Nmrc_Violation_SetCalcValueError(Nmrc_Violation self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.Violation.constraint

Constraint being 
violated
  @param  Nmrc_Violation self
  @param  Nmrc_AbstractConstraint value
**/
extern void *Nmrc_Violation_SetConstraint(Nmrc_Violation self, Nmrc_AbstractConstraint value);

/**
  Set for ccp.nmr.NmrConstraint.Violation.fractionViolated

Fraction of 
structures in which the constraint was violated
  @param  Nmrc_Violation self
  @param  ApiFloat value
**/
extern void *Nmrc_Violation_SetFractionViolated(Nmrc_Violation self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.Violation.method

Method used for 
calculating violation
  @param  Nmrc_Violation self
  @param  Meth_Method value
**/
extern void *Nmrc_Violation_SetMethod(Nmrc_Violation self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.Violation.violation

Value of the 
violation - the amount by which the calcValue exceeds the limit given in 
the Constraint. The violation is always given as positive. The unit is 
given by the ConstraintList containing the violated Constraint
  @param  Nmrc_Violation self
  @param  ApiFloat value
**/
extern void *Nmrc_Violation_SetViolation(Nmrc_Violation self, ApiFloat value);

#endif /* __incl__ccp_api_nmr_NmrConstraint_Violation_h__ */
