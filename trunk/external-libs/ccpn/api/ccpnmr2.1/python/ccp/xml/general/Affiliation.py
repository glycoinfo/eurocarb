"""
#######################################################################

CCPN Data Model version 2.0.b3

Autogenerated by PyXmlMapWrite revision 1.24.2.4 on Fri Sep 18 15:05:39 2009
  from data model element ccp.general.Affiliation revision 1.33.2.10

#######################################################################
======================COPYRIGHT/LICENSE START==========================

Affiliation.py: python XML-I/O-mapping for CCPN data model, MetaPackage ccp.general.Affiliation

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
import ccp.api.general.Affiliation

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package AFFI, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('AFFI').get('abstractTypes')
  exolinks = globalMap.get('AFFI').get('exolinks')

  # DataType FamilyTitle
  currentMap = {}
  abstractTypes['FamilyTitle'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00021'] = currentMap
  loadMaps['AFFI.FamilyTitle'] = currentMap
  currentMap['tag'] = 'AFFI.FamilyTitle'
  currentMap['type'] = 'simple'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00021'
  currentMap['toStr'] = 'text'
  currentMap['cnvrt'] = 'text'

  # DataType PersonTitle
  currentMap = {}
  abstractTypes['PersonTitle'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00020'] = currentMap
  loadMaps['AFFI.PersonTitle'] = currentMap
  currentMap['tag'] = 'AFFI.PersonTitle'
  currentMap['type'] = 'simple'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00020'
  currentMap['toStr'] = 'text'
  currentMap['cnvrt'] = 'text'

  # Class AffiliationStore
  currentMap = {}
  abstractTypes['AffiliationStore'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:19:49_00006'] = currentMap
  loadMaps['AFFI.AffiliationStore'] = currentMap
  currentMap['tag'] = 'AFFI.AffiliationStore'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:19:49_00006'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'affiliationStores'
  currentMap['isTop'] = True
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccp.api.general.Affiliation.AffiliationStore
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute AffiliationStore.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute AffiliationStore.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00039')

  # Attribute AffiliationStore.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute AffiliationStore.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00041')

  # Attribute AffiliationStore.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00044')

  # Attribute AffiliationStore.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00009'] = currentMap
  loadMaps['AFFI.AffiliationStore.name'] = currentMap
  currentMap['tag'] = 'AFFI.AffiliationStore.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00009'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role AffiliationStore.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role AffiliationStore.organisations
  currentMap = {}
  contentMap['organisations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00006'] = currentMap
  loadMaps['AFFI.AffiliationStore.organisations'] = currentMap
  currentMap['tag'] = 'AFFI.AffiliationStore.organisations'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00006'
  currentMap['name'] = 'organisations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('AFFI').get('abstractTypes')

  # Role AffiliationStore.persons
  currentMap = {}
  contentMap['persons'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00008'] = currentMap
  loadMaps['AFFI.AffiliationStore.persons'] = currentMap
  currentMap['tag'] = 'AFFI.AffiliationStore.persons'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00008'
  currentMap['name'] = 'persons'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('AFFI').get('abstractTypes')
  # End of AffiliationStore

  currentMap = abstractTypes.get('AffiliationStore')
  aList = ['createdBy', 'guid', 'isModifiable', 'lastUnlockedBy']
  currentMap['headerAttrs'] = aList
  aList = ['name']
  currentMap['simpleAttrs'] = aList
  aList = ['persons', 'organisations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['organisations', 'persons']
  currentMap['children'] = aList

  # Class Group
  currentMap = {}
  abstractTypes['Group'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00023'] = currentMap
  loadMaps['AFFI.Group'] = currentMap
  currentMap['tag'] = 'AFFI.Group'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00023'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'groups'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Affiliation.Group
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Group.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Group.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00003'] = currentMap
  loadMaps['AFFI.Group.name'] = currentMap
  currentMap['tag'] = 'AFFI.Group.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00003'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Group.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00002'] = currentMap
  loadMaps['AFFI.Group.serial'] = currentMap
  currentMap['tag'] = 'AFFI.Group.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00002'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Group.url
  currentMap = {}
  contentMap['url'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00004'] = currentMap
  loadMaps['AFFI.Group.url'] = currentMap
  currentMap['tag'] = 'AFFI.Group.url'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00004'
  currentMap['name'] = 'url'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Role Group.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Group.personInGroups
  currentMap = {}
  contentMap['personInGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00041'] = currentMap
  loadMaps['AFFI.Group.personInGroups'] = currentMap
  currentMap['tag'] = 'AFFI.Group.personInGroups'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00041'
  currentMap['name'] = 'personInGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False
  # End of Group

  currentMap = abstractTypes.get('Group')
  aList = ['serial']
  currentMap['headerAttrs'] = aList
  aList = ['name', 'url', 'personInGroups']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Organisation
  currentMap = {}
  abstractTypes['Organisation'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00019'] = currentMap
  loadMaps['AFFI.Organisation'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00019'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'organisations'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Affiliation.Organisation
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Organisation.addresses
  currentMap = {}
  contentMap['addresses'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00024'] = currentMap
  loadMaps['AFFI.Organisation.addresses'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.addresses'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00024'
  currentMap['name'] = 'addresses'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute Organisation.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Organisation.city
  currentMap = {}
  contentMap['city'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00025'] = currentMap
  loadMaps['AFFI.Organisation.city'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.city'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00025'
  currentMap['name'] = 'city'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.country
  currentMap = {}
  contentMap['country'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00027'] = currentMap
  loadMaps['AFFI.Organisation.country'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.country'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00027'
  currentMap['name'] = 'country'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.emailAddress
  currentMap = {}
  contentMap['emailAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00030'] = currentMap
  loadMaps['AFFI.Organisation.emailAddress'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.emailAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00030'
  currentMap['name'] = 'emailAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.faxNumber
  currentMap = {}
  contentMap['faxNumber'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00029'] = currentMap
  loadMaps['AFFI.Organisation.faxNumber'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.faxNumber'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00029'
  currentMap['name'] = 'faxNumber'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00022'] = currentMap
  loadMaps['AFFI.Organisation.name'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00022'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.organisationType
  currentMap = {}
  contentMap['organisationType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00023'] = currentMap
  loadMaps['AFFI.Organisation.organisationType'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.organisationType'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00023'
  currentMap['name'] = 'organisationType'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.phoneNumber
  currentMap = {}
  contentMap['phoneNumber'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00028'] = currentMap
  loadMaps['AFFI.Organisation.phoneNumber'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.phoneNumber'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00028'
  currentMap['name'] = 'phoneNumber'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.postalCode
  currentMap = {}
  contentMap['postalCode'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00026'] = currentMap
  loadMaps['AFFI.Organisation.postalCode'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.postalCode'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00026'
  currentMap['name'] = 'postalCode'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.province
  currentMap = {}
  contentMap['province'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2009-01-19-14:21:00_00001'] = currentMap
  loadMaps['AFFI.Organisation.province'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.province'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2009-01-19-14:21:00_00001'
  currentMap['name'] = 'province'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Organisation.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00021'] = currentMap
  loadMaps['AFFI.Organisation.serial'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00021'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Organisation.url
  currentMap = {}
  contentMap['url'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00031'] = currentMap
  loadMaps['AFFI.Organisation.url'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.url'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00031'
  currentMap['name'] = 'url'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Role Organisation.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Organisation.groups
  currentMap = {}
  contentMap['groups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00020'] = currentMap
  loadMaps['AFFI.Organisation.groups'] = currentMap
  currentMap['tag'] = 'AFFI.Organisation.groups'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00020'
  currentMap['name'] = 'groups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('AFFI').get('abstractTypes')
  # End of Organisation

  currentMap = abstractTypes.get('Organisation')
  aList = ['serial']
  currentMap['headerAttrs'] = aList
  aList = ['addresses', 'city', 'country', 'emailAddress', 'faxNumber', 'name', 'organisationType', 'phoneNumber', 'postalCode', 'province', 'url']
  currentMap['simpleAttrs'] = aList
  aList = ['groups', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['groups']
  currentMap['children'] = aList

  # Class Person
  currentMap = {}
  abstractTypes['Person'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00018'] = currentMap
  loadMaps['AFFI.Person'] = currentMap
  currentMap['tag'] = 'AFFI.Person'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00018'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'persons'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Affiliation.Person
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Person.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Person.familyName
  currentMap = {}
  contentMap['familyName'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00011'] = currentMap
  loadMaps['AFFI.Person.familyName'] = currentMap
  currentMap['tag'] = 'AFFI.Person.familyName'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00011'
  currentMap['name'] = 'familyName'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Person.familyTitle
  currentMap = {}
  contentMap['familyTitle'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00015'] = currentMap
  loadMaps['AFFI.Person.familyTitle'] = currentMap
  currentMap['tag'] = 'AFFI.Person.familyTitle'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00015'
  currentMap['name'] = 'familyTitle'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00021')

  # Attribute Person.givenName
  currentMap = {}
  contentMap['givenName'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00012'] = currentMap
  loadMaps['AFFI.Person.givenName'] = currentMap
  currentMap['tag'] = 'AFFI.Person.givenName'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00012'
  currentMap['name'] = 'givenName'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Person.middleInitials
  currentMap = {}
  contentMap['middleInitials'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00014'] = currentMap
  loadMaps['AFFI.Person.middleInitials'] = currentMap
  currentMap['tag'] = 'AFFI.Person.middleInitials'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00014'
  currentMap['name'] = 'middleInitials'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Person.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00010'] = currentMap
  loadMaps['AFFI.Person.serial'] = currentMap
  currentMap['tag'] = 'AFFI.Person.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00010'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Person.title
  currentMap = {}
  contentMap['title'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00016'] = currentMap
  loadMaps['AFFI.Person.title'] = currentMap
  currentMap['tag'] = 'AFFI.Person.title'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00016'
  currentMap['name'] = 'title'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00020')

  # Role Person.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Person.currentPersonInGroup
  currentMap = {}
  contentMap['currentPersonInGroup'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-10-25-12:14:19_00001'] = currentMap
  loadMaps['AFFI.Person.currentPersonInGroup'] = currentMap
  currentMap['tag'] = 'AFFI.Person.currentPersonInGroup'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-10-25-12:14:19_00001'
  currentMap['name'] = 'currentPersonInGroup'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True

  # Role Person.personInGroups
  currentMap = {}
  contentMap['personInGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00005'] = currentMap
  loadMaps['AFFI.Person.personInGroups'] = currentMap
  currentMap['tag'] = 'AFFI.Person.personInGroups'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00005'
  currentMap['name'] = 'personInGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('AFFI').get('abstractTypes')

  # Role Person.users
  currentMap = {}
  contentMap['users'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00009'] = currentMap
  loadMaps['AFFI.Person.users'] = currentMap
  currentMap['tag'] = 'AFFI.Person.users'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00009'
  currentMap['name'] = 'users'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = False
  currentMap['content'] = globalMap.get('ACCO').get('exolinks')
  # End of Person

  currentMap = abstractTypes.get('Person')
  aList = ['familyTitle', 'serial']
  currentMap['headerAttrs'] = aList
  aList = ['familyName', 'givenName', 'middleInitials', 'title', 'currentPersonInGroup']
  currentMap['simpleAttrs'] = aList
  aList = ['personInGroups', 'users', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['personInGroups']
  currentMap['children'] = aList

  # Class PersonInGroup
  currentMap = {}
  abstractTypes['PersonInGroup'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00022'] = currentMap
  loadMaps['AFFI.PersonInGroup'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00022'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'personInGroups'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Affiliation.PersonInGroup
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute PersonInGroup.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute PersonInGroup.deliveryAddress
  currentMap = {}
  contentMap['deliveryAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00035'] = currentMap
  loadMaps['AFFI.PersonInGroup.deliveryAddress'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.deliveryAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00035'
  currentMap['name'] = 'deliveryAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute PersonInGroup.emailAddress
  currentMap = {}
  contentMap['emailAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00036'] = currentMap
  loadMaps['AFFI.PersonInGroup.emailAddress'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.emailAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00036'
  currentMap['name'] = 'emailAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute PersonInGroup.endDate
  currentMap = {}
  contentMap['endDate'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00039'] = currentMap
  loadMaps['AFFI.PersonInGroup.endDate'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.endDate'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00039'
  currentMap['name'] = 'endDate'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00029')

  # Attribute PersonInGroup.faxNumber
  currentMap = {}
  contentMap['faxNumber'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00038'] = currentMap
  loadMaps['AFFI.PersonInGroup.faxNumber'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.faxNumber'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00038'
  currentMap['name'] = 'faxNumber'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute PersonInGroup.mailingAddress
  currentMap = {}
  contentMap['mailingAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00034'] = currentMap
  loadMaps['AFFI.PersonInGroup.mailingAddress'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.mailingAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00034'
  currentMap['name'] = 'mailingAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute PersonInGroup.phoneNumbers
  currentMap = {}
  contentMap['phoneNumbers'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00037'] = currentMap
  loadMaps['AFFI.PersonInGroup.phoneNumbers'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.phoneNumbers'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00037'
  currentMap['name'] = 'phoneNumbers'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute PersonInGroup.position
  currentMap = {}
  contentMap['position'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00033'] = currentMap
  loadMaps['AFFI.PersonInGroup.position'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.position'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00033'
  currentMap['name'] = 'position'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute PersonInGroup.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00032'] = currentMap
  loadMaps['AFFI.PersonInGroup.serial'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00032'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Role PersonInGroup.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role PersonInGroup.group
  currentMap = {}
  contentMap['group'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00040'] = currentMap
  loadMaps['AFFI.PersonInGroup.group'] = currentMap
  currentMap['tag'] = 'AFFI.PersonInGroup.group'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:14_00040'
  currentMap['name'] = 'group'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['copyOverride'] = True
  # End of PersonInGroup

  currentMap = abstractTypes.get('PersonInGroup')
  aList = ['serial']
  currentMap['headerAttrs'] = aList
  aList = ['deliveryAddress', 'emailAddress', 'endDate', 'faxNumber', 'mailingAddress', 'phoneNumbers', 'position']
  currentMap['simpleAttrs'] = aList
  aList = ['group']
  currentMap['optLinks'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Out-of-package link to AffiliationStore
  currentMap = {}
  exolinks['AffiliationStore'] = currentMap
  loadMaps['AFFI.exo-AffiliationStore'] = currentMap
  currentMap['tag'] = 'AFFI.exo-AffiliationStore'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:19:49_00006'
  currentMap['name'] = 'AffiliationStore'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Affiliation.AffiliationStore
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))

  # Out-of-package link to Group
  currentMap = {}
  exolinks['Group'] = currentMap
  loadMaps['AFFI.exo-Group'] = currentMap
  currentMap['tag'] = 'AFFI.exo-Group'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00023'
  currentMap['name'] = 'Group'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Affiliation.Group
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to Organisation
  currentMap = {}
  exolinks['Organisation'] = currentMap
  loadMaps['AFFI.exo-Organisation'] = currentMap
  currentMap['tag'] = 'AFFI.exo-Organisation'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00019'
  currentMap['name'] = 'Organisation'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Affiliation.Organisation
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to Person
  currentMap = {}
  exolinks['Person'] = currentMap
  loadMaps['AFFI.exo-Person'] = currentMap
  currentMap['tag'] = 'AFFI.exo-Person'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00018'
  currentMap['name'] = 'Person'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Affiliation.Person
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to PersonInGroup
  currentMap = {}
  exolinks['PersonInGroup'] = currentMap
  loadMaps['AFFI.exo-PersonInGroup'] = currentMap
  currentMap['tag'] = 'AFFI.exo-PersonInGroup'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00022'
  currentMap['name'] = 'PersonInGroup'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Affiliation.PersonInGroup
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))