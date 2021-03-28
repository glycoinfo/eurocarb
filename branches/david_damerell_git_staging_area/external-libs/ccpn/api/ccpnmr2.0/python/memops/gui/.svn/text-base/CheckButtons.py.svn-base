
"""
======================COPYRIGHT/LICENSE START==========================

CheckButtons.py: <write function here>

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


from memops.gui.Frame import Frame

class CheckButtons(Frame):

  def __init__(self, parent, entries, select_callback = None,
               selected = None, direction = Tkinter.HORIZONTAL, *args, **kw):

    if (selected is None):
      selected = []

    apply(Frame.__init__, (self, parent) + args, kw)

    self.entries = entries

    self.select_callback = select_callback
    self.vars = len(self.entries) * [0]

    for n in range(len(entries)):

      entry = entries[n]

      self.vars[n] = Tkinter.IntVar()
      if (entry in selected):
        self.vars[n].set(1)
      else:
        self.vars[n].set(0)

      b = Tkinter.Checkbutton(self, text=str(entry), variable=self.vars[n])

      if (select_callback):
        b.config(command=self.doCallback)

      if (direction == Tkinter.HORIZONTAL):
        b.grid(row = 0, column = n)
      else:
        b.grid(row = n)

  def doCallback(self):

    self.select_callback(self.getSelected())

  def isEntrySelected(self, entry):

    n = self.entries.index(entry)

    return self.isIndexSelected(n)

  def isIndexSelected(self, n):

    return self.vars[n].get()

  def getSelected(self):

    selected = []
 
    for n in range(len(self.vars)):
      var = self.vars[n]
      if (var.get()):
        selected.append(self.entries[n])

    return selected

  def toggleEntry(self, entry):

    if (self.isEntrySelected(entry)):
      self.setEntrySelection(entry, False)
    else:
      self.setEntrySelection(entry, True)

  def toggleIndex(self, n):

    if (self.isIndexSelected(n)):
      self.setIndexSelection(n, False)
    else:
      self.setIndexSelection(n, True)

  def setEntrySelection(self, entry, isSelected=True):

    n = self.entries.index(entry)
    self.setIndexSelection(n, isSelected)

  def setIndexSelection(self, n, isSelected=True):

    if (isSelected):
      self.vars[n].set(1)
    else:
      self.vars[n].set(0)

if __name__ == '__main__':

  from memops.gui.Button import Button

  def get_me():
    print 'get_me:', c.getSelected()

  n = 0
  def toggle_me():
    global n
    print 'toggle_me:', n
    c.toggleIndex(n)
    n = (n + 1) % 3

  def my_callback(selected):
    print 'my_callback:', selected

  root = Tkinter.Tk()

  c = CheckButtons(root, ['one', 'two', 'three'], select_callback=my_callback)
  c.grid()
  b = Button(root, text='get me', command=get_me)
  b.grid()
  b = Button(root, text='toggle me', command=toggle_me)
  b.grid()

  root.mainloop()
