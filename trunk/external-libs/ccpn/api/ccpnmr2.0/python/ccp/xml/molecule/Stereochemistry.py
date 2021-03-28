"""
#######################################################################

CCPN Data Model version 2.0.b2

Autogenerated by PyXmlMapWrite revision 1.24.2.3 on Mon Apr  6 17:00:35 2009
  from data model element ccp.molecule.Stereochemistry revision 1.35.2.9

#######################################################################
======================COPYRIGHT/LICENSE START==========================

Stereochemistry.py: python XML-I/O-mapping for CCPN data model, MetaPackage ccp.molecule.Stereochemistry

Copyright (C) 2007  (CCPN Project)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../../license/LGPL.license
 
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
import ccp.api.molecule.Stereochemistry

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package STER, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('STER').get('abstractTypes')
  exolinks = globalMap.get('STER').get('exolinks')

  # Class RefStereochemistry
  currentMap = {}
  abstractTypes['RefStereochemistry'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:52_00055'] = currentMap
  loadMaps['STER.RefStereochemistry'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:52_00055'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'refStereochemistries'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.molecule.Stereochemistry.RefStereochemistry
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute RefStereochemistry.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute RefStereochemistry.details
  currentMap = {}
  contentMap['details'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00023'] = currentMap
  loadMaps['STER.RefStereochemistry.details'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry.details'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00023'
  currentMap['name'] = 'details'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute RefStereochemistry.numAtoms
  currentMap = {}
  contentMap['numAtoms'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00021'] = currentMap
  loadMaps['STER.RefStereochemistry.numAtoms'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry.numAtoms'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00021'
  currentMap['name'] = 'numAtoms'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute RefStereochemistry.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00019'] = currentMap
  loadMaps['STER.RefStereochemistry.serial'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00019'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute RefStereochemistry.stereoClass
  currentMap = {}
  contentMap['stereoClass'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00020'] = currentMap
  loadMaps['STER.RefStereochemistry.stereoClass'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry.stereoClass'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00020'
  currentMap['name'] = 'stereoClass'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute RefStereochemistry.values
  currentMap = {}
  contentMap['values'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00022'] = currentMap
  loadMaps['STER.RefStereochemistry.values'] = currentMap
  currentMap['tag'] = 'STER.RefStereochemistry.values'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00022'
  currentMap['name'] = 'values'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role RefStereochemistry.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')
  # End of RefStereochemistry

  currentMap = abstractTypes.get('RefStereochemistry')
  aList = ['numAtoms', 'serial', 'stereoClass']
  currentMap['headerAttrs'] = aList
  aList = ['details', 'values']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class StereochemistryStore
  currentMap = {}
  abstractTypes['StereochemistryStore'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:19:50_00001'] = currentMap
  loadMaps['STER.StereochemistryStore'] = currentMap
  currentMap['tag'] = 'STER.StereochemistryStore'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:19:50_00001'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'stereochemistryStores'
  currentMap['isTop'] = True
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccp.api.molecule.Stereochemistry.StereochemistryStore
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute StereochemistryStore.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute StereochemistryStore.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00039')

  # Attribute StereochemistryStore.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute StereochemistryStore.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00041')

  # Attribute StereochemistryStore.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00044')

  # Attribute StereochemistryStore.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00026'] = currentMap
  loadMaps['STER.StereochemistryStore.name'] = currentMap
  currentMap['tag'] = 'STER.StereochemistryStore.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00026'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role StereochemistryStore.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role StereochemistryStore.refStereochemistries
  currentMap = {}
  contentMap['refStereochemistries'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00025'] = currentMap
  loadMaps['STER.StereochemistryStore.refStereochemistries'] = currentMap
  currentMap['tag'] = 'STER.StereochemistryStore.refStereochemistries'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:28_00025'
  currentMap['name'] = 'refStereochemistries'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('STER').get('abstractTypes')
  # End of StereochemistryStore

  currentMap = abstractTypes.get('StereochemistryStore')
  aList = ['createdBy', 'guid', 'isModifiable', 'lastUnlockedBy']
  currentMap['headerAttrs'] = aList
  aList = ['name']
  currentMap['simpleAttrs'] = aList
  aList = ['refStereochemistries', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['refStereochemistries']
  currentMap['children'] = aList

  # Out-of-package link to RefStereochemistry
  currentMap = {}
  exolinks['RefStereochemistry'] = currentMap
  loadMaps['STER.exo-RefStereochemistry'] = currentMap
  currentMap['tag'] = 'STER.exo-RefStereochemistry'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:52_00055'
  currentMap['name'] = 'RefStereochemistry'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.Stereochemistry.RefStereochemistry
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to StereochemistryStore
  currentMap = {}
  exolinks['StereochemistryStore'] = currentMap
  loadMaps['STER.exo-StereochemistryStore'] = currentMap
  currentMap['tag'] = 'STER.exo-StereochemistryStore'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:19:50_00001'
  currentMap['name'] = 'StereochemistryStore'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.Stereochemistry.StereochemistryStore
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))