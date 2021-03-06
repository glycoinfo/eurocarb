"""
#######################################################################

CCPN Data Model version 2.0.b2

Autogenerated by PyXmlMapWrite revision 1.24.2.3 on Mon Apr  6 17:00:37 2009
  from data model element ccpnmr.AnalysisProfile revision 1.3.2.8

#######################################################################
======================COPYRIGHT/LICENSE START==========================

AnalysisProfile.py: python XML-I/O-mapping for CCPN data model, MetaPackage ccpnmr.AnalysisProfile

Copyright (C) 2007 Rasmus Fogh (CCPN Project)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../license/LGPL.license
 
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA


======================COPYRIGHT/LICENSE END============================

for further information, please contact :

- CCPN website (http://www.ccpn.ac.uk/)

- email: ccpn@bioc.cam.ac.uk

=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following references:

===========================REFERENCE START=============================
Wim F. Vranken, Wayne Boucher, Tim J. Stevens, Rasmus
H. Fogh, Anne Pajon, Miguel Llinas, Eldon L. Ulrich, John L. Markley, John
Ionides and Ernest D. Laue (2005). The CCPN Data Model for NMR Spectroscopy:
Development of a Software Pipeline. Proteins 59, 687 - 696.

Rasmus H. Fogh, Wayne Boucher, Wim F. Vranken, Anne
Pajon, Tim J. Stevens, T.N. Bhat, John Westbrook, John M.C. Ionides and
Ernest D. Laue (2005). A framework for scientific data modeling and automated
software development. Bioinformatics 21, 1678-1684.


This file was generated with the Memops software generation framework,
and contains original contributions embedded in the framework

===========================REFERENCE END===============================
"""
from memops.general.Constants import baseDataTypeModule as basicDataTypes
# 
#  Current package api
import ccpnmr.api.AnalysisProfile

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package ANAP, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('ANAP').get('abstractTypes')
  exolinks = globalMap.get('ANAP').get('exolinks')

  # DataType GraphicsHandlerType
  currentMap = {}
  abstractTypes['GraphicsHandlerType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-10-03-11:26:03_00001'] = currentMap
  loadMaps['ANAP.GraphicsHandlerType'] = currentMap
  currentMap['tag'] = 'ANAP.GraphicsHandlerType'
  currentMap['type'] = 'simple'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-10-03-11:26:03_00001'
  currentMap['toStr'] = 'text'
  currentMap['cnvrt'] = 'text'

  # Class AnalysisProfile
  currentMap = {}
  abstractTypes['AnalysisProfile'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00004'] = currentMap
  loadMaps['ANAP.AnalysisProfile'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00004'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'analysisProfiles'
  currentMap['isTop'] = True
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.AnalysisProfile
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute AnalysisProfile.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute AnalysisProfile.bgColor
  currentMap = {}
  contentMap['bgColor'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00031'] = currentMap
  loadMaps['ANAP.AnalysisProfile.bgColor'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.bgColor'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00031'
  currentMap['name'] = 'bgColor'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['default'] = '#FFFFFF'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00007')

  # Attribute AnalysisProfile.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00039')

  # Attribute AnalysisProfile.fgColor
  currentMap = {}
  contentMap['fgColor'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00032'] = currentMap
  loadMaps['ANAP.AnalysisProfile.fgColor'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.fgColor'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00032'
  currentMap['name'] = 'fgColor'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['default'] = '#000000'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00007')

  # Attribute AnalysisProfile.font
  currentMap = {}
  contentMap['font'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00030'] = currentMap
  loadMaps['ANAP.AnalysisProfile.font'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.font'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00030'
  currentMap['name'] = 'font'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute AnalysisProfile.graphicsHandler
  currentMap = {}
  contentMap['graphicsHandler'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00040'] = currentMap
  loadMaps['ANAP.AnalysisProfile.graphicsHandler'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.graphicsHandler'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00040'
  currentMap['name'] = 'graphicsHandler'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 'Tk'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-10-03-11:26:03_00001')

  # Attribute AnalysisProfile.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute AnalysisProfile.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00041')

  # Attribute AnalysisProfile.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00044')

  # Attribute AnalysisProfile.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00029'] = currentMap
  loadMaps['ANAP.AnalysisProfile.name'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00029'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute AnalysisProfile.panView
  currentMap = {}
  contentMap['panView'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00036'] = currentMap
  loadMaps['ANAP.AnalysisProfile.panView'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.panView'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00036'
  currentMap['name'] = 'panView'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = True
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.transientDialogs
  currentMap = {}
  contentMap['transientDialogs'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00037'] = currentMap
  loadMaps['ANAP.AnalysisProfile.transientDialogs'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.transientDialogs'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00037'
  currentMap['name'] = 'transientDialogs'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = True
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.transientWindows
  currentMap = {}
  contentMap['transientWindows'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00038'] = currentMap
  loadMaps['ANAP.AnalysisProfile.transientWindows'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.transientWindows'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00038'
  currentMap['name'] = 'transientWindows'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = False
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.twoCharShortcuts
  currentMap = {}
  contentMap['twoCharShortcuts'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00039'] = currentMap
  loadMaps['ANAP.AnalysisProfile.twoCharShortcuts'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.twoCharShortcuts'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00039'
  currentMap['name'] = 'twoCharShortcuts'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = False
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.useCrosshair
  currentMap = {}
  contentMap['useCrosshair'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00034'] = currentMap
  loadMaps['ANAP.AnalysisProfile.useCrosshair'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.useCrosshair'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00034'
  currentMap['name'] = 'useCrosshair'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = True
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.useGlobalShortcuts
  currentMap = {}
  contentMap['useGlobalShortcuts'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00035'] = currentMap
  loadMaps['ANAP.AnalysisProfile.useGlobalShortcuts'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.useGlobalShortcuts'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00035'
  currentMap['name'] = 'useGlobalShortcuts'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['default'] = False
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute AnalysisProfile.webBrowser
  currentMap = {}
  contentMap['webBrowser'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00033'] = currentMap
  loadMaps['ANAP.AnalysisProfile.webBrowser'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.webBrowser'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00033'
  currentMap['name'] = 'webBrowser'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role AnalysisProfile.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role AnalysisProfile.colorSchemes
  currentMap = {}
  contentMap['colorSchemes'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00026'] = currentMap
  loadMaps['ANAP.AnalysisProfile.colorSchemes'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.colorSchemes'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00026'
  currentMap['name'] = 'colorSchemes'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ANAP').get('abstractTypes')

  # Role AnalysisProfile.macros
  currentMap = {}
  contentMap['macros'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00022'] = currentMap
  loadMaps['ANAP.AnalysisProfile.macros'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.macros'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00022'
  currentMap['name'] = 'macros'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ANAP').get('abstractTypes')

  # Role AnalysisProfile.marksColor
  currentMap = {}
  contentMap['marksColor'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00028'] = currentMap
  loadMaps['ANAP.AnalysisProfile.marksColor'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.marksColor'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00028'
  currentMap['name'] = 'marksColor'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['implSkip'] = True
  currentMap['copyOverride'] = True

  # Role AnalysisProfile.refExpProfiles
  currentMap = {}
  contentMap['refExpProfiles'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00024'] = currentMap
  loadMaps['ANAP.AnalysisProfile.refExpProfiles'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.refExpProfiles'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00024'
  currentMap['name'] = 'refExpProfiles'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ANAP').get('abstractTypes')

  # Role AnalysisProfile.residueProfiles
  currentMap = {}
  contentMap['residueProfiles'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00020'] = currentMap
  loadMaps['ANAP.AnalysisProfile.residueProfiles'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.residueProfiles'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00020'
  currentMap['name'] = 'residueProfiles'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ANAP').get('abstractTypes')

  # Role AnalysisProfile.rulersColor
  currentMap = {}
  contentMap['rulersColor'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00027'] = currentMap
  loadMaps['ANAP.AnalysisProfile.rulersColor'] = currentMap
  currentMap['tag'] = 'ANAP.AnalysisProfile.rulersColor'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00027'
  currentMap['name'] = 'rulersColor'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['implSkip'] = True
  currentMap['copyOverride'] = True
  # End of AnalysisProfile

  currentMap = abstractTypes.get('AnalysisProfile')
  aList = ['createdBy', 'graphicsHandler', 'guid', 'isModifiable', 'lastUnlockedBy', 'name', 'panView', 'transientDialogs', 'transientWindows', 'twoCharShortcuts', 'useCrosshair', 'useGlobalShortcuts', 'webBrowser']
  currentMap['headerAttrs'] = aList
  aList = ['bgColor', 'fgColor', 'font', 'marksColor', 'rulersColor']
  currentMap['simpleAttrs'] = aList
  aList = ['residueProfiles', 'refExpProfiles', 'macros', 'colorSchemes', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['colorSchemes', 'macros', 'refExpProfiles', 'residueProfiles']
  currentMap['children'] = aList

  # Class ColorScheme
  currentMap = {}
  abstractTypes['ColorScheme'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00002'] = currentMap
  loadMaps['ANAP.ColorScheme'] = currentMap
  currentMap['tag'] = 'ANAP.ColorScheme'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00002'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'colorSchemes'
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.ColorScheme
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute ColorScheme.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute ColorScheme.colors
  currentMap = {}
  contentMap['colors'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00043'] = currentMap
  loadMaps['ANAP.ColorScheme.colors'] = currentMap
  currentMap['tag'] = 'ANAP.ColorScheme.colors'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00043'
  currentMap['name'] = 'colors'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00007')

  # Attribute ColorScheme.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00007'] = currentMap
  loadMaps['ANAP.ColorScheme.name'] = currentMap
  currentMap['tag'] = 'ANAP.ColorScheme.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00007'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role ColorScheme.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')
  # End of ColorScheme

  currentMap = abstractTypes.get('ColorScheme')
  aList = ['colors', 'name']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Macro
  currentMap = {}
  abstractTypes['Macro'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00001'] = currentMap
  loadMaps['ANAP.Macro'] = currentMap
  currentMap['tag'] = 'ANAP.Macro'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00001'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'macros'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.Macro
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Macro.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Macro.details
  currentMap = {}
  contentMap['details'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00005'] = currentMap
  loadMaps['ANAP.Macro.details'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.details'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00005'
  currentMap['name'] = 'details'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute Macro.function
  currentMap = {}
  contentMap['function'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00002'] = currentMap
  loadMaps['ANAP.Macro.function'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.function'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00002'
  currentMap['name'] = 'function'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Macro.isInMenu
  currentMap = {}
  contentMap['isInMenu'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-29-13:48:16_00005'] = currentMap
  loadMaps['ANAP.Macro.isInMenu'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.isInMenu'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-29-13:48:16_00005'
  currentMap['name'] = 'isInMenu'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = False
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute Macro.isInMouseMenu
  currentMap = {}
  contentMap['isInMouseMenu'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-29-13:48:16_00006'] = currentMap
  loadMaps['ANAP.Macro.isInMouseMenu'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.isInMouseMenu'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-29-13:48:16_00006'
  currentMap['name'] = 'isInMouseMenu'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = False
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute Macro.module
  currentMap = {}
  contentMap['module'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00003'] = currentMap
  loadMaps['ANAP.Macro.module'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.module'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00003'
  currentMap['name'] = 'module'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Macro.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:10_00001'] = currentMap
  loadMaps['ANAP.Macro.name'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:10_00001'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Macro.ordering
  currentMap = {}
  contentMap['ordering'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00004'] = currentMap
  loadMaps['ANAP.Macro.ordering'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.ordering'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00004'
  currentMap['name'] = 'ordering'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['proc'] = 'direct'
  currentMap['default'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Macro.path
  currentMap = {}
  contentMap['path'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00001'] = currentMap
  loadMaps['ANAP.Macro.path'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.path'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00001'
  currentMap['name'] = 'path'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Macro.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:09_00001'] = currentMap
  loadMaps['ANAP.Macro.serial'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:09_00001'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Macro.shortcut
  currentMap = {}
  contentMap['shortcut'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00006'] = currentMap
  loadMaps['ANAP.Macro.shortcut'] = currentMap
  currentMap['tag'] = 'ANAP.Macro.shortcut'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-15:11:12_00006'
  currentMap['name'] = 'shortcut'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role Macro.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')
  # End of Macro

  currentMap = abstractTypes.get('Macro')
  aList = ['function', 'isInMenu', 'isInMouseMenu', 'module', 'ordering', 'serial', 'shortcut']
  currentMap['headerAttrs'] = aList
  aList = ['details', 'name', 'path']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class RefExpProfile
  currentMap = {}
  abstractTypes['RefExpProfile'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00006'] = currentMap
  loadMaps['ANAP.RefExpProfile'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00006'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'refExpProfiles'
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.RefExpProfile
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute RefExpProfile.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute RefExpProfile.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00046'] = currentMap
  loadMaps['ANAP.RefExpProfile.name'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00046'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute RefExpProfile.peakSymbolColors
  currentMap = {}
  contentMap['peakSymbolColors'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00048'] = currentMap
  loadMaps['ANAP.RefExpProfile.peakSymbolColors'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.peakSymbolColors'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00048'
  currentMap['name'] = 'peakSymbolColors'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00007')

  # Attribute RefExpProfile.peakTextColors
  currentMap = {}
  contentMap['peakTextColors'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00049'] = currentMap
  loadMaps['ANAP.RefExpProfile.peakTextColors'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.peakTextColors'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00049'
  currentMap['name'] = 'peakTextColors'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00007')

  # Attribute RefExpProfile.refExpNames
  currentMap = {}
  contentMap['refExpNames'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00047'] = currentMap
  loadMaps['ANAP.RefExpProfile.refExpNames'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.refExpNames'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00047'
  currentMap['name'] = 'refExpNames'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role RefExpProfile.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role RefExpProfile.negColorSchemes
  currentMap = {}
  contentMap['negColorSchemes'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00045'] = currentMap
  loadMaps['ANAP.RefExpProfile.negColorSchemes'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.negColorSchemes'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00045'
  currentMap['name'] = 'negColorSchemes'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True

  # Role RefExpProfile.posColorSchemes
  currentMap = {}
  contentMap['posColorSchemes'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00041'] = currentMap
  loadMaps['ANAP.RefExpProfile.posColorSchemes'] = currentMap
  currentMap['tag'] = 'ANAP.RefExpProfile.posColorSchemes'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00041'
  currentMap['name'] = 'posColorSchemes'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True
  # End of RefExpProfile

  currentMap = abstractTypes.get('RefExpProfile')
  aList = ['name']
  currentMap['headerAttrs'] = aList
  aList = ['peakSymbolColors', 'peakTextColors', 'refExpNames', 'negColorSchemes', 'posColorSchemes']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class ResidueProfile
  currentMap = {}
  abstractTypes['ResidueProfile'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00005'] = currentMap
  loadMaps['ANAP.ResidueProfile'] = currentMap
  currentMap['tag'] = 'ANAP.ResidueProfile'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00005'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'residueProfiles'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.ResidueProfile
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute ResidueProfile.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute ResidueProfile.ccpCode
  currentMap = {}
  contentMap['ccpCode'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00051'] = currentMap
  loadMaps['ANAP.ResidueProfile.ccpCode'] = currentMap
  currentMap['tag'] = 'ANAP.ResidueProfile.ccpCode'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00051'
  currentMap['name'] = 'ccpCode'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2007-09-12-18:31:28_00003')

  # Attribute ResidueProfile.guiName
  currentMap = {}
  contentMap['guiName'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00052'] = currentMap
  loadMaps['ANAP.ResidueProfile.guiName'] = currentMap
  currentMap['tag'] = 'ANAP.ResidueProfile.guiName'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00052'
  currentMap['name'] = 'guiName'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2007-09-12-18:31:28_00003')

  # Attribute ResidueProfile.molType
  currentMap = {}
  contentMap['molType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00050'] = currentMap
  loadMaps['ANAP.ResidueProfile.molType'] = currentMap
  currentMap['tag'] = 'ANAP.ResidueProfile.molType'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:52_00050'
  currentMap['name'] = 'molType'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:52_00024')

  # Role ResidueProfile.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')
  # End of ResidueProfile

  currentMap = abstractTypes.get('ResidueProfile')
  aList = ['ccpCode', 'guiName', 'molType']
  currentMap['headerAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Out-of-package link to AnalysisProfile
  currentMap = {}
  exolinks['AnalysisProfile'] = currentMap
  loadMaps['ANAP.exo-AnalysisProfile'] = currentMap
  currentMap['tag'] = 'ANAP.exo-AnalysisProfile'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00004'
  currentMap['name'] = 'AnalysisProfile'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.AnalysisProfile
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))

  # Out-of-package link to ColorScheme
  currentMap = {}
  exolinks['ColorScheme'] = currentMap
  loadMaps['ANAP.exo-ColorScheme'] = currentMap
  currentMap['tag'] = 'ANAP.exo-ColorScheme'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00002'
  currentMap['name'] = 'ColorScheme'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.ColorScheme
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))

  # Out-of-package link to Macro
  currentMap = {}
  exolinks['Macro'] = currentMap
  loadMaps['ANAP.exo-Macro'] = currentMap
  currentMap['tag'] = 'ANAP.exo-Macro'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-08-11:06:22_00001'
  currentMap['name'] = 'Macro'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.Macro
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to RefExpProfile
  currentMap = {}
  exolinks['RefExpProfile'] = currentMap
  loadMaps['ANAP.exo-RefExpProfile'] = currentMap
  currentMap['tag'] = 'ANAP.exo-RefExpProfile'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00006'
  currentMap['name'] = 'RefExpProfile'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.RefExpProfile
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))

  # Out-of-package link to ResidueProfile
  currentMap = {}
  exolinks['ResidueProfile'] = currentMap
  loadMaps['ANAP.exo-ResidueProfile'] = currentMap
  currentMap['tag'] = 'ANAP.exo-ResidueProfile'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-05-05-15:12:50_00005'
  currentMap['name'] = 'ResidueProfile'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccpnmr.api.AnalysisProfile.ResidueProfile
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:52_00024'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2007-09-12-18:31:28_00003'))
