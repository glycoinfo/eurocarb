
#ifndef __incl__ccp_api_molecule_ChemComp_ChemAngle_h__
#define __incl__ccp_api_molecule_ChemComp_ChemAngle_h__

#include "ccp.h"

/*
  Angle between chemAtoms. Serrves as definition for reference.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemAngle_AddApplicationData(Chem_ChemAngle self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemAngle_CheckAllValid(Chem_ChemAngle self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemAngle_CheckValid(Chem_ChemAngle self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllApplicationData(Chem_ChemAngle self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllApplicationData_keyval0(Chem_ChemAngle self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllApplicationData_keyval1(Chem_ChemAngle self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllApplicationData_keyval2(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllApplicationData_keyval3(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
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
extern ApiList Chem_ChemAngle_FindAllApplicationData_keyval4(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllChemAtoms(Chem_ChemAngle self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllChemAtoms_keyval0(Chem_ChemAngle self);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllChemAtoms_keyval1(Chem_ChemAngle self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllChemAtoms_keyval2(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemAngle_FindAllChemAtoms_keyval3(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
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
extern ApiList Chem_ChemAngle_FindAllChemAtoms_keyval4(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData(Chem_ChemAngle self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData_keyval0(Chem_ChemAngle self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData_keyval1(Chem_ChemAngle self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData_keyval2(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData_keyval3(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
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
extern Impl_ApplicationData Chem_ChemAngle_FindFirstApplicationData_keyval4(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom(Chem_ChemAngle self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom_keyval0(Chem_ChemAngle self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom_keyval1(Chem_ChemAngle self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom_keyval2(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom_keyval3(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms making up 
ChemAngles
  @param  Chem_ChemAngle self
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
extern Chem_AbstractChemAtom Chem_ChemAngle_FindFirstChemAtom_keyval4(Chem_ChemAngle self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_ChemAngle_Get(Chem_ChemAngle self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Acco_AccessObject Chem_ChemAngle_GetAccess(Chem_ChemAngle self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Acco_AccessObject Chem_ChemAngle_GetActiveAccess(Chem_ChemAngle self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiList Chem_ChemAngle_GetApplicationData(Chem_ChemAngle self);

/**
  GetByKey for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_ChemAngle Chem_ChemAngle_GetByKey(Chem_ChemAngle self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiList Chem_ChemAngle_GetChemAtoms(Chem_ChemAngle self);

/**
  Get for ccp.molecule.ChemComp.ChemAngle.chemComp

parent link
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemAngle_GetChemComp(Chem_ChemAngle self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiString Chem_ChemAngle_GetClassName(Chem_ChemAngle self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiList Chem_ChemAngle_GetFieldNames(Chem_ChemAngle self);

/**
  GetFullKey for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_ChemAngle_GetFullKey(Chem_ChemAngle self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiBoolean Chem_ChemAngle_GetInConstructor(Chem_ChemAngle self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiBoolean Chem_ChemAngle_GetIsDeleted(Chem_ChemAngle self);

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @returns  Local object key
**/
extern ApiObject Chem_ChemAngle_GetLocalKey(Chem_ChemAngle self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiString Chem_ChemAngle_GetPackageName(Chem_ChemAngle self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiString Chem_ChemAngle_GetPackageShortName(Chem_ChemAngle self);

/**
  Get for ccp.molecule.ChemComp.ChemAngle.parent

link to parent object - 
synonym for chemComp
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemAngle_GetParent(Chem_ChemAngle self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern ApiString Chem_ChemAngle_GetQualifiedName(Chem_ChemAngle self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_ChemAngle_GetRoot(Chem_ChemAngle self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_ChemAngle self
  @returns   the result
**/
extern Impl_TopObject Chem_ChemAngle_GetTopObject(Chem_ChemAngle self);

/**
  Constructor for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_ChemAngle Chem_ChemAngle_Init(Chem_ChemComp parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemComp parent
  @param  ApiList chemAtoms
  @returns  the new object
**/
extern Chem_ChemAngle Chem_ChemAngle_Init_reqd(Chem_ChemComp parent, ApiList chemAtoms);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemAngle_RemoveApplicationData(Chem_ChemAngle self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemAngle self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_ChemAngle_Set(Chem_ChemAngle self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAngle self
  @param  Acco_AccessObject value
**/
extern void *Chem_ChemAngle_SetAccess(Chem_ChemAngle self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAngle self
  @param  ApiList values
**/
extern void *Chem_ChemAngle_SetApplicationData(Chem_ChemAngle self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.ChemAngle.chemAtoms

AbstractChemAtoms 
making up ChemAngles
  @param  Chem_ChemAngle self
  @param  ApiList values
**/
extern void *Chem_ChemAngle_SetChemAtoms(Chem_ChemAngle self, ApiList values);

#endif /* __incl__ccp_api_molecule_ChemComp_ChemAngle_h__ */
