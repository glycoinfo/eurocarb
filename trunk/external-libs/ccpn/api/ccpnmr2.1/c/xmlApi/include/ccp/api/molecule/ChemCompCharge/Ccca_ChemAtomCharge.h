
#ifndef __incl__ccp_api_molecule_ChemCompCharge_ChemAtomCharge_h__
#define __incl__ccp_api_molecule_ChemCompCharge_ChemAtomCharge_h__

#include "ccp.h"

/*
  Atom description including partial charges
*/

/* package ccp.api.molecule.ChemCompCharge */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  Impl_ApplicationData value
**/
extern void *Ccca_ChemAtomCharge_AddApplicationData(Ccca_ChemAtomCharge self, Impl_ApplicationData value);

/**
  Add for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  Ccca_ChemCompVarCharge value
**/
extern void *Ccca_ChemAtomCharge_AddChemCompVarCharge(Ccca_ChemAtomCharge self, Ccca_ChemCompVarCharge value);

/**
  Add for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
extern void *Ccca_ChemAtomCharge_AddValidVegaType(Ccca_ChemAtomCharge self, ApiString value);

/**
  CheckAllValid for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean complete
**/
extern void *Ccca_ChemAtomCharge_CheckAllValid(Ccca_ChemAtomCharge self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean complete
**/
extern void *Ccca_ChemAtomCharge_CheckValid(Ccca_ChemAtomCharge self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData(Ccca_ChemAtomCharge self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval0(Ccca_ChemAtomCharge self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
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
extern ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges(Ccca_ChemAtomCharge self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval0(Ccca_ChemAtomCharge self);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
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
extern ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData(Ccca_ChemAtomCharge self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval0(Ccca_ChemAtomCharge self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
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
extern Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(Ccca_ChemAtomCharge self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns  the first value that satisfies the conditions 
**/
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval0(Ccca_ChemAtomCharge self);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
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
extern Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Ccca_ChemAtomCharge_Get(Ccca_ChemAtomCharge self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Acco_AccessObject Ccca_ChemAtomCharge_GetAccess(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Acco_AccessObject Ccca_ChemAtomCharge_GetActiveAccess(Ccca_ChemAtomCharge self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiList Ccca_ChemAtomCharge_GetApplicationData(Ccca_ChemAtomCharge self);

/**
  GetByKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Ccca_ChemAtomCharge Ccca_ChemAtomCharge_GetByKey(Ccca_ChemAtomCharge self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  getter for derived link chemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Chem_ChemAtom Ccca_ChemAtomCharge_GetChemAtom(Ccca_ChemAtomCharge self);

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompCharge

parent link
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Ccca_ChemCompCharge Ccca_ChemAtomCharge_GetChemCompCharge(Ccca_ChemAtomCharge self);

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiSet Ccca_ChemAtomCharge_GetChemCompVarCharges(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiString Ccca_ChemAtomCharge_GetClassName(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiList Ccca_ChemAtomCharge_GetFieldNames(Ccca_ChemAtomCharge self);

/**
  GetFullKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Ccca_ChemAtomCharge_GetFullKey(Ccca_ChemAtomCharge self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiBoolean Ccca_ChemAtomCharge_GetInConstructor(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiBoolean Ccca_ChemAtomCharge_GetIsDeleted(Ccca_ChemAtomCharge self);

/**
  GetLocalKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @returns  Local object key
**/
extern ApiObject Ccca_ChemAtomCharge_GetLocalKey(Ccca_ChemAtomCharge self);

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.name

Name of 
corresponding ChemComp.ChemAtom. Part of the key for the corresponding 
ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiString Ccca_ChemAtomCharge_GetName(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiString Ccca_ChemAtomCharge_GetPackageName(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiString Ccca_ChemAtomCharge_GetPackageShortName(Ccca_ChemAtomCharge self);

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.parent

link to 
parent object - synonym for chemCompCharge
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Ccca_ChemCompCharge Ccca_ChemAtomCharge_GetParent(Ccca_ChemAtomCharge self);

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.partialCharge

partial charge 
value
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiFloat Ccca_ChemAtomCharge_GetPartialCharge(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiString Ccca_ChemAtomCharge_GetQualifiedName(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Impl_MemopsRoot Ccca_ChemAtomCharge_GetRoot(Ccca_ChemAtomCharge self);

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiInteger Ccca_ChemAtomCharge_GetSerial(Ccca_ChemAtomCharge self);

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars. Part of 
the key for the corresponding ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiInteger Ccca_ChemAtomCharge_GetSubType(Ccca_ChemAtomCharge self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern Impl_TopObject Ccca_ChemAtomCharge_GetTopObject(Ccca_ChemAtomCharge self);

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiList Ccca_ChemAtomCharge_GetValidVegaTypes(Ccca_ChemAtomCharge self);

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Ccca_ChemAtomCharge Ccca_ChemAtomCharge_Init(Ccca_ChemCompCharge parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge parent
  @param  ApiSet chemCompVarCharges
  @param  char * name
  @param  float partialCharge
  @param  ApiInteger subType
  @returns  the new object
**/
extern Ccca_ChemAtomCharge Ccca_ChemAtomCharge_Init_reqd(Ccca_ChemCompCharge parent, ApiSet chemCompVarCharges, char * name, float partialCharge, ApiInteger subType);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  Impl_ApplicationData value
**/
extern void *Ccca_ChemAtomCharge_RemoveApplicationData(Ccca_ChemAtomCharge self, Impl_ApplicationData value);

/**
  Remove for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  Ccca_ChemCompVarCharge value
**/
extern void *Ccca_ChemAtomCharge_RemoveChemCompVarCharge(Ccca_ChemAtomCharge self, Ccca_ChemCompVarCharge value);

/**
  Remove for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
extern void *Ccca_ChemAtomCharge_RemoveValidVegaType(Ccca_ChemAtomCharge self, ApiString value);

/**
  SetAttr for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Ccca_ChemAtomCharge_Set(Ccca_ChemAtomCharge self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemAtomCharge self
  @param  Acco_AccessObject value
**/
extern void *Ccca_ChemAtomCharge_SetAccess(Ccca_ChemAtomCharge self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  ApiList values
**/
extern void *Ccca_ChemAtomCharge_SetApplicationData(Ccca_ChemAtomCharge self, ApiList values);

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiSet values
**/
extern void *Ccca_ChemAtomCharge_SetChemCompVarCharges(Ccca_ChemAtomCharge self, ApiSet values);

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.name

Name of 
corresponding ChemComp.ChemAtom. Part of the key for the corresponding 
ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
extern void *Ccca_ChemAtomCharge_SetName(Ccca_ChemAtomCharge self, ApiString value);

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.partialCharge

partial charge 
value
  @param  Ccca_ChemAtomCharge self
  @param  ApiFloat value
**/
extern void *Ccca_ChemAtomCharge_SetPartialCharge(Ccca_ChemAtomCharge self, ApiFloat value);

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccca_ChemAtomCharge self
  @param  ApiInteger value
**/
extern void *Ccca_ChemAtomCharge_SetSerial(Ccca_ChemAtomCharge self, ApiInteger value);

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars. Part of 
the key for the corresponding ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiInteger value
**/
extern void *Ccca_ChemAtomCharge_SetSubType(Ccca_ChemAtomCharge self, ApiInteger value);

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiList values
**/
extern void *Ccca_ChemAtomCharge_SetValidVegaTypes(Ccca_ChemAtomCharge self, ApiList values);

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
extern ApiList Ccca_ChemAtomCharge_SortedChemCompVarCharges(Ccca_ChemAtomCharge self);

#endif /* __incl__ccp_api_molecule_ChemCompCharge_ChemAtomCharge_h__ */
