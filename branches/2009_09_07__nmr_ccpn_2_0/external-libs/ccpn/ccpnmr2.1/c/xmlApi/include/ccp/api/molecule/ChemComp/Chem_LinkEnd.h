
#ifndef __incl__ccp_api_molecule_ChemComp_LinkEnd_h__
#define __incl__ccp_api_molecule_ChemComp_LinkEnd_h__

#include "ccp.h"

/*
  Describes one end of link to other ChemComp. 
  linkAtoms[0] and chemAtoms[0] must be included in the same set of chemCompVars. linkAtoms[1] and chemAtoms[1] must be included in the same set of ChemCompVars as linkAtoms[0] or in a subset of it.
  
  There are constraints on the linkEnd, linkEnd.linkCode, ChemCompVar and ChemCompVar.linking (see ChemCompVar documentation). To satisfy the constraints the LinkEnd must be created after the ChemCompVars are created and linked to the correct AbstractChemAtoms.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Chem_LinkEnd_AddApplicationData(Chem_LinkEnd self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean complete
**/
extern void *Chem_LinkEnd_CheckAllValid(Chem_LinkEnd self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean complete
**/
extern void *Chem_LinkEnd_CheckValid(Chem_LinkEnd self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkEnd_FindAllApplicationData(Chem_LinkEnd self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkEnd_FindAllApplicationData_keyval0(Chem_LinkEnd self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkEnd_FindAllApplicationData_keyval1(Chem_LinkEnd self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkEnd_FindAllApplicationData_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chem_LinkEnd_FindAllApplicationData_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
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
extern ApiList Chem_LinkEnd_FindAllApplicationData_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkEnd_FindAllChemCompVars(Chem_LinkEnd self, ApiMap conditions);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval0(Chem_LinkEnd self);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval1(Chem_LinkEnd self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
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
extern ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData(Chem_LinkEnd self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval0(Chem_LinkEnd self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval1(Chem_LinkEnd self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
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
extern Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar(Chem_LinkEnd self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval0(Chem_LinkEnd self);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval1(Chem_LinkEnd self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
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
extern Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chem_LinkEnd_Get(Chem_LinkEnd self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Acco_AccessObject Chem_LinkEnd_GetAccess(Chem_LinkEnd self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Acco_AccessObject Chem_LinkEnd_GetActiveAccess(Chem_LinkEnd self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiList Chem_LinkEnd_GetApplicationData(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.boundChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_ChemAtom Chem_LinkEnd_GetBoundChemAtom(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.boundLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_LinkAtom Chem_LinkEnd_GetBoundLinkAtom(Chem_LinkEnd self);

/**
  GetByKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chem_LinkEnd Chem_LinkEnd_GetByKey(Chem_LinkEnd self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.chemComp

parent link
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_ChemComp Chem_LinkEnd_GetChemComp(Chem_LinkEnd self);

/**
  getter for derived link chemCompVars
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiSet Chem_LinkEnd_GetChemCompVars(Chem_LinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiString Chem_LinkEnd_GetClassName(Chem_LinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiList Chem_LinkEnd_GetFieldNames(Chem_LinkEnd self);

/**
  GetFullKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chem_LinkEnd_GetFullKey(Chem_LinkEnd self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiBoolean Chem_LinkEnd_GetInConstructor(Chem_LinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiBoolean Chem_LinkEnd_GetIsDeleted(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.linkCode

code ('name') for link. 
The following naming convention is used:
The linkCode is the same as the 
name of the boundChemAtom. E.g. a cysteine disulfide link will have 
linkCode 'SG'. The first exception is the case where there is more than 
one link starting at the same atom - here the linkCodes are the name of 
the first linkAtom followed by '_1', '_2'. E.g. an atom CX with three 
links starting from it will have linkEnds with linkCodes CX_1, CX_2, 
CX_3. If two different atom subtypes both have a link, the linkCodes are 
of the same form - there are no fixed rules for how to apportion the 
various suffixes. Another exception is the 'prev' and 'next' that form 
the backbone of linear polymers.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiString Chem_LinkEnd_GetLinkCode(Chem_LinkEnd self);

/**
  GetLocalKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @returns  Local object key
**/
extern ApiObject Chem_LinkEnd_GetLocalKey(Chem_LinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiString Chem_LinkEnd_GetPackageName(Chem_LinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiString Chem_LinkEnd_GetPackageShortName(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.parent

link to parent object - 
synonym for chemComp
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_ChemComp Chem_LinkEnd_GetParent(Chem_LinkEnd self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiString Chem_LinkEnd_GetQualifiedName(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.remoteChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_ChemAtom Chem_LinkEnd_GetRemoteChemAtom(Chem_LinkEnd self);

/**
  Get for ccp.molecule.ChemComp.LinkEnd.remoteLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Chem_LinkAtom Chem_LinkEnd_GetRemoteLinkAtom(Chem_LinkEnd self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Impl_MemopsRoot Chem_LinkEnd_GetRoot(Chem_LinkEnd self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern Impl_TopObject Chem_LinkEnd_GetTopObject(Chem_LinkEnd self);

/**
  Constructor for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chem_LinkEnd Chem_LinkEnd_Init(Chem_ChemComp parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp parent
  @param  Chem_ChemAtom boundChemAtom
  @param  Chem_LinkAtom boundLinkAtom
  @param  char * linkCode
  @returns  the new object
**/
extern Chem_LinkEnd Chem_LinkEnd_Init_reqd(Chem_ChemComp parent, Chem_ChemAtom boundChemAtom, Chem_LinkAtom boundLinkAtom, char * linkCode);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  Impl_ApplicationData value
**/
extern void *Chem_LinkEnd_RemoveApplicationData(Chem_LinkEnd self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chem_LinkEnd_Set(Chem_LinkEnd self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkEnd self
  @param  Acco_AccessObject value
**/
extern void *Chem_LinkEnd_SetAccess(Chem_LinkEnd self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  ApiList values
**/
extern void *Chem_LinkEnd_SetApplicationData(Chem_LinkEnd self, ApiList values);

/**
  Set for ccp.molecule.ChemComp.LinkEnd.boundChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_ChemAtom value
**/
extern void *Chem_LinkEnd_SetBoundChemAtom(Chem_LinkEnd self, Chem_ChemAtom value);

/**
  Set for ccp.molecule.ChemComp.LinkEnd.boundLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_LinkAtom value
**/
extern void *Chem_LinkEnd_SetBoundLinkAtom(Chem_LinkEnd self, Chem_LinkAtom value);

/**
  Set for ccp.molecule.ChemComp.LinkEnd.linkCode

code ('name') for link. 
The following naming convention is used:
The linkCode is the same as the 
name of the boundChemAtom. E.g. a cysteine disulfide link will have 
linkCode 'SG'. The first exception is the case where there is more than 
one link starting at the same atom - here the linkCodes are the name of 
the first linkAtom followed by '_1', '_2'. E.g. an atom CX with three 
links starting from it will have linkEnds with linkCodes CX_1, CX_2, 
CX_3. If two different atom subtypes both have a link, the linkCodes are 
of the same form - there are no fixed rules for how to apportion the 
various suffixes. Another exception is the 'prev' and 'next' that form 
the backbone of linear polymers.
  @param  Chem_LinkEnd self
  @param  ApiString value
**/
extern void *Chem_LinkEnd_SetLinkCode(Chem_LinkEnd self, ApiString value);

/**
  Set for ccp.molecule.ChemComp.LinkEnd.remoteChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_ChemAtom value
**/
extern void *Chem_LinkEnd_SetRemoteChemAtom(Chem_LinkEnd self, Chem_ChemAtom value);

/**
  Set for ccp.molecule.ChemComp.LinkEnd.remoteLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_LinkAtom value
**/
extern void *Chem_LinkEnd_SetRemoteLinkAtom(Chem_LinkEnd self, Chem_LinkAtom value);

/**
  Sorted for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars that 
hold LinkEnd
  @param  Chem_LinkEnd self
  @returns   the result
**/
extern ApiList Chem_LinkEnd_SortedChemCompVars(Chem_LinkEnd self);

#endif /* __incl__ccp_api_molecule_ChemComp_LinkEnd_h__ */
