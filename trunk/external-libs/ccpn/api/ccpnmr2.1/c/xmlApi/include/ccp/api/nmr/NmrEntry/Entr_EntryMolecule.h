
#ifndef __incl__ccp_api_nmr_NmrEntry_EntryMolecule_h__
#define __incl__ccp_api_nmr_NmrEntry_EntryMolecule_h__

#include "ccp.h"

/*
  Molecule relevant to this entry
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  Impl_ApplicationData value
**/
extern void *Entr_EntryMolecule_AddApplicationData(Entr_EntryMolecule self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean complete
**/
extern void *Entr_EntryMolecule_CheckAllValid(Entr_EntryMolecule self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean complete
**/
extern void *Entr_EntryMolecule_CheckValid(Entr_EntryMolecule self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_EntryMolecule_FindAllApplicationData(Entr_EntryMolecule self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_EntryMolecule_FindAllApplicationData_keyval0(Entr_EntryMolecule self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_EntryMolecule_FindAllApplicationData_keyval1(Entr_EntryMolecule self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_EntryMolecule_FindAllApplicationData_keyval2(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_EntryMolecule_FindAllApplicationData_keyval3(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
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
extern ApiList Entr_EntryMolecule_FindAllApplicationData_keyval4(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData(Entr_EntryMolecule self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval0(Entr_EntryMolecule self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval1(Entr_EntryMolecule self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval2(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval3(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
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
extern Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval4(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Entr_EntryMolecule_Get(Entr_EntryMolecule self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Acco_AccessObject Entr_EntryMolecule_GetAccess(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Acco_AccessObject Entr_EntryMolecule_GetActiveAccess(Entr_EntryMolecule self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiList Entr_EntryMolecule_GetApplicationData(Entr_EntryMolecule self);

/**
  GetByKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Entr_EntryMolecule Entr_EntryMolecule_GetByKey(Entr_EntryMolecule self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetClassName(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.entry

parent link
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Entr_Entry Entr_EntryMolecule_GetEntry(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.experimentalSource

Experimental 
source of Molecule
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Taxo_NaturalSource Entr_EntryMolecule_GetExperimentalSource(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiList Entr_EntryMolecule_GetFieldNames(Entr_EntryMolecule self);

/**
  GetFullKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Entr_EntryMolecule_GetFullKey(Entr_EntryMolecule self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiBoolean Entr_EntryMolecule_GetInConstructor(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiBoolean Entr_EntryMolecule_GetIsDeleted(Entr_EntryMolecule self);

/**
  GetLocalKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @returns  Local object key
**/
extern ApiObject Entr_EntryMolecule_GetLocalKey(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.molecule

Molecule defining this 
EntryMolecule (key)
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Mole_Molecule Entr_EntryMolecule_GetMolecule(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetPackageName(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetPackageShortName(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.parent

link to parent object - 
synonym for entry
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Entr_Entry Entr_EntryMolecule_GetParent(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.productionMethod

Production 
method
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetProductionMethod(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetQualifiedName(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_EntryMolecule_GetRoot(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.sourceType

Type of molecule 
natural source
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetSourceType(Entr_EntryMolecule self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern Impl_TopObject Entr_EntryMolecule_GetTopObject(Entr_EntryMolecule self);

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.vectorType

Type of expression 
vector
  @param  Entr_EntryMolecule self
  @returns   the result
**/
extern ApiString Entr_EntryMolecule_GetVectorType(Entr_EntryMolecule self);

/**
  Constructor for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_EntryMolecule Entr_EntryMolecule_Init(Entr_Entry parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry parent
  @param  Mole_Molecule molecule
  @param  char * productionMethod
  @returns  the new object
**/
extern Entr_EntryMolecule Entr_EntryMolecule_Init_reqd(Entr_Entry parent, Mole_Molecule molecule, char * productionMethod);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  Impl_ApplicationData value
**/
extern void *Entr_EntryMolecule_RemoveApplicationData(Entr_EntryMolecule self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Entr_EntryMolecule_Set(Entr_EntryMolecule self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_EntryMolecule self
  @param  Acco_AccessObject value
**/
extern void *Entr_EntryMolecule_SetAccess(Entr_EntryMolecule self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  ApiList values
**/
extern void *Entr_EntryMolecule_SetApplicationData(Entr_EntryMolecule self, ApiList values);

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.experimentalSource

Experimental 
source of Molecule
  @param  Entr_EntryMolecule self
  @param  Taxo_NaturalSource value
**/
extern void *Entr_EntryMolecule_SetExperimentalSource(Entr_EntryMolecule self, Taxo_NaturalSource value);

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.molecule

Molecule defining this 
EntryMolecule (key)
  @param  Entr_EntryMolecule self
  @param  Mole_Molecule value
**/
extern void *Entr_EntryMolecule_SetMolecule(Entr_EntryMolecule self, Mole_Molecule value);

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.productionMethod

Production 
method
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
extern void *Entr_EntryMolecule_SetProductionMethod(Entr_EntryMolecule self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.sourceType

Type of molecule 
natural source
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
extern void *Entr_EntryMolecule_SetSourceType(Entr_EntryMolecule self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.vectorType

Type of expression 
vector
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
extern void *Entr_EntryMolecule_SetVectorType(Entr_EntryMolecule self, ApiString value);

#endif /* __incl__ccp_api_nmr_NmrEntry_EntryMolecule_h__ */
