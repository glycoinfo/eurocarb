
#ifndef __incl__ccp_api_molecule_LabeledMolecule_ResLabel_h__
#define __incl__ccp_api_molecule_LabeledMolecule_ResLabel_h__

#include "ccp.h"

/*
  Residue labeling pattern. If there are any SingleAtomLabels for a given atom, these uniquely determine the isotope composition. Failing that, if there are any UniformLabels for a given atom, these uniquely determine the isotope composition. Failing that the composition is determined  by the ResLabelFractions. 
  Note that AtomLabels effectively specify the isotope composition one position at a time. Any correlations between the labeling patterns of two (or more) Atoms can only be specified with the ResLabelFractions.
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_ResLabel_AddApplicationData(Lmol_ResLabel self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean complete
**/
extern void *Lmol_ResLabel_CheckAllValid(Lmol_ResLabel self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean complete
**/
extern void *Lmol_ResLabel_CheckValid(Lmol_ResLabel self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_ResLabel_FindAllApplicationData(Lmol_ResLabel self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_ResLabel_FindAllApplicationData_keyval0(Lmol_ResLabel self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_ResLabel_FindAllApplicationData_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_ResLabel_FindAllApplicationData_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Lmol_ResLabel_FindAllApplicationData_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
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
extern ApiList Lmol_ResLabel_FindAllApplicationData_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllAtomLabels(Lmol_ResLabel self, ApiMap conditions);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval0(Lmol_ResLabel self);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
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
extern ApiSet Lmol_ResLabel_FindAllAtomLabels_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions(Lmol_ResLabel self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval0(Lmol_ResLabel self);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
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
extern ApiSet Lmol_ResLabel_FindAllResLabelFractions_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData(Lmol_ResLabel self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval0(Lmol_ResLabel self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
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
extern Impl_ApplicationData Lmol_ResLabel_FindFirstApplicationData_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel(Lmol_ResLabel self, ApiMap conditions);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval0(Lmol_ResLabel self);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child 
link to class AtomLabel
  @param  Lmol_ResLabel self
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
extern Lmol_AtomLabel Lmol_ResLabel_FindFirstAtomLabel_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction(Lmol_ResLabel self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval0(Lmol_ResLabel self);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval1(Lmol_ResLabel self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval2(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval3(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
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
extern Lmol_ResLabelFraction Lmol_ResLabel_FindFirstResLabelFraction_keyval4(Lmol_ResLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Lmol_ResLabel_Get(Lmol_ResLabel self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Acco_AccessObject Lmol_ResLabel_GetAccess(Lmol_ResLabel self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiList Lmol_ResLabel_GetApplicationData(Lmol_ResLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link to 
class AtomLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiSet Lmol_ResLabel_GetAtomLabels(Lmol_ResLabel self);

/**
  GetByKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Lmol_ResLabel Lmol_ResLabel_GetByKey(Lmol_ResLabel self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiString Lmol_ResLabel_GetClassName(Lmol_ResLabel self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiList Lmol_ResLabel_GetFieldNames(Lmol_ResLabel self);

/**
  GetFullKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Lmol_ResLabel_GetFullKey(Lmol_ResLabel self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiBoolean Lmol_ResLabel_GetInConstructor(Lmol_ResLabel self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiBoolean Lmol_ResLabel_GetIsDeleted(Lmol_ResLabel self);

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @returns  Local object key
**/
extern ApiObject Lmol_ResLabel_GetLocalKey(Lmol_ResLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.molLabel

parent link
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Lmol_MolLabel Lmol_ResLabel_GetMolLabel(Lmol_ResLabel self);

/**
  getter for derived link molResidue
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Mole_MolResidue Lmol_ResLabel_GetMolResidue(Lmol_ResLabel self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiString Lmol_ResLabel_GetPackageName(Lmol_ResLabel self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiString Lmol_ResLabel_GetPackageShortName(Lmol_ResLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.parent

link to parent 
object - synonym for molLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Lmol_MolLabel Lmol_ResLabel_GetParent(Lmol_ResLabel self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiString Lmol_ResLabel_GetQualifiedName(Lmol_ResLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.resId

resId for 
corresponding MolResidue
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiInteger Lmol_ResLabel_GetResId(Lmol_ResLabel self);

/**
  Get for ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child 
link
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiSet Lmol_ResLabel_GetResLabelFractions(Lmol_ResLabel self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Impl_MemopsRoot Lmol_ResLabel_GetRoot(Lmol_ResLabel self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern Impl_TopObject Lmol_ResLabel_GetTopObject(Lmol_ResLabel self);

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_ResLabel Lmol_ResLabel_Init(Lmol_MolLabel parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_MolLabel parent
  @param  ApiInteger resId
  @returns  the new object
**/
extern Lmol_ResLabel Lmol_ResLabel_Init_reqd(Lmol_MolLabel parent, ApiInteger resId);

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_NewResLabelFraction(Lmol_ResLabel self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel self
  @returns  the new object
**/
extern Lmol_ResLabelFraction Lmol_ResLabel_NewResLabelFraction_reqd(Lmol_ResLabel self);

/**
  Factory function to create ccp.molecule.LabeledMolecule.SingleAtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_SingleAtomLabel Lmol_ResLabel_NewSingleAtomLabel(Lmol_ResLabel self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.LabeledMolecule.SingleAtomLabel
  @param  Lmol_ResLabel self
  @param  char * atomName
  @param  ApiInteger massNumber
  @returns  the new object
**/
extern Lmol_SingleAtomLabel Lmol_ResLabel_NewSingleAtomLabel_reqd(Lmol_ResLabel self, char * atomName, ApiInteger massNumber);

/**
  Factory function to create ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Lmol_UniformAtomLabel Lmol_ResLabel_NewUniformAtomLabel(Lmol_ResLabel self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.LabeledMolecule.UniformAtomLabel
  @param  Lmol_ResLabel self
  @param  char * elementName
  @param  ApiInteger massNumber
  @returns  the new object
**/
extern Lmol_UniformAtomLabel Lmol_ResLabel_NewUniformAtomLabel_reqd(Lmol_ResLabel self, char * elementName, ApiInteger massNumber);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  Impl_ApplicationData value
**/
extern void *Lmol_ResLabel_RemoveApplicationData(Lmol_ResLabel self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.LabeledMolecule.ResLabel
  @param  Lmol_ResLabel self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Lmol_ResLabel_Set(Lmol_ResLabel self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabel self
  @param  Acco_AccessObject value
**/
extern void *Lmol_ResLabel_SetAccess(Lmol_ResLabel self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabel self
  @param  ApiList values
**/
extern void *Lmol_ResLabel_SetApplicationData(Lmol_ResLabel self, ApiList values);

/**
  Set for ccp.molecule.LabeledMolecule.ResLabel.resId

resId for 
corresponding MolResidue
  @param  Lmol_ResLabel self
  @param  ApiInteger value
**/
extern void *Lmol_ResLabel_SetResId(Lmol_ResLabel self, ApiInteger value);

/**
  Sorted for ccp.molecule.LabeledMolecule.ResLabel.atomLabels

child link 
to class AtomLabel
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiList Lmol_ResLabel_SortedAtomLabels(Lmol_ResLabel self);

/**
  Sorted for 
ccp.molecule.LabeledMolecule.ResLabel.resLabelFractions

child link
  @param  Lmol_ResLabel self
  @returns   the result
**/
extern ApiList Lmol_ResLabel_SortedResLabelFractions(Lmol_ResLabel self);

#endif /* __incl__ccp_api_molecule_LabeledMolecule_ResLabel_h__ */
