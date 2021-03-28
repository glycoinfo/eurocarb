
"""
======================COPYRIGHT/LICENSE START==========================

BrukerParams.py

Copyright (C) 2008 Wayne Boucher and Tim Stevens (University of Cambridge)

=======================================================================

This file contains reserved and/or proprietary information
belonging to the author and/or organisation holding the copyright.
It may not be used, distributed, modified, transmitted, stored,
or in any way accessed, except by members or employees of the CCPN,
and by these people only until 31 December 2005 and in accordance with
the guidelines of the CCPN.
 
A copy of this license can be found in ../../../license/CCPN.license.

======================COPYRIGHT/LICENSE END============================

for further information, please contact :

- CCPN website (http://www.ccpn.ac.uk/)

- email: ccpn@bioc.cam.ac.uk

- contact the authors: wb104@bioc.cam.ac.uk, tjs23@cam.ac.uk
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
from memops.general.Implementation import ApiError

from ccp.format.bruker.processingParsIO import BrukerProcessingParData
from ccp.format.bruker.acqParsHelpReader import BrukerParHelp

from ccp.format.spectra.params.ExternalParams import ExternalParams

class BrukerParams(ExternalParams):

  format = 'Bruker'
  # how many directories to keep in file path for default DatUrl split
  keepDirectories = 4

  def __init__(self, procs_file, externalParams = None):

    self.procs_file = procs_file

    ExternalParams.__init__(self, externalParams)

  # ExternalParams requires this to be defined
  def parseFile(self):

    try:
      help = BrukerParHelp('help')
      procParData = BrukerProcessingParData(self.procs_file, help.tags)
      procParData.get()
    except IOError, e:
      raise ApiError(str(e))

    aPars = procParData.aPars
    self.setAttrs(aPars)

if (__name__ == '__main__'):

  import sys
  if (len(sys.argv) != 2):
    print 'Error: required argument: <procs_file>'
    sys.exit(1)

  procs_file = sys.argv[1]
  params = BrukerParams(procs_file)
