"""
======================COPYRIGHT/LICENSE START==========================

General.py: Data compatibility handling

Copyright (C) 2007 Rasmus Fogh (CCPN project)
 
=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../../license/LGPL.license.
 
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

======================COPYRIGHT/LICENSE END============================

To obtain more information about this code:

- CCPN website (http://www.ccpn.ac.uk)

- contact Rasmus Fogh (ccpn@bioc.cam.ac.uk)

=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following reference:

===========================REFERENCE START=============================
Rasmus H. Fogh, Wayne Boucher, Wim F. Vranken, Anne
Pajon, Tim J. Stevens, T.N. Bhat, John Westbrook, John M.C. Ionides and
Ernest D. Laue (2005). A framework for scientific data modeling and 
automated software development. Bioinformatics 21, 1678-1684.
===========================REFERENCE END===============================
 
"""

# functions to convert fullKeys before application
fullKeyConverters = {}

# guids of elements that should be treated as old
elemsTreatedAsOld = set((
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:52_00002',
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:49_00001',
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:52_00008',
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:52_00010',
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:52_00006',
'www.ccpn.ac.uk_Fogh_2008-09-24-15:20:52_00004',
'www.ccpn.ac.uk_Fogh_2006-08-16-18:20:11_00004'
))

# pairs of element guids that should be treated as matching, e.g. whe n
# a single element must match with several elements in subclasses

# these are links from MemopsRoot to individual TopObjects that all have 
# changed their guids in a model change.
elementPairings = []

def extraMapChanges(globalMapping):
  """ Extra map changes specific for a given step
  """
  
  # rename of StructureValidation package to Validation
  dd = globalMapping.get('VALD')
  if dd is not None:
    dd['exolinks']['.qName'] = 'ccp.molecule.StructureValidation'
    dd['abstractTypes']['.qName'] = 'ccp.molecule.StructureValidation'
  
  # NBNB removed for version merge - will go back later.
  #ANALmapChanges(globalMapping)

def ANALmapChanges(globalMapping):
  """ changes for ANAL (ccpnmr.Analysis) package
  
  Suspended. Not yet debugged.
  """
  
  # make changes for SpectrumWindow -> SpectrumWindowPane split
  # attributes that belong to SpectrumWindow are copied to
  # SpectrumWindowPane and set to 'delay'
  # they are attached to the actual SpectrumWindowPane, and
  # copied up to the proper location in SpectrumWindow by postprocessing
  loadMaps = globalMapping['loadMaps']
  SpWinMap = loadMaps['ANAL.SpectrumWindow']
  SpWinContent = SpWinMap['content']
  SpPaneMap = loadMaps['ANAL.SpectrumWindowPane']
  SpPaneContent = SpPaneMap['content']
  
  # copy maps from Window to WindowPane and set proc to delay
  ll = SpWinMap['headerAttrs'] + SpWinMap['simpleAttrs'] + SpWinMap['cplxAttrs']
  ll.remove('name')
  
  print 'XXX', ll
  
  for tag in ll:
    dd = SpWinContent[tag]
    dd['proc'] = 'delay'
    SpPaneContent[tag] = dd
  
  # set proc to skip for link into SpectrumWindow
  dd = loadMaps['ANAL.SpectrumWindowGroup']
  dd['content']['spectrumWindows']['proc'] = 'skip'
  
  # set custom constructor
  SpWinMap['constructor'] = constructWindowAndPane
  
  # copy WinPane attributes to Win
  ll2 = ['aspectRatio', 'sliceRange', 'slicePanels', 'axisPanels', 
         'spectrumWindowViews']
  for tag in ll2:
    SpWinContent[tag] = SpPaneContent[tag]
    loadMaps['ANAL.SpectrumWindow.%s' % tag] = (
      loadMaps['ANAL.SpectrumWindowPane.%s' % tag])
  
  
  # disable child link setting to SpectrumWindow
  dd = globalMapping['loadMaps']['ANAL.AnalysisProject']
  dd['children'].remove('spectrumWindows')
  #
  return


def constructWindowAndPane(analysisProject):
  """ Special constructor.
  Creates both SpectrumWindow and SpectrumWindowPane
  Called for the slot fo the former but returns the latter
  """
  spectrumWindow = analysisProject.newSpectrumWindow()
  spectrumWindowPane = spectrumWindow.newSpectrumWindowPane(serial=1)
  return spectrumWindowPane
