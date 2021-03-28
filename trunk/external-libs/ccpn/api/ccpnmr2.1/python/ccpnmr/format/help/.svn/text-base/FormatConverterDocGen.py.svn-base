"""
======================COPYRIGHT/LICENSE START==========================

FormatConverterDocGen.py: 

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
import re, os.path, sys
from ccpnmr.scripts.CcpNmrDocGen import makeDocumentation
from memops.universal.Io import getTopDirectory

if __name__ == '__main__':
  
  if (len(sys.argv) > 1):
    topDir = sys.argv[1]
  else:
    topDir = getTopDirectory()
  fcDir = os.path.join(topDir,'python','ccpnmr','format')
  site = makeDocumentation('FormatConverter',
                           os.path.join(fcDir,'help','FormatConverterDoc.txt'),
                           os.path.join(fcDir,'help','FormatConverterHtmlTemplate.txt'),
                           helpTemplate = os.path.join(fcDir,'help','FormatConverterHelpHtmlTemplate.txt')
                           )
                           
  site.location = os.path.join(topDir,'doc','ccpnmr','format')
  site.helpLocation = os.path.join(fcDir,'doc')
  site.publish()
  
