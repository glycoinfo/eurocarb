
#ifndef __incl__ccp_api_molecule_ChemComp_ChemTorsion_h__
#define __incl__ccp_api_molecule_ChemComp_ChemTorsion_h__

#include "ccp.h"

/*
  Tosrion angle between four ChenmAtoms. Serves as definition for reference.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemTorsion_AddApplicationData(Chem_ChemTorsion self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemTorsion_CheckAllValid(Chem_ChemTorsion self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemTorsion_CheckValid(Chem_ChemTorsion self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllApplicationData(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllApplicationData_keyval0(Chem_ChemTorsion self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllApplicationData_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllApplicationData_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllApplicationData_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
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
extern ApiList Chem_ChemTorsion_FindAllApplicationData_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllChemAtoms(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval0(Chem_ChemTorsion self);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
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
extern ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemTorsion_FindAllSysNames(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemTorsion_FindAllSysNames_keyval0(Chem_ChemTorsion self);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemTorsion_FindAllSysNames_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemTorsion_FindAllSysNames_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_ChemTorsion_FindAllSysNames_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
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
extern ApiSet Chem_ChemTorsion_FindAllSysNames_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval0(Chem_ChemTorsion self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
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
extern Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval0(Chem_ChemTorsion self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
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
extern Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName(Chem_ChemTorsion self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval0(Chem_ChemTorsion self);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval1(Chem_ChemTorsion self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
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
extern Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_ChemTorsion_Get(Chem_ChemTorsion self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern Acco_AccessObject Chem_ChemTorsion_GetAccess(Chem_ChemTorsion self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiList Chem_ChemTorsion_GetApplicationData(Chem_ChemTorsion self);

/**
  GetByKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_ChemTorsion Chem_ChemTorsion_GetByKey(Chem_ChemTorsion self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms 
making up ChemTorsion
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiList Chem_ChemTorsion_GetChemAtoms(Chem_ChemTorsion self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.chemComp

parent link
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemTorsion_GetChemComp(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiString Chem_ChemTorsion_GetClassName(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiList Chem_ChemTorsion_GetFieldNames(Chem_ChemTorsion self);

/**
  GetFullKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_ChemTorsion_GetFullKey(Chem_ChemTorsion self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiBoolean Chem_ChemTorsion_GetInConstructor(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiBoolean Chem_ChemTorsion_GetIsDeleted(Chem_ChemTorsion self);

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  Local object key
**/
extern ApiObject Chem_ChemTorsion_GetLocalKey(Chem_ChemTorsion self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.name

name of ChemTorsion
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiString Chem_ChemTorsion_GetName(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiString Chem_ChemTorsion_GetPackageName(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiString Chem_ChemTorsion_GetPackageShortName(Chem_ChemTorsion self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.parent

link to parent object 
- synonym for chemComp
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern Chem_ChemComp Chem_ChemTorsion_GetParent(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiString Chem_ChemTorsion_GetQualifiedName(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_ChemTorsion_GetRoot(Chem_ChemTorsion self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames 
that apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiSet Chem_ChemTorsion_GetSysNames(Chem_ChemTorsion self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern Impl_TopObject Chem_ChemTorsion_GetTopObject(Chem_ChemTorsion self);

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_ChemTorsion Chem_ChemTorsion_Init(Chem_ChemComp parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp parent
  @param  ApiList chemAtoms
  @returns  the new object
**/
extern Chem_ChemTorsion Chem_ChemTorsion_Init_reqd(Chem_ChemComp parent, ApiList chemAtoms);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemTorsion_RemoveApplicationData(Chem_ChemTorsion self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_ChemTorsion_Set(Chem_ChemTorsion self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsion self
  @param  Acco_AccessObject value
**/
extern void *Chem_ChemTorsion_SetAccess(Chem_ChemTorsion self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  ApiList values
**/
extern void *Chem_ChemTorsion_SetApplicationData(Chem_ChemTorsion self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms 
making up ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiList values
**/
extern void *Chem_ChemTorsion_SetChemAtoms(Chem_ChemTorsion self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.name

name of ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString value
**/
extern void *Chem_ChemTorsion_SetName(Chem_ChemTorsion self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames 
that apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiSet values
**/
extern void *Chem_ChemTorsion_SetSysNames(Chem_ChemTorsion self, ApiSet values);

/**
  Sorted for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns   the result
**/
extern ApiList Chem_ChemTorsion_SortedSysNames(Chem_ChemTorsion self);

#endif /* __incl__ccp_api_molecule_ChemComp_ChemTorsion_h__ */
