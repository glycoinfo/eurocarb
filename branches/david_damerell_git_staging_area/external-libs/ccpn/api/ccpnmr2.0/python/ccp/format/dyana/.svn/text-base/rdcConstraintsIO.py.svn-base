#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

rdcConstraintsIO.py: I/O for Diana/Dyana rdc constraint files

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

import os

from memops.universal.Util import returnInt, returnFloat
from memops.universal.Io import getTopDirectory

from ccp.format.dyana.generalIO import DyanaGenericFile
from ccp.format.dyana.generalIO import DyanaConstraintItem
from ccp.format.dyana.generalIO import DyanaConstraintMember

# Diana/Dyana/Cyana data...
from ccp.format.cyana.cyanaLibParser import CyanaLibrary

#####################
# Class definitions #
#####################

class DyanaRdcConstraintFile(DyanaGenericFile):

  def initialize(self):

    self.constraints = []
    
    self.cyanaLib = CyanaLibrary(version = self.version)

    self.constraintElements = 2

  def read(self,verbose = 0):

    print "Using CYANA library - courtesy of Peter Guentert."

    if verbose == 1:
      print "Reading %s rdc constraint list %s" % (self.format,self.name)

    rdcId = 0
    chainCode = self.defaultMolCode

    fin = open(self.name, 'rU')

    # Read, look for first line
    line = fin.readline()

    while line:
      cols = line.split()

      if len(cols) == 0 or self.patt['hash'].search(line):
        pass

      else:

        rdcId += 1

        keywds = {}

        if len(cols) > 4:
          keywds['error'] = cols[4]
          if len(cols) > 5:
            keywds['energyCst'] = cols[5]

        self.constraints.append(DyanaRdcConstraint(rdcId,self.cyanaLib))
        self.constraints[-1].setRdcData(cols[3],**keywds)
        self.constraints[-1].setAtomMembers(chainCode,cols[0],cols[1],cols[2])

      line = fin.readline()

  def write(self,verbose = 0):

    print "Using CYANA library - courtesy of Peter Guentert."

    #
    # Output format is (example following):
    #
    #  30 ILE  HN    4       2.0  1.4
    #
    # Last column (weight) only listed if not 1.0
    # ...

    if verbose == 1:
      print "Writing %s rdc constraint list %s" % (self.format,self.name)

    fout = open(self.name,'w')

    for constraint in self.constraints:

      atomNames = []
      resLabel = None
      
      for item in constraint.items:
        for member in item.members:
          atomNames.append(member.atomName)
          resLabel = member.resLabel
          seqCode = member.seqCode

      if not resLabel:
        print "  Error: cannot write RDC constraint (no resLabel)."
      
      else:
        protonName = constraint.getProtonName(resLabel,atomNames)

        if protonName:

          fout.write("%4d %-4s %-5s %-7.2f" % (seqCode,
                                                    resLabel,
	  	                                                protonName,
		                                                  constraint.value))
          if constraint.error:
            fout.write("%6.2f" % (constraint.error))

          if constraint.energyCst != 1.0:
            fout.write("%9.1f" % (constraint.energyCst))

          fout.write(self.newline)

    fout.close()

class DyanaRdcConstraint:

  def __init__(self,Id,cyanaLib):
    
    self.Id = returnInt(Id)
    self.items = []
    
    self.cyanaLib = cyanaLib
    
  def setRdcData(self,value,error = 0.00, energyCst = 1.0):
  
    self.error = returnFloat(error)
    self.value = returnFloat(value)
    self.energyCst = returnFloat(energyCst)
      
  def setAtomMembers(self,chainCode,seqCode,resLabel,refAtomName):
  
    refAtom = self.cyanaLib.findAtom(resLabel,refAtomName)
    
    seqCode = returnInt(seqCode)
    
    if refAtom:

      if refAtom.bondedAtomSerials.count(0) != 3:
        print "  Error: invalid single atom %s (%s %s, chain '%s'). No or multiple bonded atoms" % (refAtomName,resLabel,seqCode,chainCode)
      
      else:
      
        self.items.append(DyanaConstraintItem())
       
        self.items[-1].members.append(DyanaConstraintMember(chainCode,seqCode,resLabel,refAtomName))
  
        atomSerial = refAtom.bondedAtomSerials[0]     
        bondedAtom = self.cyanaLib.findAtomBySerial(resLabel,atomSerial)
  
        self.items[-1].members.append(DyanaConstraintMember(chainCode,seqCode,resLabel,bondedAtom.name))
    
    else:
      
      print "  Error: cannot write RDC restraint, atom %s for residue %s not found." % (refAtomName,resLabel)
    
  def getProtonName(self,resLabel,atomNames):
    
    for atomName in atomNames:
    
      atom = self.cyanaLib.findAtom(resLabel,atomName)

      if atom and atom.bondedAtomSerials.count(0) == 3:
          
        return atom.name  
          
    return None
 
###################
# Main of program #
###################

if __name__ == "__main__":

  files = ['../reference/ccpNmr/jurgenBmrb/1jwe/diana.rdc',
           '../reference/diana/example.rdcs']
  
  for file in files:
    
    file = os.path.join(getTopDirectory(), file)
    
    constraintFile = DyanaRdcConstraintFile(file)

    constraintFile.read(verbose = 1)

    for constraint in constraintFile.constraints:
      print constraint.Id,

      print constraint.value, constraint.error,

      for item in constraint.items:
        for member in item.members:

          print member.seqCode, member.atomName,

        print "|",

      print
    
    constraintFile.name = 'local/rdc.testout'

    constraintFile.write(verbose = 1)

