
#ifndef __incl__ccp_api_molecule_Molecule_MoleculeSysName_h__
#define __incl__ccp_api_molecule_Molecule_MoleculeSysName_h__

#include "ccp.h"

/*
  Molecule systematic name in a given naming system.
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MoleculeSysName_AddApplicationData(Mole_MoleculeSysName self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  ApiBoolean complete
**/
extern void *Mole_MoleculeSysName_CheckAllValid(Mole_MoleculeSysName self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  ApiBoolean complete
**/
extern void *Mole_MoleculeSysName_CheckValid(Mole_MoleculeSysName self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MoleculeSysName_FindAllApplicationData(Mole_MoleculeSysName self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MoleculeSysName_FindAllApplicationData_keyval0(Mole_MoleculeSysName self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MoleculeSysName_FindAllApplicationData_keyval1(Mole_MoleculeSysName self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MoleculeSysName_FindAllApplicationData_keyval2(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MoleculeSysName_FindAllApplicationData_keyval3(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
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
extern ApiList Mole_MoleculeSysName_FindAllApplicationData_keyval4(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData(Mole_MoleculeSysName self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData_keyval0(Mole_MoleculeSysName self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData_keyval1(Mole_MoleculeSysName self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData_keyval2(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData_keyval3(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
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
extern Impl_ApplicationData Mole_MoleculeSysName_FindFirstApplicationData_keyval4(Mole_MoleculeSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mole_MoleculeSysName_Get(Mole_MoleculeSysName self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Acco_AccessObject Mole_MoleculeSysName_GetAccess(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Acco_AccessObject Mole_MoleculeSysName_GetActiveAccess(Mole_MoleculeSysName self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiList Mole_MoleculeSysName_GetApplicationData(Mole_MoleculeSysName self);

/**
  GetByKey for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mole_MoleculeSysName Mole_MoleculeSysName_GetByKey(Mole_MoleculeSysName self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetClassName(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiList Mole_MoleculeSysName_GetFieldNames(Mole_MoleculeSysName self);

/**
  GetFullKey for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mole_MoleculeSysName_GetFullKey(Mole_MoleculeSysName self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiBoolean Mole_MoleculeSysName_GetInConstructor(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiBoolean Mole_MoleculeSysName_GetIsDeleted(Mole_MoleculeSysName self);

/**
  GetLocalKey for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @returns  Local object key
**/
extern ApiObject Mole_MoleculeSysName_GetLocalKey(Mole_MoleculeSysName self);

/**
  Get for ccp.molecule.Molecule.MoleculeSysName.molecule

parent link
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Mole_Molecule Mole_MoleculeSysName_GetMolecule(Mole_MoleculeSysName self);

/**
  Get for ccp.molecule.Molecule.MoleculeSysName.name

Molecule systematic 
name.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetName(Mole_MoleculeSysName self);

/**
  Get for ccp.molecule.Molecule.MoleculeSysName.namingSystem

Naming 
system used for name.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetNamingSystem(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetPackageName(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetPackageShortName(Mole_MoleculeSysName self);

/**
  Get for ccp.molecule.Molecule.MoleculeSysName.parent

link to parent 
object - synonym for molecule
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Mole_Molecule Mole_MoleculeSysName_GetParent(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern ApiString Mole_MoleculeSysName_GetQualifiedName(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_MoleculeSysName_GetRoot(Mole_MoleculeSysName self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mole_MoleculeSysName self
  @returns   the result
**/
extern Impl_TopObject Mole_MoleculeSysName_GetTopObject(Mole_MoleculeSysName self);

/**
  Constructor for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MoleculeSysName Mole_MoleculeSysName_Init(Mole_Molecule parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule parent
  @param  char * namingSystem
  @returns  the new object
**/
extern Mole_MoleculeSysName Mole_MoleculeSysName_Init_reqd(Mole_Molecule parent, char * namingSystem);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MoleculeSysName_RemoveApplicationData(Mole_MoleculeSysName self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_MoleculeSysName self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mole_MoleculeSysName_Set(Mole_MoleculeSysName self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MoleculeSysName self
  @param  Acco_AccessObject value
**/
extern void *Mole_MoleculeSysName_SetAccess(Mole_MoleculeSysName self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MoleculeSysName self
  @param  ApiList values
**/
extern void *Mole_MoleculeSysName_SetApplicationData(Mole_MoleculeSysName self, ApiList values);

/**
  Set for ccp.molecule.Molecule.MoleculeSysName.name

Molecule systematic 
name.
  @param  Mole_MoleculeSysName self
  @param  ApiString value
**/
extern void *Mole_MoleculeSysName_SetName(Mole_MoleculeSysName self, ApiString value);

/**
  Set for ccp.molecule.Molecule.MoleculeSysName.namingSystem

Naming 
system used for name.
  @param  Mole_MoleculeSysName self
  @param  ApiString value
**/
extern void *Mole_MoleculeSysName_SetNamingSystem(Mole_MoleculeSysName self, ApiString value);

#endif /* __incl__ccp_api_molecule_Molecule_MoleculeSysName_h__ */
