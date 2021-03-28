"""
======================COPYRIGHT/LICENSE START==========================

sequenceIO.py: I/O for CSI sequence export files

Copyright (C) 2006 Wim Vranken (European Bioinformatics Institute)

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

import string

# Import general functions
from memops.universal.Util import returnInt
from ccp.format.csi.generalIO import CsiGenericFile
from ccp.format.general.formatIO import Sequence, SequenceElement

#####################
# Class definitions #
#####################
      
class CsiSequenceFile(CsiGenericFile):
  """
  Information on file level
  """
  def initialize(self):
  
    self.sequences = []

  def read(self,verbose = 0):

    if verbose == 1:
      print "Reading %s sequence file %s" % (self.format,self.name)

    self.sequences.append(CsiSequence())

    fin = open(self.name, 'rU')
    
    headerCols = []

    # Read, look for first line
    line = fin.readline()

    while line:

      if self.patt['%sComment' % self.format].search(line) or self.patt['emptyline'].search(line):

        line = fin.readline()
        continue
              
      #
      # Get the info... 
      #
      
      cols = line.split()
      
      if not headerCols:
        headerCols = line.split()
        colLen = len(headerCols)
        self.headerAtomNames = headerCols[2:]
        
      elif len(cols) == colLen:
        
        seqCode = returnInt(cols[0])
        resLabel = cols[1]
        
        self.sequences[-1].elements.append(CsiSequenceElement(seqCode,resLabel))

      line = fin.readline()

    fin.close()
    
CsiSequence = Sequence

class CsiSequenceElement(SequenceElement):

  def setResidueCode(self,*args):
  
    code1Letter = args[0]
    
    if code1Letter:
      self.code1Letter = string.upper(code1Letter)
    else:
      self.code1Letter = 'X'
