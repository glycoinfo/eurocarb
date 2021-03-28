
#ifndef __incl__ccp_api_molecule_Molecule_MolResLinkEnd_h__
#define __incl__ccp_api_molecule_Molecule_MolResLinkEnd_h__

#include "ccp.h"

/*
  The MolResidue end (Link End) of a bond to another MolResidue
  The MolResLinkEnds corresponding to a MolResidue are created automatically when the MolResidue is created.
  Note that MolResLinkEnds can neither be created nor deleted while their ancestor Molecule is linked to one or more chains.
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MolResLinkEnd_AddApplicationData(Mole_MolResLinkEnd self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiBoolean complete
**/
extern void *Mole_MolResLinkEnd_CheckAllValid(Mole_MolResLinkEnd self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiBoolean complete
**/
extern void *Mole_MolResLinkEnd_CheckValid(Mole_MolResLinkEnd self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData(Mole_MolResLinkEnd self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData_keyval0(Mole_MolResLinkEnd self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData_keyval1(Mole_MolResLinkEnd self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData_keyval2(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData_keyval3(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
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
extern ApiList Mole_MolResLinkEnd_FindAllApplicationData_keyval4(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData(Mole_MolResLinkEnd self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData_keyval0(Mole_MolResLinkEnd self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData_keyval1(Mole_MolResLinkEnd self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData_keyval2(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData_keyval3(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
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
extern Impl_ApplicationData Mole_MolResLinkEnd_FindFirstApplicationData_keyval4(Mole_MolResLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Mole_MolResLinkEnd_Get(Mole_MolResLinkEnd self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Acco_AccessObject Mole_MolResLinkEnd_GetAccess(Mole_MolResLinkEnd self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiList Mole_MolResLinkEnd_GetApplicationData(Mole_MolResLinkEnd self);

/**
  GetByKey for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Mole_MolResLinkEnd Mole_MolResLinkEnd_GetByKey(Mole_MolResLinkEnd self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiString Mole_MolResLinkEnd_GetClassName(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiList Mole_MolResLinkEnd_GetFieldNames(Mole_MolResLinkEnd self);

/**
  GetFullKey for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Mole_MolResLinkEnd_GetFullKey(Mole_MolResLinkEnd self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiBoolean Mole_MolResLinkEnd_GetInConstructor(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiBoolean Mole_MolResLinkEnd_GetIsDeleted(Mole_MolResLinkEnd self);

/**
  Get for ccp.molecule.Molecule.MolResLinkEnd.linkCode

Link Code 
identifying Link End for MolResidue. Part of Key for ChemComp.LinkEnd
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiString Mole_MolResLinkEnd_GetLinkCode(Mole_MolResLinkEnd self);

/**
  getter for derived link linkEnd
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Chem_LinkEnd Mole_MolResLinkEnd_GetLinkEnd(Mole_MolResLinkEnd self);

/**
  GetLocalKey for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @returns  Local object key
**/
extern ApiObject Mole_MolResLinkEnd_GetLocalKey(Mole_MolResLinkEnd self);

/**
  Get for ccp.molecule.Molecule.MolResLinkEnd.molResLink

InterChemComp 
link made up from LinkEnds
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Mole_MolResLink Mole_MolResLinkEnd_GetMolResLink(Mole_MolResLinkEnd self);

/**
  Get for ccp.molecule.Molecule.MolResLinkEnd.molResidue

parent link
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Mole_MolResidue Mole_MolResLinkEnd_GetMolResidue(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiString Mole_MolResLinkEnd_GetPackageName(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiString Mole_MolResLinkEnd_GetPackageShortName(Mole_MolResLinkEnd self);

/**
  Get for ccp.molecule.Molecule.MolResLinkEnd.parent

link to parent 
object - synonym for molResidue
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Mole_MolResidue Mole_MolResLinkEnd_GetParent(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern ApiString Mole_MolResLinkEnd_GetQualifiedName(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Impl_MemopsRoot Mole_MolResLinkEnd_GetRoot(Mole_MolResLinkEnd self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Mole_MolResLinkEnd self
  @returns   the result
**/
extern Impl_TopObject Mole_MolResLinkEnd_GetTopObject(Mole_MolResLinkEnd self);

/**
  Constructor for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Mole_MolResLinkEnd Mole_MolResLinkEnd_Init(Mole_MolResidue parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResidue parent
  @param  char * linkCode
  @returns  the new object
**/
extern Mole_MolResLinkEnd Mole_MolResLinkEnd_Init_reqd(Mole_MolResidue parent, char * linkCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Mole_MolResLinkEnd_RemoveApplicationData(Mole_MolResLinkEnd self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.Molecule.MolResLinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Mole_MolResLinkEnd_Set(Mole_MolResLinkEnd self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResLinkEnd self
  @param  Acco_AccessObject value
**/
extern void *Mole_MolResLinkEnd_SetAccess(Mole_MolResLinkEnd self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLinkEnd self
  @param  ApiList values
**/
extern void *Mole_MolResLinkEnd_SetApplicationData(Mole_MolResLinkEnd self, ApiList values);

/**
  Set for ccp.molecule.Molecule.MolResLinkEnd.linkCode

Link Code 
identifying Link End for MolResidue. Part of Key for ChemComp.LinkEnd
  @param  Mole_MolResLinkEnd self
  @param  ApiString value
**/
extern void *Mole_MolResLinkEnd_SetLinkCode(Mole_MolResLinkEnd self, ApiString value);

/**
  Set for ccp.molecule.Molecule.MolResLinkEnd.molResLink

InterChemComp 
link made up from LinkEnds
  @param  Mole_MolResLinkEnd self
  @param  Mole_MolResLink value
**/
extern void *Mole_MolResLinkEnd_SetMolResLink(Mole_MolResLinkEnd self, Mole_MolResLink value);

#endif /* __incl__ccp_api_molecule_Molecule_MolResLinkEnd_h__ */
