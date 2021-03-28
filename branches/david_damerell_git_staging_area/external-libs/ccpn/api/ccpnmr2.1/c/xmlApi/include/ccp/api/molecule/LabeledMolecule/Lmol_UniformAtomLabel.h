
#ifndef __incl__ccp_api_molecule_LabeledMolecule_UniformAtomLabel_h__
#define __incl__ccp_api_molecule_LabeledMolecule_UniformAtomLabel_h__

#include "ccp.h"

/*
  Atom label description valid for all atoms of a given element in a given residue, except those attached to any SingleAtomLabel object.
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_UniformAtomLabel_AddApplicationData(Lmol_UniformAtomLabel self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_UniformAtomLabel self
  @param  ApiBoolean complete
**/
extern void *Lmol_UniformAtomLabel_CheckAllValid(Lmol_UniformAtomLabel self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_UniformAtomLabel self
  @param  ApiBoolean complete
**/
extern void *Lmol_UniformAtomLabel_CheckValid(Lmol_UniformAtomLabel self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData(Lmol_UniformAtomLabel self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData_keyval0(Lmol_UniformAtomLabel self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData_keyval1(Lmol_UniformAtomLabel self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData_keyval2(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData_keyval3(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
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
extern ApiList Lmol_UniformAtomLabel_FindAllApplicationData_keyval4(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData(Lmol_UniformAtomLabel self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData_keyval0(Lmol_UniformAtomLabel self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData_keyval1(Lmol_UniformAtomLabel self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData_keyval2(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData_keyval3(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
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
extern Impl_ApplicationData Lmol_UniformAtomLabel_FindFirstApplicationData_keyval4(Lmol_UniformAtomLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_UniformAtomLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Lmol_UniformAtomLabel_Get(Lmol_UniformAtomLabel self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Acco_AccessObject Lmol_UniformAtomLabel_GetAccess(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Acco_AccessObject Lmol_UniformAtomLabel_GetActiveAccess(Lmol_UniformAtomLabel self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiList Lmol_UniformAtomLabel_GetApplicationData(Lmol_UniformAtomLabel self);

/**
  GetByKey for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_UniformAtomLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Lmol_UniformAtomLabel Lmol_UniformAtomLabel_GetByKey(Lmol_UniformAtomLabel self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiString Lmol_UniformAtomLabel_GetClassName(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.UniformAtomLabel.elementName

Name 
of element. E.g. 'C', 'Cu'.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiString Lmol_UniformAtomLabel_GetElementName(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiList Lmol_UniformAtomLabel_GetFieldNames(Lmol_UniformAtomLabel self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiBoolean Lmol_UniformAtomLabel_GetInConstructor(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiBoolean Lmol_UniformAtomLabel_GetIsDeleted(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.AtomLabel.massNumber

Mass number 
of relevant Isotope
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiInteger Lmol_UniformAtomLabel_GetMassNumber(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiString Lmol_UniformAtomLabel_GetPackageName(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiString Lmol_UniformAtomLabel_GetPackageShortName(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.AtomLabel.parent

link to parent 
object - synonym for resLabel
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Lmol_ResLabel Lmol_UniformAtomLabel_GetParent(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiString Lmol_UniformAtomLabel_GetQualifiedName(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.AtomLabel.resLabel

parent link
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Lmol_ResLabel Lmol_UniformAtomLabel_GetResLabel(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Impl_MemopsRoot Lmol_UniformAtomLabel_GetRoot(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.AtomLabel.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiInteger Lmol_UniformAtomLabel_GetSerial(Lmol_UniformAtomLabel self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern Impl_TopObject Lmol_UniformAtomLabel_GetTopObject(Lmol_UniformAtomLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.AtomLabel.weight

Relative 
Abundance of atom labeling defined by this object
  @param  Lmol_UniformAtomLabel self
  @returns   the result
**/
extern ApiFloat Lmol_UniformAtomLabel_GetWeight(Lmol_UniformAtomLabel self);

/**
  Constructor for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_UniformAtomLabel Lmol_UniformAtomLabel_Init(Lmol_ResLabel parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel parent
  @param  char * elementName
  @param  ApiInteger massNumber
  @returns  the new object
**/
extern Lmol_UniformAtomLabel Lmol_UniformAtomLabel_Init_reqd(Lmol_ResLabel parent, char * elementName, ApiInteger massNumber);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_UniformAtomLabel_RemoveApplicationData(Lmol_UniformAtomLabel self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_UniformAtomLabel self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Lmol_UniformAtomLabel_Set(Lmol_UniformAtomLabel self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_UniformAtomLabel self
  @param  Acco_AccessObject value
**/
extern void *Lmol_UniformAtomLabel_SetAccess(Lmol_UniformAtomLabel self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_UniformAtomLabel self
  @param  ApiList values
**/
extern void *Lmol_UniformAtomLabel_SetApplicationData(Lmol_UniformAtomLabel self, ApiList values);

/**
  Set for ccp.molecule.LabeledMolecule.UniformAtomLabel.elementName

Name 
of element. E.g. 'C', 'Cu'.
  @param  Lmol_UniformAtomLabel self
  @param  ApiString value
**/
extern void *Lmol_UniformAtomLabel_SetElementName(Lmol_UniformAtomLabel self, ApiString value);

/**
  Set for ccp.molecule.LabeledMolecule.AtomLabel.massNumber

Mass number 
of relevant Isotope
  @param  Lmol_UniformAtomLabel self
  @param  ApiInteger value
**/
extern void *Lmol_UniformAtomLabel_SetMassNumber(Lmol_UniformAtomLabel self, ApiInteger value);

/**
  Set for ccp.molecule.LabeledMolecule.AtomLabel.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Lmol_UniformAtomLabel self
  @param  ApiInteger value
**/
extern void *Lmol_UniformAtomLabel_SetSerial(Lmol_UniformAtomLabel self, ApiInteger value);

/**
  Set for ccp.molecule.LabeledMolecule.AtomLabel.weight

Relative 
Abundance of atom labeling defined by this object
  @param  Lmol_UniformAtomLabel self
  @param  ApiFloat value
**/
extern void *Lmol_UniformAtomLabel_SetWeight(Lmol_UniformAtomLabel self, ApiFloat value);

#endif /* __incl__ccp_api_molecule_LabeledMolecule_UniformAtomLabel_h__ */
