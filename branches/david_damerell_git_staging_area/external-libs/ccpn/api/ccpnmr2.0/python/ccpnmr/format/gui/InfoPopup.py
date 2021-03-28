
"""
======================COPYRIGHT/LICENSE START==========================

InfoPopup.py: GUI window for showing information

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
import Tkinter


from memops.gui.Label import Label
from memops.gui.Util import createDismissButton

from ccpnmr.format.gui.BasePopup import TemporaryBasePopup

class InfoPopup(TemporaryBasePopup):

  def __init__(self, parent, infoTitle, infoText, infoList = None, infoDict = None):
  
    self.infoText = infoText
    self.infoList = infoList
    self.infoDict = infoDict

    TemporaryBasePopup.__init__(self, parent=parent, title=infoTitle, modal=False, transient=True)

  def body(self, master):
  
    if self.infoList:
      columnspan = 2
    else:
      columnspan = 1

    row = 0
    label = Label(master, text= self.infoText)
    label.grid(row=row, column=0, columnspan = columnspan, sticky=Tkinter.W)

    if self.infoList:
      for infoListItem in self.infoList:

        row = row + 1

        label = Label(master, text= infoListItem)
        label.grid(row=row, column=0, sticky=Tkinter.E)

        value = self.infoDict[infoListItem]

        if type(value) == type(''):
          value = "[" + value + "]"
        else:
          value = str(value)

        label = Label(master, text= value)
        label.grid(row=row, column=1, sticky=Tkinter.W)

    row = row + 1

    buttons = createDismissButton(master, dismiss_text = 'Continue',dismiss_cmd = self.destroy)
    buttons.grid(row=row, column=0, columnspan = columnspan)
