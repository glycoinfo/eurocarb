"""
======================COPYRIGHT/LICENSE START==========================

peaksIO.py: I/O for XEasy peak list files

Copyright (C) 2006-2008 Wim Vranken (European Bioinformatics Institute)

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
from memops.universal.Util import returnInt, returnFloat
from memops.universal.Io import getTopDirectory
from memops.universal.Io import splitPath

from ccp.format.xeasy.generalIO import XEasyGenericFile

#####################
# Class definitions #
#####################

class XEasyPeakFile(XEasyGenericFile):

  def initialize(self):
  
    self.peaks = []
    
    self.cyanaFormat = False

  def setSpectrumInfo(self,specName,ndim):
  
    self.specNames = [specName]
    self.numDims = [ndim]

    self.dimCodes = ndim * ['']

  def translateIntMethod(self,source,method):
  
    translateIntMethods = [("d","Denk integration"),
                           ("r","Rectangular integration"),
	       ("e","Elliptical integration"),
	       ("m","Maximum integration"),
	       ("a","Automatic integration"),
	       ("-","Not integrated")]
    
    if source == 'ccpn':
      for (code,methodName) in translateIntMethods:
        if method == methodName:
          return code
      return 'a'        # is default
    
    elif source == 'xeasy':
      for (code,methodName) in translateIntMethods:
        if method == code:
          return methodName
      print "Unknown xeasy integration code %s" % method

    else:
      print "Unknown source for xeasy integration method translation %s" % source

    return None
    
  def read(self,verbose = 0, cyanaFormat = False):

    if verbose == 1:
      print "Reading xeasy peak list %s" % self.name
      
    if cyanaFormat:
      self.cyanaFormat = cyanaFormat

    fin = open(self.name, 'rU')

    # Read number of dimensions on first line
    line = fin.readline()
    cols = line.split()

    n = returnInt(cols[-1])
    (path,specName) = splitPath(self.name)
    self.setSpectrumInfo(specName,n)

    assign = n*['']
    ppm = n*[0]

    line = fin.readline()
    # Read rest file
    while line:

      if not self.patt['hash'].search(line) and not self.patt['emptyline'].search(line):
        
        searchObj = self.patt[self.format + 'PeakInfo'].search(line)
       
        line = searchObj.group(1)
        peak_el = line.split()
        
        if len(peak_el) > n and peak_el[0] != '0':
        
          peaknum = peak_el.pop(0)

          for i in range(0,n):
            ppm[i] = peak_el.pop(0)       

          (colour,userCode,volume,volumeError,intCode) = peak_el[0:5]        
          del peak_el[0:6] # deleting extra void code

          for i in range(0,n):
            assign[i] = peak_el.pop(0)       
            
          #
          # Create the peak and check if valid
          #  
          
          peak = XEasyPeak(peaknum,ppm,colour,userCode,volume,volumeError,intCode,assign,verbose=False)
          
          if not None in peak.ppm + peak.assign + [peak.num,peak.volume,peak.volumeError,peak.colour]:
            self.peaks.append(peak)

        else:
          
          if len(peak_el) == n:
            start = 0
            end = n
          else:
            start = len(peak_el) - 3
            end = len(peak_el)
          
          for i in range(start,end):
            assign[i] = peak_el[i]
            
          self.peaks[-1].addAssignment(assign)

      elif self.patt[self.format + 'IName'].search(line):
        searchObj = self.patt[self.format + 'IName'].search(line)
        dim = returnInt(searchObj.group(1))
        dimCode = searchObj.group(2)
        self.dimCodes[dim-1] = dimCode
        
      elif self.patt[self.format + 'CyanaFormat'].search(line):
        self.cyanaFormat = True

      line = fin.readline()

    fin.close()

  def write(self, verbose = 0, cyanaFormat = False):

    if verbose == 1:
      print "Writing xeasy peak list %s" % self.name

    fout = open(self.name,'w')

    numDim = len(self.dimCodes)

    #
    # Write out header
    #

    fout.write("# Number of dimensions %d" % numDim)
    fout.write(self.newline)

    dimCodeString = ""
    for dim in range(0,numDim):
      dimCode = self.dimCodes[dim]
      if dimCode in dimCodeString:
        dimCode = dimCode.lower()
      
      fout.write("# INAME %d %s" % (dim+1,dimCode) + self.newline)
      dimCodeString += dimCode
     
    if cyanaFormat:
      fout.write("#CYANAFORMAT %s" % (dimCodeString) + self.newline)      

    #
    # Write out peaks
    #
    
    preAssignLen = 44 + 8 * numDim

    for peak in self.peaks:
      line  = "%4d "     % peak.num

      for dim in range(0,numDim):
        line += "%7.3f " % peak.ppm[dim]

      line += "%d "      % peak.colour
      line += "%s "      % peak.userCode
      line += "%18.3e "  % peak.volume
      line += "%9.2e "   % peak.volumeError
      line += "%s "      % peak.intCode
      line += "%3d "     % 0

      for dim in range(0,numDim):
        line += "%4d " % peak.assign[dim]

      line += "%d"       % 0
      line += self.newline
      
      if cyanaFormat and peak.ambiguousAssign:
        for assign in peak.ambiguousAssign:
          line += preAssignLen * ' '
          for dim in range(0,numDim):
            line += "%4d " % assign[dim]
          line += self.newline

      fout.write(line)

    fout.close()

#
# num  w1  w2  (w3)  colour user_defined_spec_type  volume  volume_error(%) int_method void_num  assiw1 assiw2 (assiw3) void_num

class XEasyPeak:

  def __init__(self,num,ppm,colour,userCode,volume,volumeError,intCode,assign,verbose=False):

    self.num = returnInt(num,default=None,verbose=verbose)
    self.volume = returnFloat(volume,default=None,verbose=verbose)
    self.volumeError = returnFloat(volumeError,default=None,verbose=verbose)
    self.colour = returnInt(colour,default=None,verbose=verbose)
    self.userCode = userCode
    self.intCode = intCode

    self.ppm = []
    self.assign = []
    self.ambiguousAssign = []

    for i in range(0,len(assign)):
      self.ppm.append(returnFloat(ppm[i],default=None,verbose=verbose))
      self.assign.append(returnInt(assign[i],default=None,verbose=verbose))

  def addAssignment(self,assign):
    
    self.ambiguousAssign.append([])

    for i in range(0,len(assign)):
      self.ambiguousAssign[-1].append(returnInt(assign[i]))
  
###################
# Main of program #
###################

if __name__ == "__main__":  

  files = [['../../reference/xeasy/2d.1.peaks','local/peaks1a.test'],
           ['../../reference/xeasy/2d.2.peaks','local/peaks2a.test'],
           ['../../reference/xeasy/3d.1.peaks','local/peaks3a.test'],
           ['../../reference/ccpNmr/eisoUtrecht/041203/NhH-cycle6.peaks','local/peaks4a.test'],
           ['../../reference/ccpNmr/magnusLund/cyana.peaks','local/peaks5a.test'],
           ['../../reference/ccpNmr/brynCambridge/20060313/Cycle1_1_15N22.3D.16_assigned.peaks','local/peaks6.test']
         ]

  for (inFile,outFile) in files[-1:]:
    
    peakFile = XEasyPeakFile(os.path.join(getTopDirectory(),inFile))

    peakFile.read(verbose = 1)
    
    print peakFile.cyanaFormat
       
    for rawPeak in peakFile.peaks:
      print rawPeak.volume, rawPeak.assign, rawPeak.ambiguousAssign

    # Reading, then writing back file was tested: all OK (Wim 15/11/2002)
    
    peakFile.name = outFile
    peakFile.write(verbose = 1, cyanaFormat = peakFile.cyanaFormat)
