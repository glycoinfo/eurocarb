
"""
======================COPYRIGHT/LICENSE START==========================

PrintPopup.py: <write function here>

Copyright (C) 2005 Wayne Boucher, Rasmus Fogh, Tim Stevens and Wim Vranken (University of Cambridge and EBI/MSD)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../license/LGPL.license
 
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


from memops.gui.MessageReporter import showError
from memops.gui.PrintFrame import PrintFrame
from memops.gui.Util import createDismissHelpButtonList

from memops.editor.BasePopup import BasePopup

class PrintPopup(BasePopup):

  # width and height are desired plot size in pixels
  def __init__(self, parent, width, height, appKey = None, *args, **kw):
 
    if (not appKey):
      appKey = ''

    self.appKey = appKey
    self.outputHandler = None
    self.setPlotSize(width, height)

    if (not kw.has_key('popup_name')):
      kw['popup_name'] = 'print'

    BasePopup.__init__(self, parent=parent, *args, **kw)

  def body(self, master):

    master.grid_rowconfigure(0, weight=1)
    master.grid_columnconfigure(0, weight=1)

    row = 0
    self.printFrame = PrintFrame(master, project=self.project, appKey=self.appKey)
    self.printFrame.grid(row=row, column=0, sticky=Tkinter.EW)

    row = row + 1
    texts = [ 'Save' ]
    commands = [ self.ok ]
    buttons = createDismissHelpButtonList(master, texts=texts, commands=commands,
                                          dismiss_text='Cancel')
    buttons.grid(row=row, column=0, sticky=Tkinter.EW)

  # width and height are desired plot size in pixels
  def setPlotSize(self, width, height):

    self.width = width
    self.height = height
 
  def apply(self):

    try:
      self.outputHandler = self.printFrame.getOutputHandler(self.width, self.height)
    except IOError, e:
      showError('IO Error', str(e), parent=self)
      return False
    except:
      showError('Unknown Error', 'unknown error', parent=self)
      return False

    return True
