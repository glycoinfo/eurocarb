
#ifndef __incl__ccp_api_molecule_LabeledMolecule_MolLabelFraction_h__
#define __incl__ccp_api_molecule_LabeledMolecule_MolLabelFraction_h__

#include "ccp.h"

/*
  Describes the relative abundance of a given MolLabel in a given LabeledMixture (association class).
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_MolLabelFraction_AddApplicationData(Lmol_MolLabelFraction self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean complete
**/
extern void *Lmol_MolLabelFraction_CheckAllValid(Lmol_MolLabelFraction self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean complete
**/
extern void *Lmol_MolLabelFraction_CheckValid(Lmol_MolLabelFraction self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData(Lmol_MolLabelFraction self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval0(Lmol_MolLabelFraction self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval1(Lmol_MolLabelFraction self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval2(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval3(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
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
extern ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval4(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData(Lmol_MolLabelFraction self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval0(Lmol_MolLabelFraction self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval1(Lmol_MolLabelFraction self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval2(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval3(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
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
extern Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval4(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Lmol_MolLabelFraction_Get(Lmol_MolLabelFraction self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Acco_AccessObject Lmol_MolLabelFraction_GetAccess(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Acco_AccessObject Lmol_MolLabelFraction_GetActiveAccess(Lmol_MolLabelFraction self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiList Lmol_MolLabelFraction_GetApplicationData(Lmol_MolLabelFraction self);

/**
  GetByKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Lmol_MolLabelFraction Lmol_MolLabelFraction_GetByKey(Lmol_MolLabelFraction self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiString Lmol_MolLabelFraction_GetClassName(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiList Lmol_MolLabelFraction_GetFieldNames(Lmol_MolLabelFraction self);

/**
  GetFullKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Lmol_MolLabelFraction_GetFullKey(Lmol_MolLabelFraction self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiBoolean Lmol_MolLabelFraction_GetInConstructor(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiBoolean Lmol_MolLabelFraction_GetIsDeleted(Lmol_MolLabelFraction self);

/**
  Get for 
ccp.molecule.LabeledMolecule.MolLabelFraction.labeledMixture

parent 
link
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Lmol_LabeledMixture Lmol_MolLabelFraction_GetLabeledMixture(Lmol_MolLabelFraction self);

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @returns  Local object key
**/
extern ApiObject Lmol_MolLabelFraction_GetLocalKey(Lmol_MolLabelFraction self);

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.molLabel

MolLabel 
described by Fraction
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Lmol_MolLabel Lmol_MolLabelFraction_GetMolLabel(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiString Lmol_MolLabelFraction_GetPackageName(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiString Lmol_MolLabelFraction_GetPackageShortName(Lmol_MolLabelFraction self);

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.parent

link to 
parent object - synonym for labeledMixture
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Lmol_LabeledMixture Lmol_MolLabelFraction_GetParent(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiString Lmol_MolLabelFraction_GetQualifiedName(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Impl_MemopsRoot Lmol_MolLabelFraction_GetRoot(Lmol_MolLabelFraction self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern Impl_TopObject Lmol_MolLabelFraction_GetTopObject(Lmol_MolLabelFraction self);

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.weight

Relative 
abundance of MolLabel present in the Mixture
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
extern ApiFloat Lmol_MolLabelFraction_GetWeight(Lmol_MolLabelFraction self);

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_MolLabelFraction Lmol_MolLabelFraction_Init(Lmol_LabeledMixture parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture parent
  @param  Lmol_MolLabel molLabel
  @returns  the new object
**/
extern Lmol_MolLabelFraction Lmol_MolLabelFraction_Init_reqd(Lmol_LabeledMixture parent, Lmol_MolLabel molLabel);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_MolLabelFraction_RemoveApplicationData(Lmol_MolLabelFraction self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Lmol_MolLabelFraction_Set(Lmol_MolLabelFraction self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabelFraction self
  @param  Acco_AccessObject value
**/
extern void *Lmol_MolLabelFraction_SetAccess(Lmol_MolLabelFraction self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  ApiList values
**/
extern void *Lmol_MolLabelFraction_SetApplicationData(Lmol_MolLabelFraction self, ApiList values);

/**
  Set for ccp.molecule.LabeledMolecule.MolLabelFraction.molLabel

MolLabel 
described by Fraction
  @param  Lmol_MolLabelFraction self
  @param  Lmol_MolLabel value
**/
extern void *Lmol_MolLabelFraction_SetMolLabel(Lmol_MolLabelFraction self, Lmol_MolLabel value);

/**
  Set for ccp.molecule.LabeledMolecule.MolLabelFraction.weight

Relative 
abundance of MolLabel present in the Mixture
  @param  Lmol_MolLabelFraction self
  @param  ApiFloat value
**/
extern void *Lmol_MolLabelFraction_SetWeight(Lmol_MolLabelFraction self, ApiFloat value);

#endif /* __incl__ccp_api_molecule_LabeledMolecule_MolLabelFraction_h__ */
