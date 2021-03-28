
#ifndef __incl__ccpnmr_api_Analysis_SpectrumWindowPane_h__
#define __incl__ccpnmr_api_Analysis_SpectrumWindowPane_h__

#include "ccp.h"

/*
  Spectrum display area within window. Normal contour SpectrumWindows only have one.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindowPane_AddApplicationData(Anal_SpectrumWindowPane self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindowPane_CheckAllValid(Anal_SpectrumWindowPane self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindowPane_CheckValid(Anal_SpectrumWindowPane self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval0(Anal_SpectrumWindowPane self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
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
extern ApiList Anal_SpectrumWindowPane_FindAllApplicationData_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval0(Anal_SpectrumWindowPane self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
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
extern ApiSet Anal_SpectrumWindowPane_FindAllAxisPanels_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval0(Anal_SpectrumWindowPane self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
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
extern ApiSet Anal_SpectrumWindowPane_FindAllSlicePanels_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval0(Anal_SpectrumWindowPane self);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
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
extern ApiSet Anal_SpectrumWindowPane_FindAllSpectrumWindowViews_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval0(Anal_SpectrumWindowPane self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
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
extern Impl_ApplicationData Anal_SpectrumWindowPane_FindFirstApplicationData_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval0(Anal_SpectrumWindowPane self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link 
to class AxisPanel
  @param  Anal_SpectrumWindowPane self
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
extern Anal_AxisPanel Anal_SpectrumWindowPane_FindFirstAxisPanel_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval0(Anal_SpectrumWindowPane self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link 
to class SlicePanel
  @param  Anal_SpectrumWindowPane self
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
extern Anal_SlicePanel Anal_SpectrumWindowPane_FindFirstSlicePanel_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView(Anal_SpectrumWindowPane self, ApiMap conditions);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval0(Anal_SpectrumWindowPane self);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval1(Anal_SpectrumWindowPane self, char * key, ApiObject value);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval2(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval3(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child link to 
class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
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
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_FindFirstSpectrumWindowView_keyval4(Anal_SpectrumWindowPane self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_SpectrumWindowPane_Get(Anal_SpectrumWindowPane self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Acco_AccessObject Anal_SpectrumWindowPane_GetAccess(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Acco_AccessObject Anal_SpectrumWindowPane_GetActiveAccess(Anal_SpectrumWindowPane self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_GetApplicationData(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.aspectRatio

The ratio 
between the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiFloat Anal_SpectrumWindowPane_GetAspectRatio(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindowPane_GetAxisPanels(Anal_SpectrumWindowPane self);

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_SpectrumWindowPane Anal_SpectrumWindowPane_GetByKey(Anal_SpectrumWindowPane self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowPane_GetClassName(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_GetFieldNames(Anal_SpectrumWindowPane self);

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_SpectrumWindowPane_GetFullKey(Anal_SpectrumWindowPane self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowPane_GetInConstructor(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindowPane_GetIsDeleted(Anal_SpectrumWindowPane self);

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @returns  Local object key
**/
extern ApiObject Anal_SpectrumWindowPane_GetLocalKey(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.name

An arbitrary 
user-defined name for the window.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowPane_GetName(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowPane_GetPackageName(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowPane_GetPackageShortName(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.parent

link to parent object 
- synonym for spectrumWindow
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Anal_SpectrumWindow Anal_SpectrumWindowPane_GetParent(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindowPane_GetQualifiedName(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_SpectrumWindowPane_GetRoot(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiInteger Anal_SpectrumWindowPane_GetSerial(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindowPane_GetSlicePanels(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.sliceRange

Range for 
intensity axis on 1D slice display. The same value is used for both x 
and y slices.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_GetSliceRange(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindow

parent link
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Anal_SpectrumWindow Anal_SpectrumWindowPane_GetSpectrumWindow(Anal_SpectrumWindowPane self);

/**
  Get for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindowPane_GetSpectrumWindowViews(Anal_SpectrumWindowPane self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern Impl_TopObject Anal_SpectrumWindowPane_GetTopObject(Anal_SpectrumWindowPane self);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindow parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SpectrumWindowPane Anal_SpectrumWindowPane_Init(Anal_SpectrumWindow parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindow parent
  @returns  the new object
**/
extern Anal_SpectrumWindowPane Anal_SpectrumWindowPane_Init_reqd(Anal_SpectrumWindow parent);

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_NewAxisPanel(Anal_SpectrumWindowPane self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindowPane self
  @param  char * label
  @returns  the new object
**/
extern Anal_AxisPanel Anal_SpectrumWindowPane_NewAxisPanel_reqd(Anal_SpectrumWindowPane self, char * label);

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_NewSlicePanel(Anal_SpectrumWindowPane self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindowPane self
  @param  char * label
  @returns  the new object
**/
extern Anal_SlicePanel Anal_SpectrumWindowPane_NewSlicePanel_reqd(Anal_SpectrumWindowPane self, char * label);

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_NewSpectrumWindowView(Anal_SpectrumWindowPane self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindowPane_NewSpectrumWindowView_reqd(Anal_SpectrumWindowPane self, Anal_AnalysisSpectrum analysisSpectrum);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindowPane_RemoveApplicationData(Anal_SpectrumWindowPane self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindowPane
  @param  Anal_SpectrumWindowPane self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_SpectrumWindowPane_Set(Anal_SpectrumWindowPane self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindowPane self
  @param  Acco_AccessObject value
**/
extern void *Anal_SpectrumWindowPane_SetAccess(Anal_SpectrumWindowPane self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindowPane self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindowPane_SetApplicationData(Anal_SpectrumWindowPane self, ApiList values);

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.aspectRatio

The ratio 
between the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindowPane self
  @param  ApiFloat value
**/
extern void *Anal_SpectrumWindowPane_SetAspectRatio(Anal_SpectrumWindowPane self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.name

An arbitrary 
user-defined name for the window.
  @param  Anal_SpectrumWindowPane self
  @param  ApiString value
**/
extern void *Anal_SpectrumWindowPane_SetName(Anal_SpectrumWindowPane self, ApiString value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Anal_SpectrumWindowPane self
  @param  ApiInteger value
**/
extern void *Anal_SpectrumWindowPane_SetSerial(Anal_SpectrumWindowPane self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.SpectrumWindowPane.sliceRange

Range for 
intensity axis on 1D slice display. The same value is used for both x 
and y slices.
  @param  Anal_SpectrumWindowPane self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindowPane_SetSliceRange(Anal_SpectrumWindowPane self, ApiList values);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_SortedAxisPanels(Anal_SpectrumWindowPane self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_SortedSlicePanels(Anal_SpectrumWindowPane self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindowPane.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindowPane self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindowPane_SortedSpectrumWindowViews(Anal_SpectrumWindowPane self);

#endif /* __incl__ccpnmr_api_Analysis_SpectrumWindowPane_h__ */
