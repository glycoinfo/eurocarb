
#ifndef __incl__ccpnmr_api_Analysis_AnalysisPopup_h__
#define __incl__ccpnmr_api_Analysis_AnalysisPopup_h__

#include "ccp.h"

/*
  Analysis popup information
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisPopup_AddApplicationData(Anal_AnalysisPopup self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisPopup_CheckAllValid(Anal_AnalysisPopup self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean complete
**/
extern void *Anal_AnalysisPopup_CheckValid(Anal_AnalysisPopup self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisPopup_FindAllApplicationData(Anal_AnalysisPopup self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval0(Anal_AnalysisPopup self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
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
extern ApiList Anal_AnalysisPopup_FindAllApplicationData_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions(Anal_AnalysisPopup self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval0(Anal_AnalysisPopup self);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
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
extern ApiSet Anal_AnalysisPopup_FindAllPopupOptions_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData(Anal_AnalysisPopup self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval0(Anal_AnalysisPopup self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
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
extern Impl_ApplicationData Anal_AnalysisPopup_FindFirstApplicationData_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption(Anal_AnalysisPopup self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval0(Anal_AnalysisPopup self);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval1(Anal_AnalysisPopup self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval2(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval3(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
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
extern Anal_PopupOption Anal_AnalysisPopup_FindFirstPopupOption_keyval4(Anal_AnalysisPopup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_AnalysisPopup_Get(Anal_AnalysisPopup self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisPopup_GetAccess(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Acco_AccessObject Anal_AnalysisPopup_GetActiveAccess(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.analysisProject

parent link
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AnalysisPopup_GetAnalysisProject(Anal_AnalysisPopup self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiList Anal_AnalysisPopup_GetApplicationData(Anal_AnalysisPopup self);

/**
  GetByKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_AnalysisPopup Anal_AnalysisPopup_GetByKey(Anal_AnalysisPopup self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetClassName(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiList Anal_AnalysisPopup_GetFieldNames(Anal_AnalysisPopup self);

/**
  GetFullKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_AnalysisPopup_GetFullKey(Anal_AnalysisPopup self, ApiBoolean useGuid);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.height

Popup Height
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisPopup_GetHeight(Anal_AnalysisPopup self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisPopup_GetInConstructor(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisPopup_GetIsDeleted(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.isOpen

Is popup open
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiBoolean Anal_AnalysisPopup_GetIsOpen(Anal_AnalysisPopup self);

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @returns  Local object key
**/
extern ApiObject Anal_AnalysisPopup_GetLocalKey(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.name

name of AnalysisPopup
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetName(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetPackageName(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetPackageShortName(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_AnalysisPopup_GetParent(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to class 
PopupOption
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiSet Anal_AnalysisPopup_GetPopupOptions(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetQualifiedName(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_AnalysisPopup_GetRoot(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.screenX

Screen X position
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisPopup_GetScreenX(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.screenY

Screen Y position
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisPopup_GetScreenY(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.title

Popup title
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiString Anal_AnalysisPopup_GetTitle(Anal_AnalysisPopup self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern Impl_TopObject Anal_AnalysisPopup_GetTopObject(Anal_AnalysisPopup self);

/**
  Get for ccpnmr.Analysis.AnalysisPopup.width

Popup width
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiInteger Anal_AnalysisPopup_GetWidth(Anal_AnalysisPopup self);

/**
  Constructor for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AnalysisPopup Anal_AnalysisPopup_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
extern Anal_AnalysisPopup Anal_AnalysisPopup_Init_reqd(Anal_AnalysisProject parent, char * name);

/**
  Factory function to create ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_PopupOption Anal_AnalysisPopup_NewPopupOption(Anal_AnalysisPopup self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.PopupOption
  @param  Anal_AnalysisPopup self
  @param  char * keyword
  @returns  the new object
**/
extern Anal_PopupOption Anal_AnalysisPopup_NewPopupOption_reqd(Anal_AnalysisPopup self, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  Impl_ApplicationData value
**/
extern void *Anal_AnalysisPopup_RemoveApplicationData(Anal_AnalysisPopup self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_AnalysisPopup_Set(Anal_AnalysisPopup self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisPopup self
  @param  Acco_AccessObject value
**/
extern void *Anal_AnalysisPopup_SetAccess(Anal_AnalysisPopup self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisPopup self
  @param  ApiList values
**/
extern void *Anal_AnalysisPopup_SetApplicationData(Anal_AnalysisPopup self, ApiList values);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.height

Popup Height
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisPopup_SetHeight(Anal_AnalysisPopup self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.isOpen

Is popup open
  @param  Anal_AnalysisPopup self
  @param  ApiBoolean value
**/
extern void *Anal_AnalysisPopup_SetIsOpen(Anal_AnalysisPopup self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.name

name of AnalysisPopup
  @param  Anal_AnalysisPopup self
  @param  ApiString value
**/
extern void *Anal_AnalysisPopup_SetName(Anal_AnalysisPopup self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.screenX

Screen X position
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisPopup_SetScreenX(Anal_AnalysisPopup self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.screenY

Screen Y position
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisPopup_SetScreenY(Anal_AnalysisPopup self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.title

Popup title
  @param  Anal_AnalysisPopup self
  @param  ApiString value
**/
extern void *Anal_AnalysisPopup_SetTitle(Anal_AnalysisPopup self, ApiString value);

/**
  Set for ccpnmr.Analysis.AnalysisPopup.width

Popup width
  @param  Anal_AnalysisPopup self
  @param  ApiInteger value
**/
extern void *Anal_AnalysisPopup_SetWidth(Anal_AnalysisPopup self, ApiInteger value);

/**
  Sorted for ccpnmr.Analysis.AnalysisPopup.popupOptions

child link to 
class PopupOption
  @param  Anal_AnalysisPopup self
  @returns   the result
**/
extern ApiList Anal_AnalysisPopup_SortedPopupOptions(Anal_AnalysisPopup self);

#endif /* __incl__ccpnmr_api_Analysis_AnalysisPopup_h__ */
