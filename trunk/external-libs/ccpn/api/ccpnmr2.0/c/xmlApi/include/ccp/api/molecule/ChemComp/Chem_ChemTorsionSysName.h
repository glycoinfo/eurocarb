
#ifndef __incl__ccp_api_molecule_ChemComp_ChemTorsionSysName_h__
#define __incl__ccp_api_molecule_ChemComp_ChemTorsionSysName_h__

#include "ccp.h"

/*
  Systematic name of ChemTorsion accordign to NamingSystem
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemTorsionSysName_AddApplicationData(Chem_ChemTorsionSysName self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemTorsionSysName_CheckAllValid(Chem_ChemTorsionSysName self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  ApiBoolean complete
**/
extern void *Chem_ChemTorsionSysName_CheckValid(Chem_ChemTorsionSysName self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData(Chem_ChemTorsionSysName self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData_keyval0(Chem_ChemTorsionSysName self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData_keyval1(Chem_ChemTorsionSysName self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData_keyval2(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData_keyval3(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
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
extern ApiList Chem_ChemTorsionSysName_FindAllApplicationData_keyval4(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData(Chem_ChemTorsionSysName self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData_keyval0(Chem_ChemTorsionSysName self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData_keyval1(Chem_ChemTorsionSysName self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData_keyval2(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData_keyval3(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
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
extern Impl_ApplicationData Chem_ChemTorsionSysName_FindFirstApplicationData_keyval4(Chem_ChemTorsionSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_ChemTorsionSysName_Get(Chem_ChemTorsionSysName self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Acco_AccessObject Chem_ChemTorsionSysName_GetAccess(Chem_ChemTorsionSysName self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiList Chem_ChemTorsionSysName_GetApplicationData(Chem_ChemTorsionSysName self);

/**
  GetByKey for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsionSysName_GetByKey(Chem_ChemTorsionSysName self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for 
ccp.molecule.ChemComp.ChemTorsionSysName.chemTorsion

ChemTorsion that 
ChemTorsionSysName applies to
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Chem_ChemTorsion Chem_ChemTorsionSysName_GetChemTorsion(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiString Chem_ChemTorsionSysName_GetClassName(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiList Chem_ChemTorsionSysName_GetFieldNames(Chem_ChemTorsionSysName self);

/**
  GetFullKey for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_ChemTorsionSysName_GetFullKey(Chem_ChemTorsionSysName self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiBoolean Chem_ChemTorsionSysName_GetInConstructor(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiBoolean Chem_ChemTorsionSysName_GetIsDeleted(Chem_ChemTorsionSysName self);

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @returns  Local object key
**/
extern ApiObject Chem_ChemTorsionSysName_GetLocalKey(Chem_ChemTorsionSysName self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsionSysName.namingSystem

parent 
link
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Chem_NamingSystem Chem_ChemTorsionSysName_GetNamingSystem(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiString Chem_ChemTorsionSysName_GetPackageName(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiString Chem_ChemTorsionSysName_GetPackageShortName(Chem_ChemTorsionSysName self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsionSysName.parent

link to parent 
object - synonym for namingSystem
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Chem_NamingSystem Chem_ChemTorsionSysName_GetParent(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiString Chem_ChemTorsionSysName_GetQualifiedName(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_ChemTorsionSysName_GetRoot(Chem_ChemTorsionSysName self);

/**
  Get for ccp.molecule.ChemComp.ChemTorsionSysName.sysName

Systematic 
name according to naming system
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern ApiString Chem_ChemTorsionSysName_GetSysName(Chem_ChemTorsionSysName self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_ChemTorsionSysName self
  @returns   the result
**/
extern Impl_TopObject Chem_ChemTorsionSysName_GetTopObject(Chem_ChemTorsionSysName self);

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_NamingSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsionSysName_Init(Chem_NamingSystem parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_NamingSystem parent
  @param  Chem_ChemTorsion chemTorsion
  @returns  the new object
**/
extern Chem_ChemTorsionSysName Chem_ChemTorsionSysName_Init_reqd(Chem_NamingSystem parent, Chem_ChemTorsion chemTorsion);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  Impl_ApplicationData value
**/
extern void *Chem_ChemTorsionSysName_RemoveApplicationData(Chem_ChemTorsionSysName self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_ChemTorsionSysName self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_ChemTorsionSysName_Set(Chem_ChemTorsionSysName self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsionSysName self
  @param  Acco_AccessObject value
**/
extern void *Chem_ChemTorsionSysName_SetAccess(Chem_ChemTorsionSysName self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsionSysName self
  @param  ApiList values
**/
extern void *Chem_ChemTorsionSysName_SetApplicationData(Chem_ChemTorsionSysName self, ApiList values);

/**
  Set for 
ccp.molecule.ChemComp.ChemTorsionSysName.chemTorsion

ChemTorsion that 
ChemTorsionSysName applies to
  @param  Chem_ChemTorsionSysName self
  @param  Chem_ChemTorsion value
**/
extern void *Chem_ChemTorsionSysName_SetChemTorsion(Chem_ChemTorsionSysName self, Chem_ChemTorsion value);

/**
  Set for ccp.molecule.ChemComp.ChemTorsionSysName.sysName

Systematic 
name according to naming system
  @param  Chem_ChemTorsionSysName self
  @param  ApiString value
**/
extern void *Chem_ChemTorsionSysName_SetSysName(Chem_ChemTorsionSysName self, ApiString value);

#endif /* __incl__ccp_api_molecule_ChemComp_ChemTorsionSysName_h__ */
