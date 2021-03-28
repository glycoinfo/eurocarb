
#ifndef __incl__ccp_api_molecule_MolStructure_Coord_h__
#define __incl__ccp_api_molecule_MolStructure_Coord_h__

#include "ccp.h"

/*
  Coordinate record for StructureModel. 
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  Impl_ApplicationData value
**/
extern void *Coor_Coord_AddApplicationData(Coor_Coord self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean complete
**/
extern void *Coor_Coord_CheckAllValid(Coor_Coord self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean complete
**/
extern void *Coor_Coord_CheckValid(Coor_Coord self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Coor_Coord_FindAllApplicationData(Coor_Coord self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Coor_Coord_FindAllApplicationData_keyval0(Coor_Coord self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Coor_Coord_FindAllApplicationData_keyval1(Coor_Coord self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Coor_Coord_FindAllApplicationData_keyval2(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Coor_Coord_FindAllApplicationData_keyval3(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
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
extern ApiList Coor_Coord_FindAllApplicationData_keyval4(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData(Coor_Coord self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval0(Coor_Coord self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval1(Coor_Coord self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval2(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval3(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
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
extern Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval4(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Coor_Coord_Get(Coor_Coord self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Coord self
  @returns   the result
**/
extern Acco_AccessObject Coor_Coord_GetAccess(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.altLocationCode

Alternative 
location code for coordinate record, serves as key for object. Default 
is a single space (' '). Non-default values will only come in when there 
are several alternative locations for a given atom.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiString Coor_Coord_GetAltLocationCode(Coor_Coord self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiList Coor_Coord_GetApplicationData(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.atom

parent link
  @param  Coor_Coord self
  @returns   the result
**/
extern Coor_Atom Coor_Coord_GetAtom(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.bFactor

X-ray 
crystallographical B-factor
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiFloat Coor_Coord_GetBFactor(Coor_Coord self);

/**
  GetByKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Coor_Coord Coor_Coord_GetByKey(Coor_Coord self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiString Coor_Coord_GetClassName(Coor_Coord self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiList Coor_Coord_GetFieldNames(Coor_Coord self);

/**
  GetFullKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Coor_Coord_GetFullKey(Coor_Coord self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiBoolean Coor_Coord_GetInConstructor(Coor_Coord self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiBoolean Coor_Coord_GetIsDeleted(Coor_Coord self);

/**
  GetLocalKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @returns  Local object key
**/
extern ApiObject Coor_Coord_GetLocalKey(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.model

Model that coordinates 
belong to. Part of key for Coord
  @param  Coor_Coord self
  @returns   the result
**/
extern Coor_Model Coor_Coord_GetModel(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.occupancy

Fractional occupancy 
of this coordinate position by the atom.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiFloat Coor_Coord_GetOccupancy(Coor_Coord self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiString Coor_Coord_GetPackageName(Coor_Coord self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiString Coor_Coord_GetPackageShortName(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.parent

link to parent object - 
synonym for atom
  @param  Coor_Coord self
  @returns   the result
**/
extern Coor_Atom Coor_Coord_GetParent(Coor_Coord self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiString Coor_Coord_GetQualifiedName(Coor_Coord self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Coor_Coord self
  @returns   the result
**/
extern Impl_MemopsRoot Coor_Coord_GetRoot(Coor_Coord self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Coor_Coord self
  @returns   the result
**/
extern Impl_TopObject Coor_Coord_GetTopObject(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.x

X coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiFloat Coor_Coord_GetX(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.y

Y coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiFloat Coor_Coord_GetY(Coor_Coord self);

/**
  Get for ccp.molecule.MolStructure.Coord.z

Z coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
extern ApiFloat Coor_Coord_GetZ(Coor_Coord self);

/**
  Constructor for ccp.molecule.MolStructure.Coord
  @param  Coor_Atom parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Coor_Coord Coor_Coord_Init(Coor_Atom parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.MolStructure.Coord
  @param  Coor_Atom parent
  @param  Coor_Model model
  @returns  the new object
**/
extern Coor_Coord Coor_Coord_Init_reqd(Coor_Atom parent, Coor_Model model);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  Impl_ApplicationData value
**/
extern void *Coor_Coord_RemoveApplicationData(Coor_Coord self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Coor_Coord_Set(Coor_Coord self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Coord self
  @param  Acco_AccessObject value
**/
extern void *Coor_Coord_SetAccess(Coor_Coord self, Acco_AccessObject value);

/**
  Set for ccp.molecule.MolStructure.Coord.altLocationCode

Alternative 
location code for coordinate record, serves as key for object. Default 
is a single space (' '). Non-default values will only come in when there 
are several alternative locations for a given atom.
  @param  Coor_Coord self
  @param  ApiString value
**/
extern void *Coor_Coord_SetAltLocationCode(Coor_Coord self, ApiString value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  ApiList values
**/
extern void *Coor_Coord_SetApplicationData(Coor_Coord self, ApiList values);

/**
  Set for ccp.molecule.MolStructure.Coord.bFactor

X-ray 
crystallographical B-factor
  @param  Coor_Coord self
  @param  ApiFloat value
**/
extern void *Coor_Coord_SetBFactor(Coor_Coord self, ApiFloat value);

/**
  Set for ccp.molecule.MolStructure.Coord.model

Model that coordinates 
belong to. Part of key for Coord
  @param  Coor_Coord self
  @param  Coor_Model value
**/
extern void *Coor_Coord_SetModel(Coor_Coord self, Coor_Model value);

/**
  Set for ccp.molecule.MolStructure.Coord.occupancy

Fractional occupancy 
of this coordinate position by the atom.
  @param  Coor_Coord self
  @param  ApiFloat value
**/
extern void *Coor_Coord_SetOccupancy(Coor_Coord self, ApiFloat value);

/**
  Set for ccp.molecule.MolStructure.Coord.x

X coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
extern void *Coor_Coord_SetX(Coor_Coord self, ApiFloat value);

/**
  Set for ccp.molecule.MolStructure.Coord.y

Y coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
extern void *Coor_Coord_SetY(Coor_Coord self, ApiFloat value);

/**
  Set for ccp.molecule.MolStructure.Coord.z

Z coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
extern void *Coor_Coord_SetZ(Coor_Coord self, ApiFloat value);

#endif /* __incl__ccp_api_molecule_MolStructure_Coord_h__ */
