
#ifndef __incl__ccpnmr_api_Analysis_SpectrumWindow_h__
#define __incl__ccpnmr_api_Analysis_SpectrumWindow_h__

#include "ccp.h"

/*
  This is for the multi-dimensional display of one or more spectra simultaneously.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindow_AddApplicationData(Anal_SpectrumWindow self, Impl_ApplicationData value);

/**
  Add for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Anal_SpectrumWindowGroup value
**/
extern void *Anal_SpectrumWindow_AddSpectrumWindowGroup(Anal_SpectrumWindow self, Anal_SpectrumWindowGroup value);

/**
  CheckAllValid for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindow_CheckAllValid(Anal_SpectrumWindow self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean complete
**/
extern void *Anal_SpectrumWindow_CheckValid(Anal_SpectrumWindow self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindow_FindAllApplicationData(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval0(Anal_SpectrumWindow self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
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
extern ApiList Anal_SpectrumWindow_FindAllApplicationData_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval0(Anal_SpectrumWindow self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
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
extern ApiSet Anal_SpectrumWindow_FindAllAxisPanels_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval0(Anal_SpectrumWindow self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
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
extern ApiSet Anal_SpectrumWindow_FindAllSlicePanels_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval0(Anal_SpectrumWindow self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
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
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowGroups_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval0(Anal_SpectrumWindow self);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
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
extern ApiSet Anal_SpectrumWindow_FindAllSpectrumWindowViews_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval0(Anal_SpectrumWindow self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
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
extern Impl_ApplicationData Anal_SpectrumWindow_FindFirstApplicationData_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval0(Anal_SpectrumWindow self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
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
extern Anal_AxisPanel Anal_SpectrumWindow_FindFirstAxisPanel_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval0(Anal_SpectrumWindow self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
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
extern Anal_SlicePanel Anal_SpectrumWindow_FindFirstSlicePanel_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval0(Anal_SpectrumWindow self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
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
extern Anal_SpectrumWindowGroup Anal_SpectrumWindow_FindFirstSpectrumWindowGroup_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView(Anal_SpectrumWindow self, ApiMap conditions);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval0(Anal_SpectrumWindow self);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval1(Anal_SpectrumWindow self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval2(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval3(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
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
extern Anal_SpectrumWindowView Anal_SpectrumWindow_FindFirstSpectrumWindowView_keyval4(Anal_SpectrumWindow self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Anal_SpectrumWindow_Get(Anal_SpectrumWindow self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern Acco_AccessObject Anal_SpectrumWindow_GetAccess(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.analysisProject

parent link
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_SpectrumWindow_GetAnalysisProject(Anal_SpectrumWindow self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_GetApplicationData(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.aspectRatio

The ratio between 
the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiFloat Anal_SpectrumWindow_GetAspectRatio(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to class 
AxisPanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindow_GetAxisPanels(Anal_SpectrumWindow self);

/**
  GetByKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Anal_SpectrumWindow Anal_SpectrumWindow_GetByKey(Anal_SpectrumWindow self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetClassName(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_GetFieldNames(Anal_SpectrumWindow self);

/**
  GetFullKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Anal_SpectrumWindow_GetFullKey(Anal_SpectrumWindow self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetInConstructor(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isCanvasLabelShown

Is canvas 
label shown?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsCanvasLabelShown(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isCanvasMidpointShown

Is canvas 
midpoint shown?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsCanvasMidpointShown(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsDeleted(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isIconified

Whether or not the 
window is iconified.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsIconified(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isXSliceDrawn

Whether a 1D 
horizontal slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsXSliceDrawn(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isXTickShown

Show ticks on x 
axis?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsXTickShown(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isYSliceDrawn

Whether a 1D 
vertical slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsYSliceDrawn(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.isYTickShown

Show tick marks on 
y axis?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetIsYTickShown(Anal_SpectrumWindow self);

/**
  GetLocalKey for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns  Local object key
**/
extern ApiObject Anal_SpectrumWindow_GetLocalKey(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.location

Location in pixel 
numbers of the Spectrum Window (x then y).
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_GetLocation(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.name

An arbitrary user-defined 
name for the window.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetName(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetPackageName(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetPackageShortName(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.parent

link to parent object - 
synonym for analysisProject
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern Anal_AnalysisProject Anal_SpectrumWindow_GetParent(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetQualifiedName(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern Impl_MemopsRoot Anal_SpectrumWindow_GetRoot(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiInteger Anal_SpectrumWindow_GetSerial(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to class 
SlicePanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindow_GetSlicePanels(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.sliceRange

Range for intensity 
axis on 1D slice display. The same value is used for both x and y 
slices.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_GetSliceRange(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindow_GetSpectrumWindowGroups(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child link 
to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiSet Anal_SpectrumWindow_GetSpectrumWindowViews(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.stripAxis

Strip axis direction 
(either 'x' or 'y')
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiString Anal_SpectrumWindow_GetStripAxis(Anal_SpectrumWindow self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern Impl_TopObject Anal_SpectrumWindow_GetTopObject(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.useMultiplePeakLists

Use all 
active peaklists in peak selection, picking, etc.. If False use only one 
PeakList
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetUseMultiplePeakLists(Anal_SpectrumWindow self);

/**
  Get for ccpnmr.Analysis.SpectrumWindow.useOverrideRegion

Should 
override region be used for printing etc.?
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiBoolean Anal_SpectrumWindow_GetUseOverrideRegion(Anal_SpectrumWindow self);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SpectrumWindow Anal_SpectrumWindow_Init(Anal_AnalysisProject parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_AnalysisProject parent
  @param  char * name
  @returns  the new object
**/
extern Anal_SpectrumWindow Anal_SpectrumWindow_Init_reqd(Anal_AnalysisProject parent, char * name);

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_AxisPanel Anal_SpectrumWindow_NewAxisPanel(Anal_SpectrumWindow self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.AxisPanel
  @param  Anal_SpectrumWindow self
  @param  char * label
  @returns  the new object
**/
extern Anal_AxisPanel Anal_SpectrumWindow_NewAxisPanel_reqd(Anal_SpectrumWindow self, char * label);

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SlicePanel Anal_SpectrumWindow_NewSlicePanel(Anal_SpectrumWindow self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.SlicePanel
  @param  Anal_SpectrumWindow self
  @param  char * label
  @returns  the new object
**/
extern Anal_SlicePanel Anal_SpectrumWindow_NewSlicePanel_reqd(Anal_SpectrumWindow self, char * label);

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_NewSpectrumWindowView(Anal_SpectrumWindow self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.Analysis.SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @param  Anal_AnalysisSpectrum analysisSpectrum
  @returns  the new object
**/
extern Anal_SpectrumWindowView Anal_SpectrumWindow_NewSpectrumWindowView_reqd(Anal_SpectrumWindow self, Anal_AnalysisSpectrum analysisSpectrum);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  Impl_ApplicationData value
**/
extern void *Anal_SpectrumWindow_RemoveApplicationData(Anal_SpectrumWindow self, Impl_ApplicationData value);

/**
  Remove for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  Anal_SpectrumWindowGroup value
**/
extern void *Anal_SpectrumWindow_RemoveSpectrumWindowGroup(Anal_SpectrumWindow self, Anal_SpectrumWindowGroup value);

/**
  SetAttr for ccpnmr.Analysis.SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Anal_SpectrumWindow_Set(Anal_SpectrumWindow self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SpectrumWindow self
  @param  Acco_AccessObject value
**/
extern void *Anal_SpectrumWindow_SetAccess(Anal_SpectrumWindow self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindow_SetApplicationData(Anal_SpectrumWindow self, ApiList values);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.aspectRatio

The ratio between 
the y axis and x axis display units (in their given units).
  @param  Anal_SpectrumWindow self
  @param  ApiFloat value
**/
extern void *Anal_SpectrumWindow_SetAspectRatio(Anal_SpectrumWindow self, ApiFloat value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isCanvasLabelShown

Is canvas 
label shown?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsCanvasLabelShown(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isCanvasMidpointShown

Is canvas 
midpoint shown?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsCanvasMidpointShown(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isIconified

Whether or not the 
window is iconified.
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsIconified(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isXSliceDrawn

Whether a 1D 
horizontal slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsXSliceDrawn(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isXTickShown

Show ticks on x 
axis?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsXTickShown(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isYSliceDrawn

Whether a 1D 
vertical slice is drawn at the cursor position
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsYSliceDrawn(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.isYTickShown

Show tick marks on 
y axis?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetIsYTickShown(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.location

Location in pixel 
numbers of the Spectrum Window (x then y).
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindow_SetLocation(Anal_SpectrumWindow self, ApiList values);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.name

An arbitrary user-defined 
name for the window.
  @param  Anal_SpectrumWindow self
  @param  ApiString value
**/
extern void *Anal_SpectrumWindow_SetName(Anal_SpectrumWindow self, ApiString value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_SpectrumWindow self
  @param  ApiInteger value
**/
extern void *Anal_SpectrumWindow_SetSerial(Anal_SpectrumWindow self, ApiInteger value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.sliceRange

Range for intensity 
axis on 1D slice display. The same value is used for both x and y 
slices.
  @param  Anal_SpectrumWindow self
  @param  ApiList values
**/
extern void *Anal_SpectrumWindow_SetSliceRange(Anal_SpectrumWindow self, ApiList values);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @param  ApiSet values
**/
extern void *Anal_SpectrumWindow_SetSpectrumWindowGroups(Anal_SpectrumWindow self, ApiSet values);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.stripAxis

Strip axis direction 
(either 'x' or 'y')
  @param  Anal_SpectrumWindow self
  @param  ApiString value
**/
extern void *Anal_SpectrumWindow_SetStripAxis(Anal_SpectrumWindow self, ApiString value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.useMultiplePeakLists

Use all 
active peaklists in peak selection, picking, etc.. If False use only one 
PeakList
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetUseMultiplePeakLists(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Set for ccpnmr.Analysis.SpectrumWindow.useOverrideRegion

Should 
override region be used for printing etc.?
  @param  Anal_SpectrumWindow self
  @param  ApiBoolean value
**/
extern void *Anal_SpectrumWindow_SetUseOverrideRegion(Anal_SpectrumWindow self, ApiBoolean value);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.axisPanels

child link to 
class AxisPanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_SortedAxisPanels(Anal_SpectrumWindow self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.slicePanels

child link to 
class SlicePanel
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_SortedSlicePanels(Anal_SpectrumWindow self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.spectrumWindowGroups

the 
SpectrumWindowGroups of the SpectrumWindow
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_SortedSpectrumWindowGroups(Anal_SpectrumWindow self);

/**
  Sorted for ccpnmr.Analysis.SpectrumWindow.spectrumWindowViews

child 
link to class SpectrumWindowView
  @param  Anal_SpectrumWindow self
  @returns   the result
**/
extern ApiList Anal_SpectrumWindow_SortedSpectrumWindowViews(Anal_SpectrumWindow self);

#endif /* __incl__ccpnmr_api_Analysis_SpectrumWindow_h__ */
