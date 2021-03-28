#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

sequenceIO.py: I/O for Ansig sequence files

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

import os, string

# Import general stuff
from memops.universal.Util import returnInt
from memops.universal.Io import getTopDirectory
from ccp.format.ansig.generalIO import AnsigGenericFile

from ccp.format.general.formatIO import Sequence, SequenceElement

#####################
# Class definitions #
#####################
      
class AnsigSequenceFile(AnsigGenericFile):

  def initialize(self):
  
    self.sequences = []

  def read(self,verbose = 0):

    if verbose == 1:
      print "Reading ansig sequence file %s" % self.name
    
    self.sequences.append(AnsigSequence())

    fin = open(self.name, 'rU')
  
    # Read first line
    line = fin.readline()
  
    while line:
      cols = line.split()
    
      if len(cols) == 0 or self.patt['exclamation'].search(line):
        pass

      elif cols[0] == 'sequence':
        self.sequences[-1].molName = cols[1]

      elif cols[0] == 'residue':
        # Get remarks on residue
        details = string.split(line,'!')

        if len(details) > 1:
          details = details[1]
        else:
          details = None
          
        if cols[1] == 'lig':
          self.sequences.append(AnsigSequence())
          self.sequences[-1].elements.append(AnsigSequenceElement(1,cols[2],details = details,ligand = True))
        else:
          self.sequences[-1].elements.append(AnsigSequenceElement(cols[1],cols[2],details = details))

      line = fin.readline()

    fin.close()


  def write(self,verbose = 0):
  
    if verbose == 1:
      print "Writing ansig sequence file %s" % self.name

    if len(self.sequences) > 1:
      print "Warning: multiple sequences - writing to same file."
      
    fout = open(self.name,'w')
  
    for sequence in self.sequences:
 
      #
      # Writing header
      #
 
      fout.write("! Ansig sequence file" + self.newline)
      fout.write("!" + self.newline)
      fout.write("! written from Ansig sequenceIO in ccpNmr formatConverter suite" + self.newline)
      fout.write("!" + (self.newline * 2))
      fout.write("sequence %s" % sequence.molName + self.newline)
 
      #
      # Write seqCode + code3Letter (lowercase with first uppercase)
      #
 
      for residue in sequence.elements:
 
        resLabel = string.capitalize(string.lower(residue.code3Letter))
 
        if residue.details:
          addString = "  ! %s" % residue.details
        else:
          addString = ""
 
        if not residue.ligand:
          fout.write("  residue %5d  %3s%s" % (residue.seqCode,resLabel,addString))
        else:
          fout.write("  residue %5s  %3s%s" % ('lig',resLabel,addString))
        fout.write(self.newline)

      fout.write("end_sequence" + self.newline)

    fout.close()



AnsigSequence = Sequence

class AnsigSequenceElement(SequenceElement):
  
  def setFormatSpecific(self,*args,**keywds):
    
    if keywds.has_key('details') and keywds['details'] != None:
      self.details = string.strip(keywds['details'])
      
    else:
      self.details = None

    if keywds.has_key('ligand'):
      self.ligand = True
      
    else:
      self.ligand = False

###################
# Main of program #
###################

if __name__ == "__main__":
                                                      
  file = os.path.join(getTopDirectory(),'../../reference/ccpNmr/daniel/ras.seq')
  sequenceFile = AnsigSequenceFile(file)
  

  sequenceFile.read(verbose = 1)
  
  for seq in sequenceFile.sequences:
    for seqEl in seq.elements:
      print seqEl.seqCode, seqEl.code3Letter
  
  sequenceFile.name = 'local/sequence.test'
  sequenceFile.write(verbose = 1)
