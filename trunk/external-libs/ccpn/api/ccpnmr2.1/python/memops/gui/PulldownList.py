
"""
======================COPYRIGHT/LICENSE START==========================

PulldownList.py: A widget to select objects from a drop-down list that
appears when you click on the arrow aymbol. A replacement for PulldownMenu 

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

from memops.gui.Canvas import Canvas
from memops.gui.Frame import Frame
from memops.gui.Label import Label
from memops.gui.Menu import Menu
from memops.gui.Color import scaleColor

NullText = '<None>'

class PulldownList(Frame):

  # if using indentation then should use list as stack only
  # in other words only delete or insert at end
  
  # There is a 1:1 correspondance between the ordered lists of texts and 
  # list of objects

  # categories is the category name for each text/object
  # objects with the same category will go under a submenu
  # of that name

  def __init__(self, parent, callback=None, texts=None, objects=None,
               categories=None, colors=None, index=0, prefix='', indent='',
               initCallback=False, forceCallback=False, numbering=False,   
               arrowLine='#602000', arrowFill='#B05848', labelColor='#501000',
               menuBg='#F0F0FF', sticky='w', *args, **kw):

    Frame.__init__(self, parent, sticky=sticky, *args, **kw)

    self.callback      = callback
    self.texts         = texts or []
    self.objects       = objects or []
    self.categories    = categories or []
    self.colors        = colors or []
    self.prefix        = prefix
    self.indent        = indent
    self.initCallback  = initCallback
    self.numbering     = numbering
    self.arrowLine     = arrowLine
    self.arrowFill     = arrowFill
    self.labelColor    = labelColor
    
    # Current selection
    self.index         = None
    self.object        = NullText
    
    self.rows   = []
    self.bg     = self.cget('bg')
    self.label  = Label(self, foreground=labelColor)
    self.canvas = Canvas(self, width=12, height=12, background=self.bg)
    self.menu   = Menu(self.canvas, tearoff=False, bg=menuBg, relief='solid',
                       borderwidth=1, activeborderwidth=1)
    
    self.menu.images = [] # Photoimage has to remain referenced

    self.setup(self.texts, self.objects, index,
               self.colors, self.categories)

    self.label.bind( "<Button-1>",  self._labelClick)
    self.menu.bind(  "<Leave>",     self._leave)
    self.canvas.bind("<Button-1>",  self._canvasClick)
    self.canvas.bind("<Configure>", self._resizeCallback)

    self.grid_columnconfigure(0, weight=1)
    self.label.grid(row=0, column=0, sticky='w')
    self.canvas.grid(row=0, column=1, sticky='w', padx=2)


  # 
  # Retrieval
  #

  def get(self):
  
    return (self.getText(),self.getObject())

  def getSelected(self):

    return self.get()

  def getObject(self):
  
    return self._fetch(self.index, self.objects)  

  def getText(self):
   
    return self._fetch(self.index, self.texts)

  def getSelectedIndex(self):

    return self.index


  #
  # Setting selected 
  #

  def set(self, item):
    # Works with an object or a text

    index = None
    
    if item in self.texts:
      index = list(self.texts).index(item)

    elif item in self.objects:
      index = list(self.objects).index(item)

    if index is not None:
      self.setIndex(index)

  def setSelected(self, item):
    
    self.set(item)

  def setIndex(self, index, doCallback=False):

    self.index = index

    if self.objects:
      obj = self.objects[index]
      
      if obj is not self.object:
        self.object = obj
        
        if (doCallback or self.initCallback) and self.texts and self.callback:
          self.callback(obj)

    self._updateLabel()

  #
  # Bulk configuration
  #

  def clear(self):
  
    self.setup([], [], 0)

  def setup(self, texts, objects, index, colors=None, categories=None):
          
    self.texts = texts
    nTexts = len(texts)

    if not objects:
      objects = texts

    while len(objects) < nTexts:
      objects.append(None)

    self.objects = objects

    if colors is None:
      self.colors = [None] * nTexts
    else:
      while len(colors) < nTexts:
        colors.append(None)  
      self.colors = colors
      
    if categories is None:
      self.categories = [None] * nTexts  

    else:
      while len(categories) < nTexts:
        categories.append(None)
      self.categories = categories  

    self._setMenuItems()
    
    self.setIndex(index or 0)
        
  #
  # In-place/minor configuration
  #        
        
  def insert(self, index, text, object=None, color=None,
             category=None, select=False):
   
    index = max(0, min(len(self.texts),index))
   
    self.texts.insert(index, text)
    self.objects.insert(index, object)
    self.colors.insert(index, color)
    self.categories.insert(index, category)
   
    self._setMenuItems()
      
    if select:  
      self.setIndex(index)

  def append(self, text, object=None, color=None, category=None, select=False):

    self.insert(len(self.texts), text, object=None,
                color=None, category=None, select=False)
   
  def delete(self, index, howMany=1):

    if index < 0:
      return
    elif index >= len(self.texts):
      return  

    end = min(index+howMany,len(self.texts))

    self._clearMenu()

    del self.texts[index:end]
    del self.objects[index:end]
    del self.colors[index:end]
    del self.categories[index:end]

    self._setMenuItems()

    index = min(len(self.texts)-1,self.index)

    self.setIndex(index)
    

  #
  # Internal methods
  #

  def _leave(self, event):

    x = event.x
    y = event.y
    x1 = self.menu.winfo_width()
    y1 = self.menu.winfo_height()
      
    if (x<0) or (y<0) or (x>=x1) or (y>=y1):
      self._popdown()


  def _resizeCallback(self, *event):

    c = self.canvas
    w = c.winfo_width() -1
    h = c.winfo_height() -1
    c.delete('all')
    c.create_rectangle(0,0,10,2,
                       fill=self.arrowFill,
                       outline=self.arrowLine)
    c.create_polygon(0, 4, 0, 6, 5, 11, 10, 6, 10, 4, 
                     fill=self.arrowFill,
                     outline=self.arrowLine)


  def _fetch(self, index, array):

    if index is None:
      return None 

    if index < 0:
      index += len(array)
    
    if index < 0:
      return None

    elif index >= len(array):
      return None
    
    else:
      return array[index]  
 

  def _setMenuItems(self):
    self._clearMenu()
    self.menu.images = [] # Clear photoimages
    
        
    if not self.texts and not self.menu.entrycget(1, 'label'):
    
      item =  {'kind': 'command',
               'label': NullText,
               'command': None }
      self.menu.addMenuItem(item)
      self.rows = [0]
      
      return
    
    topList = []
    categoryDict = {}

    for i in range(len(self.texts)):
      text     = self.texts[i]
      color    = self.colors[i]
      category = self.categories[i]        

      if category:
        if categoryDict.get(category) is None:
          categoryDict[category] = []
          topList.append((None, category, None, category))
        
        categoryDict[category].append((i, text, color))
   
      else:
        topList.append((i, text, color, None))
   
    row = 0
    for index, text, color, cat in topList:
      columnbreak = 0
      if row and row % 36 == 0:
        columnbreak = 1
            
      
      if cat:
        string = (self.indent * row) + self.prefix + text
        items = []
        
        rowB = 0
        for index2, text2, color2 in categoryDict.get(cat, []):
          columnbreakB = 0
          if rowB and rowB % 36 == 0:
            columnbreakB = 1
          
          if self.numbering:
            number = '%d%. ' % (index2+1)
          else:
            number = ''
            
          string2 = number + self.prefix + text2
          command = lambda n=index2: self.setIndex(n, True)
          if color2:
            image = self._makeColorTile(color2)
            item2 = {'kind': 'command', 'accelerator': string2,
                     'command': command, 'image': image,
                     'columnbreak': columnbreakB}
          else:
            item2 = {'kind': 'command', 'label': string2,
                     'command': command, 'columnbreak': columnbreakB}
          
          items.append(item2)
          self.rows.append(row)
          rowB += 1
        
        item = {'kind':'cascade', 'label':string, 
                'submenu':items, 'columnbreak':columnbreak}
        
      else:

        if self.numbering:
          number = '%d%. ' % (index+1)
        else:
          number = ''
   
        string = (self.indent * row) + number + self.prefix + text
        command = lambda n=index: self.setIndex(n, True)

        if color:
          image = self._makeColorTile(color)
          item = {'kind': 'command', 'accelerator': string, 'command': command,
                  'image': image, 'columnbreak': columnbreak}
        else:
          item = {'kind': 'command', 'label': string,
                  'command': command, 'columnbreak': columnbreak}
      
      self.menu.addMenuItem(item)
      self.rows.append(row)
       
      row += 1

  def _clearMenu(self):

    self.menu.delete(0, 'end')
    self.index = 0
    self.rows = []

  def _popdown(self, *event):

    self.menu.unpost()

  def _labelClick(self, event):

    s = self.rows[self.index]
    #x = event.x_root - event.x + 2 + self.label.winfo_width()
    x = event.x_root - 2
    y = event.y_root - event.y - max(0, s) * (self.label.winfo_height() + 1)
    self.menu.post(x, y)

  def _canvasClick(self, event):

    s = self.rows[self.index]
    x = event.x_root - event.x + 2
    y = event.y_root - event.y - max(0, s) * (self.label.winfo_height() + 1)
    self.menu.post(x, y)

  def _updateLabel(self):

    if self.texts:
      text = self.texts[self.index] or NullText
    else:
      text = NullText

    self.label.set(text=text)
    

  def _makeColorTile(self, color):
  
    image = Tkinter.PhotoImage()
    self.menu.images.append(image)
    
    if type(color) == type([]):
      colors = [ scaleColor(self.menu, c, 1.0) for c in color ] 
    else:
      colors = [ scaleColor(self.menu, color, 1.0), ]

    cols = max(8, len(colors))
    
    for x in range(cols):
      i = x % len(colors)
      c = colors[i]
      
      for y in range(16):
        image.put('{%s %s}' % (c,c), to=(2*x,y))
    
    return image

if __name__ == '__main__':
 
  from memops.gui.Button import Button

  import sys
  pulldownMenu = None

  def callback(obj):
    global pulldownMenu
    print 'callback: object=', obj
    print pulldownMenu.getText()
    print pulldownMenu.getObject()
    print pulldownMenu.getSelected()

  gradient = ['#000040','#000080','#0000A0','#0000FF',
              '#0040FF','#0080FF','#00A0FF','#00C0FF',
              '#00E0FF','#00FFFF','#40FFFF','#80FFFF',
              '#A0FFFF','#D0FFFF','#FFFFFF']
              
  colors = [None, None, 'red', ['red','green'], gradient, None, None, None, 'Blue']
  
  texts = ['Text A','Text B','One color','Bicolor','Gradient','Other', 'Sub 1', 'Sub 2', 'Sub 3']
  
  objects = [1, 2, {'color':'red'}, 'Some text', 5.376574, None, 'A', 'B', 'C']  

  cats = [None] * len(texts)
  sec = 'SubSection'
  cats[-1] = sec
  cats[-2] = sec
  cats[-3] = sec

  root = Tkinter.Tk()
  pulldownMenu = PulldownList(root, callback=callback, 
                              texts=texts, objects=objects,
                              colors=colors, categories=cats)
  pulldownMenu.grid(row=0, column=0)

  button = Button(root, text='quit', command=sys.exit)
  button.grid(row=1, column=0)

  root.mainloop()
