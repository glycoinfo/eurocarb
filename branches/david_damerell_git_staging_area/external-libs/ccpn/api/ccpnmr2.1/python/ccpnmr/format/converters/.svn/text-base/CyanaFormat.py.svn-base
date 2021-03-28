#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

CyanaFormat.py: Contains functions specific to Cyana conversions.

Copyright (C) 2005 Wim Vranken (European Bioinformatics Institute)

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

import traceback, sys

from ccpnmr.format.converters.DyanaFormat import DyanaFormat, IOkeywords

class CyanaFormat(DyanaFormat):

  def setFormat(self):
  
    self.format = 'cyana'
    self.IOkeywords = IOkeywords

  def setGenericImports(self):
    
    self.getCoordinates = self.getCoordinatesGeneric
    self.createCoordinateFile = self.createCoordinateFileGeneric 

  #
  # Deviations from generic import stuff
  #

  def getCoordinatesSetSequenceFile(self):
    
    self.setSequenceFileClass()
    self.sequenceFile = self.SequenceFileClass(self.fileName, version =  self.version)
    self.sequenceFile.readFromCoordinates(self.coordinateFile)

  def getSequence(self):
    
    # Not generic - passing in version    
    self.sequenceFile = self.SequenceFileClass(self.fileName, version =  self.version)
    self.sequenceFile.read()

    if self.verbose == 1:
      print "Reading sequence from %s file %s" % (self.formatLabel,self.fileName)

  def createSequenceFile(self):
  
    # Not generic - passing in version
    if self.verbose == 1:
      print "Writing sequence to %s file %s" % (self.formatLabel,self.fileName)

    self.sequenceFile = self.SequenceFileClass(self.fileName, version =  self.version)

  def getConstraints(self):
    
    #
    # Format slightly different for constraints....
    #
    
    try:
      
      addKeywords =self.getLowerLimitFile()
    
      self.constraintFile = self.ConstraintFileClass(self.fileName, version =  self.version, **addKeywords)
      self.constraintFile.read(self.fileName)

      if self.verbose == 1:
        print "Reading %s constraint list from %s file %s" % (self.constraintType,self.formatLabel,self.fileName)

    except:
      errorMessage = traceback.format_exception_only(sys.exc_type,sys.exc_value)[-1]
      self.messageReporter.showWarning("Warning"," Cannot read %s constraints for %s...:\n%s" % (self.constraintApiCode,self.formatLabel,errorMessage),self.guiParent)
      self.constraintFile = None

      return traceback.format_exception(sys.exc_type,sys.exc_value,sys.exc_info()[2]) 

  def createConstraintFile(self):
  
    try:

      addKeywords = self.getLowerLimitFile(messageType = 'write')

      self.constraintFile = self.ConstraintFileClass(self.fileName, version =  self.version, **addKeywords)
    
      if self.verbose == 1:
        print "Writing %s constraints to %s file %s" % (self.constraintType,self.formatLabel,self.fileName)
  
    except:
    
      self.messageReporter.showWarning("Warning"," No write%sConstraints available for %s..." % (self.constraintApiCode,self.formatLabel),self.guiParent)
      self.quit()

  #
  # Functions different to default functions in DataFormat
  #
    
  def createSequence(self):
  
    self.sequenceFile.sequences.append(self.sequenceIO.CyanaSequence(molName = self.chain.molecule.name))
    self.sequence = self.sequenceFile.sequences[-1]
    
  # setSequenceFileElements is same as Dyana - bit hacky...
