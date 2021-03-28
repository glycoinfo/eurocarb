
"""
======================COPYRIGHT/LICENSE START==========================

EntryListPopup.py: GUI window for setting up generic entry lists

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

from ccpnmr.format.general.Io import getHelpUrlDir

from memops.universal.Io import joinPath

from memops.gui.Entry import Entry
from memops.gui.Label import Label
from memops.gui.Util import createDismissHelpButtonList, createHelpButtonList

from ccpnmr.format.gui.BasePopup import TemporaryBasePopup

class EntryListPopup(TemporaryBasePopup):
 
  def __init__(self, parent, valueList, valueInfo, title = 'Entry list', topText = 'Enter values', dismissText = None, urlFile = None, dismissButton = True, conversionFunc = None, modal = False):
  
    self.valueList = valueList
    self.valueInfo = valueInfo
    self.values = []
    
    self.dismissButton = dismissButton
    self.conversionFunc = conversionFunc
    
    if dismissButton:
      if dismissText:
        self.dismissText = dismissText
      else:
        self.dismissText = 'dismiss'
      
    self.topText = topText
      
    if urlFile:
      self.help_url = joinPath(getHelpUrlDir(),urlFile + '.html')
    else:
      self.help_url = None
          
    TemporaryBasePopup.__init__(self,parent = parent, title = title, modal = modal, transient=True)
 
  def body(self, master):
    
    #
    # Popup window
    #

    row = 0
    
    label = Label(master, text= self.topText)
    label.grid(row=row, column=0, columnspan = 2, sticky=Tkinter.EW)
    
    row = row + 1

    self.valueWidgets = []
    
    for i in range(0,len(self.valueList)):
    
      value = self.valueList[i]
      labelText = self.valueInfo[i]
      
      label = Label(master, text= labelText)
      label.grid(row=row, column=0, sticky=Tkinter.EW)

      self.valueWidgets.append(Entry(master, text = str(value)))
      self.valueWidgets[-1].grid(row=row, column=1, sticky=Tkinter.E, ipadx = 20)
 
      row = row + 1
      
    texts = [ 'OK' ]
    commands = [ self.ok ]   # This calls 'ok' in BasePopup, this then calls 'apply' in here
    
    if self.dismissButton:
      buttons = createDismissHelpButtonList(master, texts=texts, commands=commands, dismiss_text = self.dismissText, help_url=self.help_url)
    else:
      buttons = createHelpButtonList(master, texts=texts, commands=commands, help_url=self.help_url)

    buttons.grid(row=row, column=0, columnspan = 3)

  def apply(self):
    
    self.values = []
    
    for valueWidget in self.valueWidgets:
      value = valueWidget.get()
      
      if self.conversionFunc:
        value = self.conversionFunc(value)
      elif value == '':
        value = None
      
      self.values.append(value)

    return True
