"""
#######################################################################

CCPN Data Model version 2.0.b2

Autogenerated by PyXmlMapWrite revision 1.24.2.3 on Mon Apr  6 17:00:35 2009
  from data model element memops.AccessControl revision 1.34.2.9

#######################################################################
======================COPYRIGHT/LICENSE START==========================

AccessControl.py: python XML-I/O-mapping for CCPN data model, MetaPackage memops.AccessControl

Copyright (C) 2007  (CCPN Project)

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
import memops.api.AccessControl

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package ACCO, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('ACCO').get('abstractTypes')
  exolinks = globalMap.get('ACCO').get('exolinks')

  # Class AccessControlStore
  currentMap = {}
  abstractTypes['AccessControlStore'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-04-17:18:10_00001'] = currentMap
  loadMaps['ACCO.AccessControlStore'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:18:10_00001'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'accessControlStores'
  currentMap['isTop'] = True
  currentMap['objkey'] = 'name'
  currentMap['class'] = memops.api.AccessControl.AccessControlStore
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute AccessControlStore.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute AccessControlStore.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00039')

  # Attribute AccessControlStore.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute AccessControlStore.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00041')

  # Attribute AccessControlStore.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00044')

  # Attribute AccessControlStore.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00006'] = currentMap
  loadMaps['ACCO.AccessControlStore.name'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00006'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role AccessControlStore.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role AccessControlStore.accessObjects
  currentMap = {}
  contentMap['accessObjects'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00013'] = currentMap
  loadMaps['ACCO.AccessControlStore.accessObjects'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore.accessObjects'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00013'
  currentMap['name'] = 'accessObjects'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ACCO').get('abstractTypes')

  # Role AccessControlStore.permissions
  currentMap = {}
  contentMap['permissions'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00005'] = currentMap
  loadMaps['ACCO.AccessControlStore.permissions'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore.permissions'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00005'
  currentMap['name'] = 'permissions'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ACCO').get('abstractTypes')

  # Role AccessControlStore.userGroups
  currentMap = {}
  contentMap['userGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00003'] = currentMap
  loadMaps['ACCO.AccessControlStore.userGroups'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore.userGroups'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00003'
  currentMap['name'] = 'userGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ACCO').get('abstractTypes')

  # Role AccessControlStore.users
  currentMap = {}
  contentMap['users'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00001'] = currentMap
  loadMaps['ACCO.AccessControlStore.users'] = currentMap
  currentMap['tag'] = 'ACCO.AccessControlStore.users'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:21:38_00001'
  currentMap['name'] = 'users'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('ACCO').get('abstractTypes')
  # End of AccessControlStore

  currentMap = abstractTypes.get('AccessControlStore')
  aList = ['createdBy', 'guid', 'isModifiable', 'lastUnlockedBy']
  currentMap['headerAttrs'] = aList
  aList = ['name']
  currentMap['simpleAttrs'] = aList
  aList = ['users', 'userGroups', 'permissions', 'accessObjects', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['accessObjects', 'permissions', 'userGroups', 'users']
  currentMap['children'] = aList

  # Class AccessObject
  currentMap = {}
  abstractTypes['AccessObject'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00014'] = currentMap
  loadMaps['ACCO.AccessObject'] = currentMap
  currentMap['tag'] = 'ACCO.AccessObject'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00014'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'accessObjects'
  currentMap['objkey'] = 'name'
  currentMap['class'] = memops.api.AccessControl.AccessObject
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute AccessObject.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute AccessObject.description
  currentMap = {}
  contentMap['description'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00005'] = currentMap
  loadMaps['ACCO.AccessObject.description'] = currentMap
  currentMap['tag'] = 'ACCO.AccessObject.description'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00005'
  currentMap['name'] = 'description'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035')

  # Attribute AccessObject.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00004'] = currentMap
  loadMaps['ACCO.AccessObject.name'] = currentMap
  currentMap['tag'] = 'ACCO.AccessObject.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00004'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role AccessObject.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role AccessObject.permissions
  currentMap = {}
  contentMap['permissions'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00001'] = currentMap
  loadMaps['ACCO.AccessObject.permissions'] = currentMap
  currentMap['tag'] = 'ACCO.AccessObject.permissions'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:27_00001'
  currentMap['name'] = 'permissions'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False
  # End of AccessObject

  currentMap = abstractTypes.get('AccessObject')
  aList = ['description', 'name', 'permissions']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Permission
  currentMap = {}
  abstractTypes['Permission'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00018'] = currentMap
  loadMaps['ACCO.Permission'] = currentMap
  currentMap['tag'] = 'ACCO.Permission'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00018'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'permissions'
  currentMap['class'] = memops.api.AccessControl.Permission
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Permission.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Permission.opType
  currentMap = {}
  contentMap['opType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00021'] = currentMap
  loadMaps['ACCO.Permission.opType'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.opType'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00021'
  currentMap['name'] = 'opType'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 'any'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Permission.permission
  currentMap = {}
  contentMap['permission'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00023'] = currentMap
  loadMaps['ACCO.Permission.permission'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.permission'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00023'
  currentMap['name'] = 'permission'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = True
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00028')

  # Attribute Permission.permissionClass
  currentMap = {}
  contentMap['permissionClass'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00020'] = currentMap
  loadMaps['ACCO.Permission.permissionClass'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.permissionClass'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00020'
  currentMap['name'] = 'permissionClass'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 'any'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Permission.roleName
  currentMap = {}
  contentMap['roleName'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00022'] = currentMap
  loadMaps['ACCO.Permission.roleName'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.roleName'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00022'
  currentMap['name'] = 'roleName'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 'any'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role Permission.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Permission.accessObject
  currentMap = {}
  contentMap['accessObject'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:26_00042'] = currentMap
  loadMaps['ACCO.Permission.accessObject'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.accessObject'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:26_00042'
  currentMap['name'] = 'accessObject'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['copyOverride'] = True

  # Role Permission.userGroup
  currentMap = {}
  contentMap['userGroup'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00016'] = currentMap
  loadMaps['ACCO.Permission.userGroup'] = currentMap
  currentMap['tag'] = 'ACCO.Permission.userGroup'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00016'
  currentMap['name'] = 'userGroup'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['copyOverride'] = True
  # End of Permission

  currentMap = abstractTypes.get('Permission')
  aList = ['opType', 'permission', 'permissionClass', 'roleName']
  currentMap['headerAttrs'] = aList
  aList = ['accessObject', 'userGroup']
  currentMap['optLinks'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class User
  currentMap = {}
  abstractTypes['User'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00017'] = currentMap
  loadMaps['ACCO.User'] = currentMap
  currentMap['tag'] = 'ACCO.User'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00017'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'users'
  currentMap['objkey'] = 'name'
  currentMap['class'] = memops.api.AccessControl.User
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute User.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute User.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00019'] = currentMap
  loadMaps['ACCO.User.name'] = currentMap
  currentMap['tag'] = 'ACCO.User.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00019'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role User.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role User.ledGroups
  currentMap = {}
  contentMap['ledGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00014'] = currentMap
  loadMaps['ACCO.User.ledGroups'] = currentMap
  currentMap['tag'] = 'ACCO.User.ledGroups'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00014'
  currentMap['name'] = 'ledGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True

  # Role User.userGroups
  currentMap = {}
  contentMap['userGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00012'] = currentMap
  loadMaps['ACCO.User.userGroups'] = currentMap
  currentMap['tag'] = 'ACCO.User.userGroups'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00012'
  currentMap['name'] = 'userGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True
  # End of User

  currentMap = abstractTypes.get('User')
  aList = ['name', 'ledGroups', 'userGroups']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class UserGroup
  currentMap = {}
  abstractTypes['UserGroup'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00016'] = currentMap
  loadMaps['ACCO.UserGroup'] = currentMap
  currentMap['tag'] = 'ACCO.UserGroup'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00016'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'userGroups'
  currentMap['objkey'] = 'name'
  currentMap['class'] = memops.api.AccessControl.UserGroup
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute UserGroup.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute UserGroup.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00018'] = currentMap
  loadMaps['ACCO.UserGroup.name'] = currentMap
  currentMap['tag'] = 'ACCO.UserGroup.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00018'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role UserGroup.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role UserGroup.leaders
  currentMap = {}
  contentMap['leaders'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00015'] = currentMap
  loadMaps['ACCO.UserGroup.leaders'] = currentMap
  currentMap['tag'] = 'ACCO.UserGroup.leaders'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00015'
  currentMap['name'] = 'leaders'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True

  # Role UserGroup.members
  currentMap = {}
  contentMap['members'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00013'] = currentMap
  loadMaps['ACCO.UserGroup.members'] = currentMap
  currentMap['tag'] = 'ACCO.UserGroup.members'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00013'
  currentMap['name'] = 'members'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False

  # Role UserGroup.permissions
  currentMap = {}
  contentMap['permissions'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00017'] = currentMap
  loadMaps['ACCO.UserGroup.permissions'] = currentMap
  currentMap['tag'] = 'ACCO.UserGroup.permissions'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-17-14:16:23_00017'
  currentMap['name'] = 'permissions'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False
  # End of UserGroup

  currentMap = abstractTypes.get('UserGroup')
  aList = ['name', 'leaders', 'members', 'permissions']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Out-of-package link to AccessControlStore
  currentMap = {}
  exolinks['AccessControlStore'] = currentMap
  loadMaps['ACCO.exo-AccessControlStore'] = currentMap
  currentMap['tag'] = 'ACCO.exo-AccessControlStore'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-09-04-17:18:10_00001'
  currentMap['name'] = 'AccessControlStore'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = memops.api.AccessControl.AccessControlStore
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))

  # Out-of-package link to AccessObject
  currentMap = {}
  exolinks['AccessObject'] = currentMap
  loadMaps['ACCO.exo-AccessObject'] = currentMap
  currentMap['tag'] = 'ACCO.exo-AccessObject'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00014'
  currentMap['name'] = 'AccessObject'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = memops.api.AccessControl.AccessObject
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))

  # Out-of-package link to Permission
  currentMap = {}
  exolinks['Permission'] = currentMap
  loadMaps['ACCO.exo-Permission'] = currentMap
  currentMap['tag'] = 'ACCO.exo-Permission'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00018'
  currentMap['name'] = 'Permission'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = memops.api.AccessControl.Permission
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(globalMap.get('ACCO').get('exolinks'))
  aList.append(globalMap.get('ACCO').get('exolinks'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))

  # Out-of-package link to User
  currentMap = {}
  exolinks['User'] = currentMap
  loadMaps['ACCO.exo-User'] = currentMap
  currentMap['tag'] = 'ACCO.exo-User'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00017'
  currentMap['name'] = 'User'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = memops.api.AccessControl.User
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))

  # Out-of-package link to UserGroup
  currentMap = {}
  exolinks['UserGroup'] = currentMap
  loadMaps['ACCO.exo-UserGroup'] = currentMap
  currentMap['tag'] = 'ACCO.exo-UserGroup'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00016'
  currentMap['name'] = 'UserGroup'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = memops.api.AccessControl.UserGroup
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))