"""
#######################################################################

CCPN Data Model version 2.0.b3

Autogenerated by PyXmlMapWrite revision 1.24.2.4 on Fri Sep 18 15:05:41 2009
  from data model element ccp.general.Method revision 1.34.2.10

#######################################################################
======================COPYRIGHT/LICENSE START==========================

Method.py: python XML-I/O-mapping for CCPN data model, MetaPackage ccp.general.Method

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
import ccp.api.general.Method

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package METH, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('METH').get('abstractTypes')
  exolinks = globalMap.get('METH').get('exolinks')

  # DataType ParamType
  currentMap = {}
  abstractTypes['ParamType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00031'] = currentMap
  loadMaps['METH.ParamType'] = currentMap
  currentMap['tag'] = 'METH.ParamType'
  currentMap['type'] = 'simple'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00031'
  currentMap['toStr'] = 'text'
  currentMap['cnvrt'] = 'text'

  # Class Method
  currentMap = {}
  abstractTypes['Method'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00028'] = currentMap
  loadMaps['METH.Method'] = currentMap
  currentMap['tag'] = 'METH.Method'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00028'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'methods'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Method.Method
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Method.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Method.details
  currentMap = {}
  contentMap['details'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00008'] = currentMap
  loadMaps['METH.Method.details'] = currentMap
  currentMap['tag'] = 'METH.Method.details'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00008'
  currentMap['name'] = 'details'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035')

  # Attribute Method.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00006'] = currentMap
  loadMaps['METH.Method.name'] = currentMap
  currentMap['tag'] = 'METH.Method.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00006'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Method.procedure
  currentMap = {}
  contentMap['procedure'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00009'] = currentMap
  loadMaps['METH.Method.procedure'] = currentMap
  currentMap['tag'] = 'METH.Method.procedure'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00009'
  currentMap['name'] = 'procedure'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035')

  # Attribute Method.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00005'] = currentMap
  loadMaps['METH.Method.serial'] = currentMap
  currentMap['tag'] = 'METH.Method.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00005'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Method.task
  currentMap = {}
  contentMap['task'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00007'] = currentMap
  loadMaps['METH.Method.task'] = currentMap
  currentMap['tag'] = 'METH.Method.task'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00007'
  currentMap['name'] = 'task'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role Method.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Method.citations
  currentMap = {}
  contentMap['citations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00013'] = currentMap
  loadMaps['METH.Method.citations'] = currentMap
  currentMap['tag'] = 'METH.Method.citations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00013'
  currentMap['name'] = 'citations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('CITA').get('exolinks')

  # Role Method.columns
  currentMap = {}
  contentMap['columns'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:04_00007'] = currentMap
  loadMaps['METH.Method.columns'] = currentMap
  currentMap['tag'] = 'METH.Method.columns'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:04_00007'
  currentMap['name'] = 'columns'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = False
  currentMap['content'] = globalMap.get('INST').get('exolinks')

  # Role Method.instrument
  currentMap = {}
  contentMap['instrument'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00002'] = currentMap
  loadMaps['METH.Method.instrument'] = currentMap
  currentMap['tag'] = 'METH.Method.instrument'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00002'
  currentMap['name'] = 'instrument'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('INST').get('exolinks')

  # Role Method.parameters
  currentMap = {}
  contentMap['parameters'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00015'] = currentMap
  loadMaps['METH.Method.parameters'] = currentMap
  currentMap['tag'] = 'METH.Method.parameters'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:15_00015'
  currentMap['name'] = 'parameters'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('METH').get('abstractTypes')

  # Role Method.software
  currentMap = {}
  contentMap['software'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00010'] = currentMap
  loadMaps['METH.Method.software'] = currentMap
  currentMap['tag'] = 'METH.Method.software'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00010'
  currentMap['name'] = 'software'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = True
  # End of Method

  currentMap = abstractTypes.get('Method')
  aList = ['serial']
  currentMap['headerAttrs'] = aList
  aList = ['details', 'name', 'procedure', 'task']
  currentMap['simpleAttrs'] = aList
  aList = ['software']
  currentMap['optLinks'] = aList
  aList = ['parameters', 'instrument', 'columns', 'citations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['parameters']
  currentMap['children'] = aList

  # Class MethodStore
  currentMap = {}
  abstractTypes['MethodStore'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00032'] = currentMap
  loadMaps['METH.MethodStore'] = currentMap
  currentMap['tag'] = 'METH.MethodStore'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00032'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'methodStores'
  currentMap['isTop'] = True
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccp.api.general.Method.MethodStore
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute MethodStore.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute MethodStore.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00039')

  # Attribute MethodStore.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute MethodStore.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00041')

  # Attribute MethodStore.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-09-18-15:04:18_00044')

  # Attribute MethodStore.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00018'] = currentMap
  loadMaps['METH.MethodStore.name'] = currentMap
  currentMap['tag'] = 'METH.MethodStore.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00018'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role MethodStore.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role MethodStore.methods
  currentMap = {}
  contentMap['methods'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00015'] = currentMap
  loadMaps['METH.MethodStore.methods'] = currentMap
  currentMap['tag'] = 'METH.MethodStore.methods'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00015'
  currentMap['name'] = 'methods'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('METH').get('abstractTypes')

  # Role MethodStore.software
  currentMap = {}
  contentMap['software'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00017'] = currentMap
  loadMaps['METH.MethodStore.software'] = currentMap
  currentMap['tag'] = 'METH.MethodStore.software'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00017'
  currentMap['name'] = 'software'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('METH').get('abstractTypes')
  # End of MethodStore

  currentMap = abstractTypes.get('MethodStore')
  aList = ['createdBy', 'guid', 'isModifiable', 'lastUnlockedBy']
  currentMap['headerAttrs'] = aList
  aList = ['name']
  currentMap['simpleAttrs'] = aList
  aList = ['software', 'methods', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['methods', 'software']
  currentMap['children'] = aList

  # Class Parameter
  currentMap = {}
  abstractTypes['Parameter'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00030'] = currentMap
  loadMaps['METH.Parameter'] = currentMap
  currentMap['tag'] = 'METH.Parameter'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00030'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'parameters'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.general.Method.Parameter
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Parameter.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Parameter.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00010'] = currentMap
  loadMaps['METH.Parameter.name'] = currentMap
  currentMap['tag'] = 'METH.Parameter.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00010'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Parameter.paramType
  currentMap = {}
  contentMap['paramType'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00012'] = currentMap
  loadMaps['METH.Parameter.paramType'] = currentMap
  currentMap['tag'] = 'METH.Parameter.paramType'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00012'
  currentMap['name'] = 'paramType'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00031')

  # Attribute Parameter.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00009'] = currentMap
  loadMaps['METH.Parameter.serial'] = currentMap
  currentMap['tag'] = 'METH.Parameter.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00009'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Parameter.unit
  currentMap = {}
  contentMap['unit'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00013'] = currentMap
  loadMaps['METH.Parameter.unit'] = currentMap
  currentMap['tag'] = 'METH.Parameter.unit'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00013'
  currentMap['name'] = 'unit'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Attribute Parameter.value
  currentMap = {}
  contentMap['value'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00011'] = currentMap
  loadMaps['METH.Parameter.value'] = currentMap
  currentMap['tag'] = 'METH.Parameter.value'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00011'
  currentMap['name'] = 'value'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Role Parameter.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')
  # End of Parameter

  currentMap = abstractTypes.get('Parameter')
  aList = ['paramType', 'serial', 'unit']
  currentMap['headerAttrs'] = aList
  aList = ['name', 'value']
  currentMap['simpleAttrs'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Software
  currentMap = {}
  abstractTypes['Software'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00029'] = currentMap
  loadMaps['METH.Software'] = currentMap
  currentMap['tag'] = 'METH.Software'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00029'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'software'
  currentMap['class'] = ccp.api.general.Method.Software
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Software.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Software.details
  currentMap = {}
  contentMap['details'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00004'] = currentMap
  loadMaps['METH.Software.details'] = currentMap
  currentMap['tag'] = 'METH.Software.details'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00004'
  currentMap['name'] = 'details'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035')

  # Attribute Software.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00002'] = currentMap
  loadMaps['METH.Software.name'] = currentMap
  currentMap['tag'] = 'METH.Software.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00002'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Software.tasks
  currentMap = {}
  contentMap['tasks'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00005'] = currentMap
  loadMaps['METH.Software.tasks'] = currentMap
  currentMap['tag'] = 'METH.Software.tasks'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00005'
  currentMap['name'] = 'tasks'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Software.vendorAddress
  currentMap = {}
  contentMap['vendorAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00007'] = currentMap
  loadMaps['METH.Software.vendorAddress'] = currentMap
  currentMap['tag'] = 'METH.Software.vendorAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00007'
  currentMap['name'] = 'vendorAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute Software.vendorName
  currentMap = {}
  contentMap['vendorName'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00006'] = currentMap
  loadMaps['METH.Software.vendorName'] = currentMap
  currentMap['tag'] = 'METH.Software.vendorName'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00006'
  currentMap['name'] = 'vendorName'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute Software.vendorWebAddress
  currentMap = {}
  contentMap['vendorWebAddress'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00008'] = currentMap
  loadMaps['METH.Software.vendorWebAddress'] = currentMap
  currentMap['tag'] = 'METH.Software.vendorWebAddress'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00008'
  currentMap['name'] = 'vendorWebAddress'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00035')

  # Attribute Software.version
  currentMap = {}
  contentMap['version'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00003'] = currentMap
  loadMaps['METH.Software.version'] = currentMap
  currentMap['tag'] = 'METH.Software.version'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00003'
  currentMap['name'] = 'version'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role Software.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Software.citations
  currentMap = {}
  contentMap['citations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00001'] = currentMap
  loadMaps['METH.Software.citations'] = currentMap
  currentMap['tag'] = 'METH.Software.citations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:17_00001'
  currentMap['name'] = 'citations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('CITA').get('exolinks')

  # Role Software.methods
  currentMap = {}
  contentMap['methods'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00011'] = currentMap
  loadMaps['METH.Software.methods'] = currentMap
  currentMap['tag'] = 'METH.Software.methods'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:16_00011'
  currentMap['name'] = 'methods'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False
  # End of Software

  currentMap = abstractTypes.get('Software')
  aList = ['details', 'name', 'tasks', 'vendorAddress', 'vendorName', 'vendorWebAddress', 'version', 'methods']
  currentMap['simpleAttrs'] = aList
  aList = ['citations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Out-of-package link to Method
  currentMap = {}
  exolinks['Method'] = currentMap
  loadMaps['METH.exo-Method'] = currentMap
  currentMap['tag'] = 'METH.exo-Method'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00028'
  currentMap['name'] = 'Method'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Method.Method
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to MethodStore
  currentMap = {}
  exolinks['MethodStore'] = currentMap
  loadMaps['METH.exo-MethodStore'] = currentMap
  currentMap['tag'] = 'METH.exo-MethodStore'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00032'
  currentMap['name'] = 'MethodStore'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Method.MethodStore
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))

  # Out-of-package link to Parameter
  currentMap = {}
  exolinks['Parameter'] = currentMap
  loadMaps['METH.exo-Parameter'] = currentMap
  currentMap['tag'] = 'METH.exo-Parameter'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00030'
  currentMap['name'] = 'Parameter'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Method.Parameter
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to Software
  currentMap = {}
  exolinks['Software'] = currentMap
  loadMaps['METH.exo-Software'] = currentMap
  currentMap['tag'] = 'METH.exo-Software'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:25:09_00029'
  currentMap['name'] = 'Software'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.general.Method.Software
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))
