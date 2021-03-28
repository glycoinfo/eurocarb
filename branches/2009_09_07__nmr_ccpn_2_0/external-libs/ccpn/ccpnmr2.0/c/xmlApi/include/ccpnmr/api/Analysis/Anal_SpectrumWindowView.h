
#ifndef __incl__ccpnmr_api_Analysis_SpectrumWindowView_h__
#define __incl__ccpnmr_api_Analysis_SpectrumWindowView_h__

#include "ccp.h"

/*
  Used for properties of spectra which depend on the particular SpectrumWindow being considered.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindowView_AddApplicationData(Anal_SpectrumWindowView self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindowView_CheckAllValid(Anal_SpectrumWindowView self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindowView_CheckValid(Anal_SpectrumWindowView self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval0(Anal_SpectrumWindowView self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
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
extern ApiList Anal_SpectrumWindowView_FindAllApplicationData_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval0(Anal_SpectrumWindowView self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
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
extern ApiSet Anal_SpectrumWindowView_FindAllAxisMappings_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval0(Anal_SpectrumWindowView self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
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
extern ApiSet Anal_SpectrumWindowView_FindAllWindowPeakLists_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval0(Anal_SpectrumWindowView self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
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
extern Impl_ApplicationData Anal_SpectrumWindowView_FindFirstApplicationData_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval0(Anal_SpectrumWindowView self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child 
link to class AxisMapping
  @param  Anal_SpectrumWindowView self
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
extern Anal_AxisMapping Anal_SpectrumWindowView_FindFirstAxisMapping_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList(Anal_SpectrumWindowView self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval0(Anal_SpectrumWindowView self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval1(Anal_SpectrumWindowView self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval2(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval3(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
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
extern Anal_WindowPeakList Anal_SpectrumWindowView_FindFirstWindowPeakList_keyval4(Anal_SpectrumWindowView self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_SpectrumWindowView_Get(Anal_SpectrumWindowView self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Acco_AccessObject Anal_SpectrumWindowView_GetAccess(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.analysisSpectrum

Analysis 
spectrum record referred to
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Anal_AnalysisSpectrum Anal_SpectrumWindowView_GetAnalysisSpectrum(Anal_SpectrumWindowView self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowView_GetApplicationData(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link to 
class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindowView_GetAxisMappings(Anal_SpectrumWindowView self);

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowView_GetByKey(Anal_SpectrumWindowView self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowView_GetClassName(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowView_GetFieldNames(Anal_SpectrumWindowView self);

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_SpectrumWindowView_GetFullKey(Anal_SpectrumWindowView self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetInConstructor(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetIsDeleted(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isInToolbar

Toggle for 
whether view is shown in window toolbar
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetIsInToolbar(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isNegVisible

Visibility 
toggle for negative contours.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetIsNegVisible(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isPosVisible

Visibility 
toggle for positive contours
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetIsPosVisible(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.isSliceVisible

Visibilty 
toggle for 1D slices
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowView_GetIsSliceVisible(Anal_SpectrumWindowView self);

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @returns  Local object key
**/
extern ApiObject Anal_SpectrumWindowView_GetLocalKey(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowView_GetPackageName(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowView_GetPackageShortName(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.parent

link to parent object 
- synonym for spectrumWindow
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Anal_SpectrumWindow Anal_SpectrumWindowView_GetParent(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowView_GetQualifiedName(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_SpectrumWindowView_GetRoot(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.spectrumWindow

parent link
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Anal_SpectrumWindow Anal_SpectrumWindowView_GetSpectrumWindow(Anal_SpectrumWindowView self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern Impl_TopObject Anal_SpectrumWindowView_GetTopObject(Anal_SpectrumWindowView self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child link 
to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindowView_GetWindowPeakLists(Anal_SpectrumWindowView self);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowView_Init(Anal_SpectrumWindow parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow parent
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowView_Init_reqd(Anal_SpectrumWindow parent, Anal_AnalysisSpectrum analysisSpectrum);

/**
  Factory function to create ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_NewAxisMapping(Anal_SpectrumWindowView self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AxisMapping
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisDataDim analysisDataDim
  @param  char * label
  @returns  the new object
**/
extern Anal_AxisMapping Anal_SpectrumWindowView_NewAxisMapping_reqd(Anal_SpectrumWindowView self, Anal_AnalysisDataDim analysisDataDim, char * label);

/**
  Factory function to create ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_NewWindowPeakList(Anal_SpectrumWindowView self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisPeakList analysisPeakList
  @returns  the new object
**/
extern Anal_WindowPeakList Anal_SpectrumWindowView_NewWindowPeakList_reqd(Anal_SpectrumWindowView self, Anal_AnalysisPeakList analysisPeakList);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindowView_RemoveApplicationData(Anal_SpectrumWindowView self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowView self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_SpectrumWindowView_Set(Anal_SpectrumWindowView self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowView self
  @param  Acco_AccessObject value
**/
extern void *Anal_SpectrumWindowView_SetAccess(Anal_SpectrumWindowView self, Acco_AccessObject value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.analysisSpectrum

Analysis 
spectrum record referred to
  @param  Anal_SpectrumWindowView self
  @param  Anal_AnalysisSpectrum value
**/
extern void *Anal_SpectrumWindowView_SetAnalysisSpectrum(Anal_SpectrumWindowView self, Anal_AnalysisSpectrum value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowView self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindowView_SetApplicationData(Anal_SpectrumWindowView self, ApiList values);

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isInToolbar

Toggle for 
whether view is shown in window toolbar
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindowView_SetIsInToolbar(Anal_SpectrumWindowView self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isNegVisible

Visibility 
toggle for negative contours.
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindowView_SetIsNegVisible(Anal_SpectrumWindowView self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isPosVisible

Visibility 
toggle for positive contours
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindowView_SetIsPosVisible(Anal_SpectrumWindowView self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowView.isSliceVisible

Visibilty 
toggle for 1D slices
  @param  Anal_SpectrumWindowView self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindowView_SetIsSliceVisible(Anal_SpectrumWindowView self, ApiBoolean value);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowView.axisMappings

child link 
to class AxisMapping
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowView_SortedAxisMappings(Anal_SpectrumWindowView self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowView.windowPeakLists

child 
link to class WindowPeakList
  @param  Anal_SpectrumWindowView self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowView_SortedWindowPeakLists(Anal_SpectrumWindowView self);

#endif /* __incl__ccpnmr_api_Analysis_SpectrumWindowView_h__ */
