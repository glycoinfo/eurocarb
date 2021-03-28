"""
======================COPYRIGHT/LICENSE START==========================

CosmosFormat.py: Contains functions specific to Cosmos conversions.

Copyright (C) 2008 Wim Vranken (European Bioinformatics Institute)

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
- MSD website (http://www.ebi.ac.uk/msd/)

- contact Wim Vranken (wim@ebi.ac.uk)
=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following references:

===========================REFERENCE START=============================
R. Fogh, J. Ionides, E. Ulrich, W. Boucher, W. Vranken, J.P. Linge, M.
Habeck, W. Rieping, T.N. Bhat, J. Westbrook, K. Henrick, G. Gilliland,
H. Berman, J. Thornton, M. Nilges, J. Markley and E. Laue (2002). The
CCPN project: An interim report on a data model for the NMR community
(Progress report). Nature Struct. Biol. 9, 416-418.

Wim F. Vranken, Wayne Boucher, Tim J. Stevens, Rasmus
H. Fogh, Anne Pajon, Miguel Llinas, Eldon L. Ulrich, John L. Markley, John
Ionides and Ernest D. Laue (2005). The CCPN Data Model for NMR Spectroscopy:
Development of a Software Pipeline. Proteins 59, 687 - 696.

===========================REFERENCE END===============================
"""

import os, traceback, sys

from ccpnmr.format.converters.DataFormat import DataFormat, IOkeywords

class CosmosFormat(DataFormat):

  def setFormat(self):
  
    self.format = 'cosmos'
    
    # Necessary for project write
    self.atomToCoordinateSerial = {}

  def setGenericImports(self):
    
    #self.getSequence = self.getSequenceGeneric
    #self.createSequenceFile = self.createSequenceFileGeneric

    self.createCoordinateFile = self.createCoordinateFileGeneric
    
    self.createMeasurementFile = self.createMeasurementFileGeneric

  #
  # Deviations from generic import stuff
  #

  def createFullProject(self,fileName,models = None, shiftList = None):

    if self.verbose == 1:
      print "Writing %s project from file %s" % (self.formatLabel,fileName)
   
    self.file = self.projectIO.CosmosProjectFile(fileName)
   
    self.writeCoordinates(fileName, structures = models, noWrite = True, resetIOkeywords = False)
    self.file.coordinateFile = self.coordinateFile

    self.writeShifts(fileName, measurementList = shiftList, noWrite = True,  resetMapping = False, resetIOkeywords = False, individualAtoms = True)
    self.file.chemShiftFile = self.measurementFile
    
    self.file.write()
    
    return self.file
    
  #
  # Functions different to default functions in DataFormat
  #

  def setRawCoordinate(self):
  
    if not self.coordinateFile.modelCoordinates.has_key(self.modelId):

      self.coordinateFile.modelCoordinates[self.modelId] = []
    
    chemCompVar = self.residue.chemCompVar
    chemComp = chemCompVar.chemComp
    
    resName = chemComp.ccpCode.upper()
    atomName = self.atomName
    
    atomNumber = self.atom.chemAtom.chemElement.atomNumber
 
    modelCoordinate = self.coordinatesIO.CosmosCoordinate(self.coordinateSerial,
                                                          self.chain.code,
                                                          self.residue.seqId,        
                                                          atomName,
                                                          atomNumber,
                                                          resName,
                                                          self.coord.x,
                                                          self.coord.y,
                                                          self.coord.z)
      
    self.coordinateFile.modelCoordinates[self.modelId].append(modelCoordinate)
    
    if not self.atomToCoordinateSerial.has_key(self.chain):
      self.atomToCoordinateSerial[self.chain] = {}
    if not self.atomToCoordinateSerial[self.chain].has_key(self.residue):
      self.atomToCoordinateSerial[self.chain][self.residue] = {}
    if not self.atomToCoordinateSerial[self.chain][self.residue].has_key(self.atom):
      self.atomToCoordinateSerial[self.chain][self.residue][self.atom] = []
      
    self.atomToCoordinateSerial[self.chain][self.residue][self.atom].append(self.coordinateSerial)
    
  def setChemShiftFileValue(self):
    
    if self.atomNamesDict.has_key(self.atomName):
    
      resonanceToAtom = self.atomNamesDict[self.atomName]
      measurement = self.origAtomMeasurements[resonanceToAtom]
      
      residueLabel = self.getResidueLabelThreeLetter(resonanceToAtom)
      
      coordAtomSerial = None
      atom = self.residue.findFirstAtom(name = self.atomName)
      
      if hasattr(self,'atomToCoordinateSerial') and self.atomToCoordinateSerial.has_key(self.chain) and \
         self.atomToCoordinateSerial[self.chain].has_key(self.residue) and \
         self.atomToCoordinateSerial[self.chain][self.residue].has_key(atom):
         
        coordAtomSerial = self.atomToCoordinateSerial[self.chain][self.residue][atom][0]
      
      #
      # Set the value
      #
      
      self.measurementFileValues.append(
      
               self.rawMeasurementClass(measurement.value,
                                        self.atomName,
                                        residueLabel.upper(),
                                        atomSerial = coordAtomSerial
                                        ))
      
      if self.atomMeasurements.has_key(resonanceToAtom):
        del(self.atomMeasurements[resonanceToAtom])

  def getPresetChainMapping(self,chainList):
  
    return self.getSingleChainFormatPresetChainMapping(chainList)
