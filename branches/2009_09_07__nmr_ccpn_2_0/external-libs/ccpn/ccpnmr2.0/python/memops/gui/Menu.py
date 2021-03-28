
"""
======================COPYRIGHT/LICENSE START==========================

Menu.py: <write function here>

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

from memops.gui.Base import Base

class SimpleMenuItem:

  def __init__(self, parent, kind, **kw):

    self.parent = parent
    self.kind = kind
    self.label = kw.get('label')
    Tkinter.Menu.add(parent, kind, **kw)

class Menu(Tkinter.Menu, Base):

  def __init__(self, parent, menu_items = None, include_event = False, *args, **kw):

    if (menu_items is None):
      menu_items = []
    
    self.menu_items = []
    self.submenus = []
    self.submenuDict = {}

    self.font = kw.get('font')

    if not kw.get('bg'):
      kw['bg'] = 'grey85'

    if not kw.get('borderwidth'):
      kw['borderwidth'] = 1
      
    if not kw.get('activebackground'):
      kw['activebackground'] = '#D0B0A0'

    if not kw.get('activeforekground'):
      kw['activeforeground'] = '#400000'
      
    if not kw.get('activeborderwidth'):
      kw['activeborderwidth'] = 1
      
    self.label = kw.get('label')
    self.kind = 'menu'

    Tkinter.Menu.__init__(self, parent, *args, **kw)

    self.kw = kw
    self.parent = parent

    self.include_event = include_event
    self.menu_event = None

    self.setMenuItems(menu_items)

    #self.shortcuts = []

  # setMenuItems() argument menu_items is list of dicts
  # each dict has to have key 'kind' with value one of menu item types:
  #   'command', 'cascade', 'separator', 'checkbutton' or 'radiobutton'
  # if kind == cascade:
  #   dict has to have key 'label' with value the label for the menu
  #   dict has to have key 'submenu' with value a list of submenu_items
  #   dict optionally has key 'tearoff' (default value is 0)
  #   dict optionally has key 'shortcut' (default value is '')
  # else:
  #   the rest of the dict should be the normal options for that menu type
  #   (e.g. 'label', 'command', ...)
  #   and also optionally key 'shortcut' (default value is '')

  def setMenuItems(self, menu_items = None):

    if (menu_items is None):
      menu_items = []

    self.deleteMenuItems()

    for item in menu_items:
      self.addMenuItem(item)

  def deleteMenuItems(self):

    self.delete(0, Tkinter.END)

  def delete(self, index1, *args):

    def deleteIndex(ind):
      if ind >= 0 and ind < len(self.menu_items):
        item = self.menu_items[ind]
        if item in self.submenus:
          self.submenus.remove(item)
          del self.submenuDict[item.label]
          item.delete(0, Tkinter.END)
        del self.menu_items[ind]

    n = len(args)
    if n == 0:
      deleteIndex(index1)
    elif n == 1:
      index2 = args[0]
      if index2 == Tkinter.END:
        index2 = len(self.menu_items) - 1
      for ind in range(index2, index1-1, -1):
        deleteIndex(ind)

    Tkinter.Menu.delete(self, index1, *args)

  def addMenuItem(self, item):

    kind = item['kind']
    rest = item.copy()
    del rest['kind']

    if (kind == 'cascade'):
      tearoff = rest.get('tearoff', 0)
      shortcut = rest.get('shortcut', '')
      
      kw = self.kw.copy()
      kw['tearoff'] = tearoff
      
      label = rest['label']
      items = rest['submenu']
      menu = Menu(self, include_event=self.include_event, **kw)
      self.add(kind, label=label, menu=menu, shortcut=shortcut)
      menu.setMenuItems(items)

    else:

      self.add(kind, **rest)

  def setMenuEvent(self, event):

    self.menu_event = event
    for submenu in self.submenus:
      submenu.setMenuEvent(event)

  def popupMenu(self, event):

    self.setMenuEvent(event)
    self.post(event.x_root, event.y_root)

  def popdownMenu(self, *event):

    self.unpost()

  def add_command(self, shortcut = '', **options):

    self.add('command', shortcut, **options)

  def add_cascade(self, shortcut = '', **options):

    self.add('cascade', shortcut, **options)

  def add_radiobutton(self, shortcut = '', **options):

    self.add('radiobutton', shortcut, **options)

  def add(self, kind, shortcut = '', **options):

    label = options.get('label')

    if (shortcut):

      assert len(shortcut) == 1, 'len(shortcut) = %d' % len(shortcut)

      n = label.find(shortcut)
      assert n >= 0, 'illegal shortcut: label = %s, shortcut = %s' % (label, shortcut)

      s = shortcut.lower()
      #assert s not in self.shortcuts, 'duplicate shortcut: label = %s, shortcut = %s' % (label, shortcut)

      #self.shortcuts.append(s)
      options['underline'] = n
 
    if (self.include_event and options.has_key('command')):

      options_copy = options.copy()
      func = options['command']
      options_copy['command'] = lambda: func(self.menu_event)
      options = options_copy

    if kind == 'cascade':
      menu = options.get('menu')
      menu.label = label
      menu.kind = 'menu'
      menu.parent = self
      self.menu_items.append(menu)
      self.submenus.append(menu)
      self.submenuDict[label] = menu
      Tkinter.Menu.add(self, kind, **options)
    else:
      menu_item = SimpleMenuItem(self, kind, **options)
      self.menu_items.append(menu_item)

if __name__ == '__main__':

  def new():
    print 'new'

  def pick():
    print 'pick'

  root = Tkinter.Tk()
 
  menubar = Menu(root)
 
  menu = Menu(menubar, tearoff=0)
  menu.add_command(label='New', shortcut='N', command=new)
  menu.add_command(label='Pick', shortcut='P', command=pick)
  menubar.add_cascade(label='Project', shortcut='P', menu=menu)
 
  menu = Menu(menubar, tearoff=0)
  menu.add_command(label='New', shortcut='N', command=new)
  menubar.add_cascade(label='View', shortcut='V', menu=menu)
 
  root.config(menu=menubar)
 
  root.mainloop()
