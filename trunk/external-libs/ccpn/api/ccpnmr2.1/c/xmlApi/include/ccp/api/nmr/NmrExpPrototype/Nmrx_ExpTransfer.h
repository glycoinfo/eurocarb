
#ifndef __incl__ccp_api_nmr_NmrExpPrototype_ExpTransfer_h__
#define __incl__ccp_api_nmr_NmrExpPrototype_ExpTransfer_h__

#include "ccp.h"

/*
  Magnetisation transfer between two AtomSites. The transfer does not say anything about direction, merely that e.g. an H and a C are connected by a one-bond coupling.
  
  The ExpTransferPaths and the AtomSites they select describe the network of nuclei that must be present in order to get observable peaks from a ginve ExpGraph.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpTransfer_AddApplicationData(Nmrx_ExpTransfer self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpTransfer_CheckAllValid(Nmrx_ExpTransfer self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  ApiBoolean complete
**/
extern void *Nmrx_ExpTransfer_CheckValid(Nmrx_ExpTransfer self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData(Nmrx_ExpTransfer self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData_keyval0(Nmrx_ExpTransfer self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData_keyval1(Nmrx_ExpTransfer self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData_keyval2(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData_keyval3(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
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
extern ApiList Nmrx_ExpTransfer_FindAllApplicationData_keyval4(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites(Nmrx_ExpTransfer self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites_keyval0(Nmrx_ExpTransfer self);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites_keyval1(Nmrx_ExpTransfer self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites_keyval2(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites_keyval3(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
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
extern ApiSet Nmrx_ExpTransfer_FindAllAtomSites_keyval4(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData(Nmrx_ExpTransfer self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData_keyval0(Nmrx_ExpTransfer self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData_keyval1(Nmrx_ExpTransfer self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData_keyval2(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData_keyval3(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
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
extern Impl_ApplicationData Nmrx_ExpTransfer_FindFirstApplicationData_keyval4(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite(Nmrx_ExpTransfer self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite_keyval0(Nmrx_ExpTransfer self);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite_keyval1(Nmrx_ExpTransfer self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite_keyval2(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite_keyval3(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
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
extern Nmrx_AtomSite Nmrx_ExpTransfer_FindFirstAtomSite_keyval4(Nmrx_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrx_ExpTransfer_Get(Nmrx_ExpTransfer self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_ExpTransfer_GetAccess(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Acco_AccessObject Nmrx_ExpTransfer_GetActiveAccess(Nmrx_ExpTransfer self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmrx_ExpTransfer_GetApplicationData(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiSet Nmrx_ExpTransfer_GetAtomSites(Nmrx_ExpTransfer self);

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrx_ExpTransfer Nmrx_ExpTransfer_GetByKey(Nmrx_ExpTransfer self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmrx_ExpTransfer_GetClassName(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.expGraph

parent link
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Nmrx_ExpGraph Nmrx_ExpTransfer_GetExpGraph(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmrx_ExpTransfer_GetFieldNames(Nmrx_ExpTransfer self);

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrx_ExpTransfer_GetFullKey(Nmrx_ExpTransfer self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpTransfer_GetInConstructor(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpTransfer_GetIsDeleted(Nmrx_ExpTransfer self);

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @returns  Local object key
**/
extern ApiObject Nmrx_ExpTransfer_GetLocalKey(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmrx_ExpTransfer_GetPackageName(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmrx_ExpTransfer_GetPackageShortName(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.parent

link to parent 
object - synonym for expGraph
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Nmrx_ExpGraph Nmrx_ExpTransfer_GetParent(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmrx_ExpTransfer_GetQualifiedName(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrx_ExpTransfer_GetRoot(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiInteger Nmrx_ExpTransfer_GetSerial(Nmrx_ExpTransfer self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern Impl_TopObject Nmrx_ExpTransfer_GetTopObject(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.transferToSelf

Does 
transfer permit magnetisation to remain on the same site ('diagonal' 
peak)?
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiBoolean Nmrx_ExpTransfer_GetTransferToSelf(Nmrx_ExpTransfer self);

/**
  Get for ccp.nmr.NmrExpPrototype.ExpTransfer.transferType

Type of 
transfer. E.g. NOESY. Intended to describe the minimum information 
necessary to establish the relationship between the ExpAtomSites 
connected by the transfer
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiString Nmrx_ExpTransfer_GetTransferType(Nmrx_ExpTransfer self);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrx_ExpTransfer Nmrx_ExpTransfer_Init(Nmrx_ExpGraph parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph parent
  @param  ApiSet atomSites
  @returns  the new object
**/
extern Nmrx_ExpTransfer Nmrx_ExpTransfer_Init_reqd(Nmrx_ExpGraph parent, ApiSet atomSites);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  Impl_ApplicationData value
**/
extern void *Nmrx_ExpTransfer_RemoveApplicationData(Nmrx_ExpTransfer self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpTransfer self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrx_ExpTransfer_Set(Nmrx_ExpTransfer self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpTransfer self
  @param  Acco_AccessObject value
**/
extern void *Nmrx_ExpTransfer_SetAccess(Nmrx_ExpTransfer self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpTransfer self
  @param  ApiList values
**/
extern void *Nmrx_ExpTransfer_SetApplicationData(Nmrx_ExpTransfer self, ApiList values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @param  ApiSet values
**/
extern void *Nmrx_ExpTransfer_SetAtomSites(Nmrx_ExpTransfer self, ApiSet values);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpTransfer.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpTransfer self
  @param  ApiInteger value
**/
extern void *Nmrx_ExpTransfer_SetSerial(Nmrx_ExpTransfer self, ApiInteger value);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpTransfer.transferToSelf

Does 
transfer permit magnetisation to remain on the same site ('diagonal' 
peak)?
  @param  Nmrx_ExpTransfer self
  @param  ApiBoolean value
**/
extern void *Nmrx_ExpTransfer_SetTransferToSelf(Nmrx_ExpTransfer self, ApiBoolean value);

/**
  Set for ccp.nmr.NmrExpPrototype.ExpTransfer.transferType

Type of 
transfer. E.g. NOESY. Intended to describe the minimum information 
necessary to establish the relationship between the ExpAtomSites 
connected by the transfer
  @param  Nmrx_ExpTransfer self
  @param  ApiString value
**/
extern void *Nmrx_ExpTransfer_SetTransferType(Nmrx_ExpTransfer self, ApiString value);

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpTransfer.atomSites

AtomSites 
connected by Transfer
  @param  Nmrx_ExpTransfer self
  @returns   the result
**/
extern ApiList Nmrx_ExpTransfer_SortedAtomSites(Nmrx_ExpTransfer self);

#endif /* __incl__ccp_api_nmr_NmrExpPrototype_ExpTransfer_h__ */
