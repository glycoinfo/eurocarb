#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

sequenceIO.py: I/O for Talos sequence from project file

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

import os,string

# Import general functions
from memops.universal.Util import returnInt
from ccp.format.talos.generalIO import TalosGenericFile
from memops.universal.Io import getTopDirectory
from ccp.format.general.formatIO import Sequence, SequenceElement

#####################
# Class definitions #
#####################
      
class TalosSequenceFile(TalosGenericFile):
  """
  Information on file level
  """
  def initialize(self):
  
    self.sequences = []

  def printInfo(self,action):
    
    print "%s %s sequence file %s" % (action,self.format,self.name)

  def handleDataLine(self,line):
  
    cols = line.split()
  
    if cols[1] == 'SEQUENCE':

      self.sequences.append(TalosSequence())

      seqString = cols[2]

      #
      # Make the sequence
      #

      for seqIndex in range(0,len(seqString)):

        oneLetterCode = seqString[seqIndex]
        self.sequences[-1].elements.append(TalosSequenceElement(seqIndex + 1,oneLetterCode))

    else:
      print "  Warning: unknown data type %s for %s %s import." % (cols[1],self.format,self.name)


  def writeDataLines(self,fout):
    
    for seq in self.sequences:
    
      seqString = ""
    
      for seqEl in seq.elements:
        seqString += seqEl.code1Letter
    
      fout.write("DATA SEQUENCE %s" % seqString)
      fout.write(self.newline * 2)      

#
# Casting here for imports in ccpnmr.format.converters
#
 
TalosSequence = Sequence

class TalosSequenceElement(SequenceElement):

  def setResidueCode(self,*args):
  
    code1Letter = args[0]
    self.code1Letter = string.upper(code1Letter)

###################
# Main of program #
###################

if __name__ == "__main__":  
                                                      
  files = [['../reference/talos/marlies.talosin.tab','local/test.seq']]

  
  for (inFile,outFile) in files:
    
    sequenceFile = TalosSequenceFile(os.path.join(getTopDirectory(),inFile))

    sequenceFile.read(verbose = 1)
    
    for seq in sequenceFile.sequences:
      print seq.molName
      for seqel in seq.elements:
        print seqel.seqCode, seqel.code1Letter
    
    sequenceFile.name = outFile
    sequenceFile.write()
