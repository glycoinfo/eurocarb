#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

sequenceIO.py: I/O for Sparky sequence export files

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

# Import general functions
from memops.universal.Util import returnInt
from ccp.format.sparky.generalIO import SparkyGenericFile
from memops.universal.Io import getTopDirectory
from ccp.format.general.formatIO import Sequence, SequenceElement

#####################
# Class definitions #
#####################
      
class SparkySequenceFile(SparkyGenericFile):
  """
  Information on file level
  """
  def initialize(self):
  
    self.sequences = []

  def read(self,verbose = 0):

    if verbose == 1:
      print "Reading sparky sequence file %s" % self.name

    self.sequences.append(SparkySequence())

    seqCode = 1

    fin = open(self.name, 'rU')

    # Read, look for first line
    line = fin.readline()

    while line:
      cols = line.split()

      if len(cols) == 0 or self.patt['hash'].search(line):
        pass

      # TODO: this is a hack... if this is a one-letter sequence with three
      # residues this will fall over (unlikely though)
      elif len(cols[0]) == 3 or len(cols[0]) == 1:

        # Assuming one or three-letter codes, one each line

        self.sequences[-1].elements.append(SparkySequenceElement(seqCode,resCode = cols[0]))
        seqCode += 1

      else:

        # Assuming one-letter codes in long string

        for res in cols[0]:
          self.sequences[-1].elements.append(SparkySequenceElement(seqCode,code1Letter = res))
          seqCode += 1

      line = fin.readline()

    fin.close()


  def write(self,verbose = 0):

    if verbose == 1:
      print "Writing sparky sequence file %s" % self.name

    if len(self.sequences) > 1:
      print "Warning: multiple sequences - writing to same file."        

    fout = open(self.name,'w')

    for sequence in self.sequences:

      #
      # Write three letter codes (one per line)
      #

      for residue in sequence.elements:

        fout.write(" %3s" % (string.upper(residue.code3Letter)))
        fout.write(self.newline)

    fout.close()
    
class SparkySequence(Sequence):

  def setFormatSpecific(self,*args,**keywds):
  
    pass
 
class SparkySequenceElement(SequenceElement):

  def setFormatSpecific(self,resCode = None, code3Letter = None, code1Letter = None):
    
    if resCode:
      if len(resCode) == 3:
        self.code3Letter = string.upper(resCode)

      elif len(resCode) == 1:
        self.code1Letter = string.upper(resCode)
    
    elif code3Letter:
      self.code3Letter = code3Letter
      
    elif code1Letter:
      self.code1Letter = code1Letter

###################
# Main of program #
###################
                                                      
if __name__ == "__main__":

  files = ['../reference/sparky/list.sequence'
          ]

  for inFile in files:
    
    sequenceFile = SparkySequenceFile(os.path.join(getTopDirectory(),inFile))
    sequenceFile.read(verbose = 1)

    for seq in sequenceFile.sequences:
      for seqel in seq.elements:
        if hasattr(seqel,'code3Letter'):
          print seqel.seqCode, seqel.code3Letter
        else:
          print seqel.seqCode, seqel.code1Letter

