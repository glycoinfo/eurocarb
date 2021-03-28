"""
#######################################################################

CCPN Data Model version 2.0.b2

Autogenerated by PyXmlMapWrite revision 1.24.2.3 on Mon Apr  6 17:00:38 2009
  from data model element ccp.molecule.MolStructure revision 1.38.2.9

#######################################################################
======================COPYRIGHT/LICENSE START==========================

MolStructure.py: python XML-I/O-mapping for CCPN data model, MetaPackage ccp.molecule.MolStructure

Copyright (C) 2007 Rasmus Fogh (CCPN Project)

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
import ccp.api.molecule.MolStructure

def makeMapping(globalMap):
  """
  generates XML I/O mapping for package COOR, adding it to globalMap
  """
  
  from memops.xml.Implementation import bool2str, str2bool

  # Set up top level dictionaries
  loadMaps = globalMap.get('loadMaps')
  mapsByGuid = globalMap.get('mapsByGuid')

  abstractTypes = globalMap.get('COOR').get('abstractTypes')
  exolinks = globalMap.get('COOR').get('exolinks')

  # Class Atom
  currentMap = {}
  abstractTypes['Atom'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00004'] = currentMap
  loadMaps['COOR.Atom'] = currentMap
  currentMap['tag'] = 'COOR.Atom'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00004'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'atoms'
  currentMap['objkey'] = 'name'
  currentMap['class'] = ccp.api.molecule.MolStructure.Atom
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Atom.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Atom.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00066'] = currentMap
  loadMaps['COOR.Atom.name'] = currentMap
  currentMap['tag'] = 'COOR.Atom.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00066'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037')

  # Role Atom.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Atom.atomValidations
  currentMap = {}
  contentMap['atomValidations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00001'] = currentMap
  loadMaps['COOR.Atom.atomValidations'] = currentMap
  currentMap['tag'] = 'COOR.Atom.atomValidations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00001'
  currentMap['name'] = 'atomValidations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('VALD').get('exolinks')

  # Role Atom.coords
  currentMap = {}
  contentMap['coords'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00063'] = currentMap
  loadMaps['COOR.Atom.coords'] = currentMap
  currentMap['tag'] = 'COOR.Atom.coords'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00063'
  currentMap['name'] = 'coords'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('COOR').get('abstractTypes')
  # End of Atom

  currentMap = abstractTypes.get('Atom')
  aList = ['name']
  currentMap['headerAttrs'] = aList
  aList = ['coords', 'atomValidations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['coords']
  currentMap['children'] = aList

  # Class Chain
  currentMap = {}
  abstractTypes['Chain'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00002'] = currentMap
  loadMaps['COOR.Chain'] = currentMap
  currentMap['tag'] = 'COOR.Chain'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00002'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'coordChains'
  currentMap['objkey'] = 'code'
  currentMap['class'] = ccp.api.molecule.MolStructure.Chain
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Chain.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Chain.code
  currentMap = {}
  contentMap['code'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00051'] = currentMap
  loadMaps['COOR.Chain.code'] = currentMap
  currentMap['tag'] = 'COOR.Chain.code'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00051'
  currentMap['name'] = 'code'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role Chain.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Chain.chainValidations
  currentMap = {}
  contentMap['chainValidations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00024'] = currentMap
  loadMaps['COOR.Chain.chainValidations'] = currentMap
  currentMap['tag'] = 'COOR.Chain.chainValidations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00024'
  currentMap['name'] = 'chainValidations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('VALD').get('exolinks')

  # Role Chain.residues
  currentMap = {}
  contentMap['residues'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00049'] = currentMap
  loadMaps['COOR.Chain.residues'] = currentMap
  currentMap['tag'] = 'COOR.Chain.residues'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00049'
  currentMap['name'] = 'residues'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('COOR').get('abstractTypes')
  # End of Chain

  currentMap = abstractTypes.get('Chain')
  aList = ['code']
  currentMap['simpleAttrs'] = aList
  aList = ['residues', 'chainValidations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['residues']
  currentMap['children'] = aList

  # Class Coord
  currentMap = {}
  abstractTypes['Coord'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00001'] = currentMap
  loadMaps['COOR.Coord'] = currentMap
  currentMap['tag'] = 'COOR.Coord'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00001'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'coords'
  currentMap['class'] = ccp.api.molecule.MolStructure.Coord
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Coord.altLocationCode
  currentMap = {}
  contentMap['altLocationCode'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00042'] = currentMap
  loadMaps['COOR.Coord.altLocationCode'] = currentMap
  currentMap['tag'] = 'COOR.Coord.altLocationCode'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00042'
  currentMap['name'] = 'altLocationCode'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['default'] = ' '
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Coord.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Coord.bFactor
  currentMap = {}
  contentMap['bFactor'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00046'] = currentMap
  loadMaps['COOR.Coord.bFactor'] = currentMap
  currentMap['tag'] = 'COOR.Coord.bFactor'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00046'
  currentMap['name'] = 'bFactor'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 0.0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00031')

  # Attribute Coord.occupancy
  currentMap = {}
  contentMap['occupancy'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00047'] = currentMap
  loadMaps['COOR.Coord.occupancy'] = currentMap
  currentMap['tag'] = 'COOR.Coord.occupancy'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00047'
  currentMap['name'] = 'occupancy'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['default'] = 1.0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00031')

  # Attribute Coord.x
  currentMap = {}
  contentMap['x'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00043'] = currentMap
  loadMaps['COOR.Coord.x'] = currentMap
  currentMap['tag'] = 'COOR.Coord.x'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00043'
  currentMap['name'] = 'x'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00031')

  # Attribute Coord.y
  currentMap = {}
  contentMap['y'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00044'] = currentMap
  loadMaps['COOR.Coord.y'] = currentMap
  currentMap['tag'] = 'COOR.Coord.y'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00044'
  currentMap['name'] = 'y'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00031')

  # Attribute Coord.z
  currentMap = {}
  contentMap['z'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00045'] = currentMap
  loadMaps['COOR.Coord.z'] = currentMap
  currentMap['tag'] = 'COOR.Coord.z'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00045'
  currentMap['name'] = 'z'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00031')

  # Role Coord.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Coord.model
  currentMap = {}
  contentMap['model'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00001'] = currentMap
  loadMaps['COOR.Coord.model'] = currentMap
  currentMap['tag'] = 'COOR.Coord.model'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00001'
  currentMap['name'] = 'model'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['copyOverride'] = True
  # End of Coord

  currentMap = abstractTypes.get('Coord')
  aList = ['bFactor', 'occupancy', 'x', 'y', 'z']
  currentMap['headerAttrs'] = aList
  aList = ['altLocationCode']
  currentMap['simpleAttrs'] = aList
  aList = ['model']
  currentMap['optLinks'] = aList
  aList = ['access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Model
  currentMap = {}
  abstractTypes['Model'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:10_00001'] = currentMap
  loadMaps['COOR.Model'] = currentMap
  currentMap['tag'] = 'COOR.Model'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:10_00001'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'models'
  currentMap['objkey'] = 'serial'
  currentMap['class'] = ccp.api.molecule.MolStructure.Model
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Model.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Model.details
  currentMap = {}
  contentMap['details'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-07-11-16:03:09_00002'] = currentMap
  loadMaps['COOR.Model.details'] = currentMap
  currentMap['tag'] = 'COOR.Model.details'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-07-11-16:03:09_00002'
  currentMap['name'] = 'details'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00036')

  # Attribute Model.name
  currentMap = {}
  contentMap['name'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2008-07-11-16:03:09_00001'] = currentMap
  loadMaps['COOR.Model.name'] = currentMap
  currentMap['tag'] = 'COOR.Model.name'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2008-07-11-16:03:09_00001'
  currentMap['name'] = 'name'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute Model.serial
  currentMap = {}
  contentMap['serial'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00005'] = currentMap
  loadMaps['COOR.Model.serial'] = currentMap
  currentMap['tag'] = 'COOR.Model.serial'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00005'
  currentMap['name'] = 'serial'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Role Model.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Model.coords
  currentMap = {}
  contentMap['coords'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00002'] = currentMap
  loadMaps['COOR.Model.coords'] = currentMap
  currentMap['tag'] = 'COOR.Model.coords'
  currentMap['type'] = 'link'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00002'
  currentMap['name'] = 'coords'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['copyOverride'] = False

  # Role Model.structureGroups
  currentMap = {}
  contentMap['structureGroups'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00013'] = currentMap
  loadMaps['COOR.Model.structureGroups'] = currentMap
  currentMap['tag'] = 'COOR.Model.structureGroups'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00013'
  currentMap['name'] = 'structureGroups'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('MOLS').get('exolinks')

  # Role Model.structureValidations
  currentMap = {}
  contentMap['structureValidations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00011'] = currentMap
  loadMaps['COOR.Model.structureValidations'] = currentMap
  currentMap['tag'] = 'COOR.Model.structureValidations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00011'
  currentMap['name'] = 'structureValidations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('VALD').get('exolinks')
  # End of Model

  currentMap = abstractTypes.get('Model')
  aList = ['serial']
  currentMap['headerAttrs'] = aList
  aList = ['details', 'name', 'coords']
  currentMap['simpleAttrs'] = aList
  aList = ['structureValidations', 'structureGroups', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList

  # Class Residue
  currentMap = {}
  abstractTypes['Residue'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00003'] = currentMap
  loadMaps['COOR.Residue'] = currentMap
  currentMap['tag'] = 'COOR.Residue'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00003'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'residues'
  currentMap['objkey'] = 'seqId'
  currentMap['class'] = ccp.api.molecule.MolStructure.Residue
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute Residue.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute Residue.seqCode
  currentMap = {}
  contentMap['seqCode'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00058'] = currentMap
  loadMaps['COOR.Residue.seqCode'] = currentMap
  currentMap['tag'] = 'COOR.Residue.seqCode'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00058'
  currentMap['name'] = 'seqCode'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Residue.seqId
  currentMap = {}
  contentMap['seqId'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00057'] = currentMap
  loadMaps['COOR.Residue.seqId'] = currentMap
  currentMap['tag'] = 'COOR.Residue.seqId'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00057'
  currentMap['name'] = 'seqId'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute Residue.seqInsertCode
  currentMap = {}
  contentMap['seqInsertCode'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00059'] = currentMap
  loadMaps['COOR.Residue.seqInsertCode'] = currentMap
  currentMap['tag'] = 'COOR.Residue.seqInsertCode'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00059'
  currentMap['name'] = 'seqInsertCode'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['default'] = ' '
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role Residue.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role Residue.atoms
  currentMap = {}
  contentMap['atoms'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00055'] = currentMap
  loadMaps['COOR.Residue.atoms'] = currentMap
  currentMap['tag'] = 'COOR.Residue.atoms'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:36_00055'
  currentMap['name'] = 'atoms'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['content'] = globalMap.get('COOR').get('abstractTypes')

  # Role Residue.residueValidations
  currentMap = {}
  contentMap['residueValidations'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00028'] = currentMap
  loadMaps['COOR.Residue.residueValidations'] = currentMap
  currentMap['tag'] = 'COOR.Residue.residueValidations'
  currentMap['type'] = 'exolink'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-13-15:55:55_00028'
  currentMap['name'] = 'residueValidations'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('VALD').get('exolinks')
  # End of Residue

  currentMap = abstractTypes.get('Residue')
  aList = ['seqCode', 'seqId']
  currentMap['headerAttrs'] = aList
  aList = ['seqInsertCode']
  currentMap['simpleAttrs'] = aList
  aList = ['atoms', 'residueValidations', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['atoms']
  currentMap['children'] = aList

  # Class StructureEnsemble
  currentMap = {}
  abstractTypes['StructureEnsemble'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00032'] = currentMap
  loadMaps['COOR.StructureEnsemble'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble'
  currentMap['type'] = 'class'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00032'
  currentMap['eType'] = 'cplx'
  currentMap['fromParent'] = 'structureEnsembles'
  currentMap['isTop'] = True
  currentMap['class'] = ccp.api.molecule.MolStructure.StructureEnsemble
  contentMap = {}
  currentMap['content'] = contentMap

  # Attribute StructureEnsemble.applicationData
  contentMap['applicationData'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:27_00007')

  # Attribute StructureEnsemble.atomNamingSystem
  currentMap = {}
  contentMap['atomNamingSystem'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00022'] = currentMap
  loadMaps['COOR.StructureEnsemble.atomNamingSystem'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.atomNamingSystem'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00022'
  currentMap['name'] = 'atomNamingSystem'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Attribute StructureEnsemble.createdBy
  contentMap['createdBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00039')

  # Attribute StructureEnsemble.ensembleId
  currentMap = {}
  contentMap['ensembleId'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00021'] = currentMap
  loadMaps['COOR.StructureEnsemble.ensembleId'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.ensembleId'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00021'
  currentMap['name'] = 'ensembleId'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['proc'] = 'direct'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032')

  # Attribute StructureEnsemble.guid
  contentMap['guid'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-09-14-18:48:26_00002')

  # Attribute StructureEnsemble.isModifiable
  contentMap['isModifiable'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00041')

  # Attribute StructureEnsemble.lastUnlockedBy
  contentMap['lastUnlockedBy'] = mapsByGuid.get('www.ccpn.ac.uk_ModelAdapt_2009-04-06-16:59:25_00044')

  # Attribute StructureEnsemble.resNamingSystem
  currentMap = {}
  contentMap['resNamingSystem'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00023'] = currentMap
  loadMaps['COOR.StructureEnsemble.resNamingSystem'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.resNamingSystem'
  currentMap['type'] = 'attr'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00023'
  currentMap['name'] = 'resNamingSystem'
  currentMap['hicard'] = 1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['data'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033')

  # Role StructureEnsemble.access
  contentMap['access'] = mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-12-31-09:03:01_00014')

  # Role StructureEnsemble.coordChains
  currentMap = {}
  contentMap['coordChains'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00020'] = currentMap
  loadMaps['COOR.StructureEnsemble.coordChains'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.coordChains'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:33_00020'
  currentMap['name'] = 'coordChains'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('COOR').get('abstractTypes')

  # Role StructureEnsemble.models
  currentMap = {}
  contentMap['models'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00007'] = currentMap
  loadMaps['COOR.StructureEnsemble.models'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.models'
  currentMap['type'] = 'child'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00007'
  currentMap['name'] = 'models'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['implSkip'] = True
  currentMap['content'] = globalMap.get('COOR').get('abstractTypes')

  # Role StructureEnsemble.molSystem
  currentMap = {}
  contentMap['molSystem'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2006-08-16-18:23:31_00011'] = currentMap
  loadMaps['COOR.StructureEnsemble.molSystem'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.molSystem'
  currentMap['type'] = 'exotop'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-18:23:31_00011'
  currentMap['name'] = 'molSystem'
  currentMap['hicard'] = 1
  currentMap['locard'] = 1
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = True
  currentMap['content'] = globalMap.get('MOLS').get('exolinks')

  # Role StructureEnsemble.validationStores
  currentMap = {}
  contentMap['validationStores'] = currentMap
  mapsByGuid['www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00009'] = currentMap
  loadMaps['COOR.StructureEnsemble.validationStores'] = currentMap
  currentMap['tag'] = 'COOR.StructureEnsemble.validationStores'
  currentMap['type'] = 'exotop'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:15_00009'
  currentMap['name'] = 'validationStores'
  currentMap['hicard'] = -1
  currentMap['locard'] = 0
  currentMap['eType'] = 'cplx'
  currentMap['copyOverride'] = False
  currentMap['content'] = globalMap.get('VALD').get('exolinks')
  # End of StructureEnsemble

  currentMap = abstractTypes.get('StructureEnsemble')
  aList = ['createdBy', 'ensembleId', 'guid', 'isModifiable', 'lastUnlockedBy']
  currentMap['headerAttrs'] = aList
  aList = ['atomNamingSystem', 'resNamingSystem']
  currentMap['simpleAttrs'] = aList
  aList = ['models', 'coordChains', 'validationStores', 'molSystem', 'access', 'applicationData']
  currentMap['cplxAttrs'] = aList
  aList = ['coordChains', 'models']
  currentMap['children'] = aList

  # Out-of-package link to Atom
  currentMap = {}
  exolinks['Atom'] = currentMap
  loadMaps['COOR.exo-Atom'] = currentMap
  currentMap['tag'] = 'COOR.exo-Atom'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00004'
  currentMap['name'] = 'Atom'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.Atom
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))

  # Out-of-package link to Chain
  currentMap = {}
  exolinks['Chain'] = currentMap
  loadMaps['COOR.exo-Chain'] = currentMap
  currentMap['tag'] = 'COOR.exo-Chain'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00002'
  currentMap['name'] = 'Chain'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.Chain
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))

  # Out-of-package link to Coord
  currentMap = {}
  exolinks['Coord'] = currentMap
  loadMaps['COOR.exo-Coord'] = currentMap
  currentMap['tag'] = 'COOR.exo-Coord'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00001'
  currentMap['name'] = 'Coord'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.Coord
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00037'))
  aList.append(globalMap.get('COOR').get('exolinks'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))

  # Out-of-package link to Model
  currentMap = {}
  exolinks['Model'] = currentMap
  loadMaps['COOR.exo-Model'] = currentMap
  currentMap['tag'] = 'COOR.exo-Model'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2007-11-23-12:00:10_00001'
  currentMap['name'] = 'Model'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.Model
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to Residue
  currentMap = {}
  exolinks['Residue'] = currentMap
  loadMaps['COOR.exo-Residue'] = currentMap
  currentMap['tag'] = 'COOR.exo-Residue'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:55_00003'
  currentMap['name'] = 'Residue'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.Residue
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00033'))
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2006-08-16-14:22:53_00032'))

  # Out-of-package link to StructureEnsemble
  currentMap = {}
  exolinks['StructureEnsemble'] = currentMap
  loadMaps['COOR.exo-StructureEnsemble'] = currentMap
  currentMap['tag'] = 'COOR.exo-StructureEnsemble'
  currentMap['type'] = 'exo'
  currentMap['guid'] = 'www.ccpn.ac.uk_Fogh_2006-08-16-14:22:54_00032'
  currentMap['name'] = 'StructureEnsemble'
  currentMap['eType'] = 'cplx'
  currentMap['class'] = ccp.api.molecule.MolStructure.StructureEnsemble
  aList = list()
  currentMap['keyMaps'] = aList
  aList.append(mapsByGuid.get('www.ccpn.ac.uk_Fogh_2008-06-30-16:30:50_00001'))