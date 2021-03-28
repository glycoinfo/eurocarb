
"""
======================COPYRIGHT/LICENSE START==========================

ScrolledGraph.py: <write function here>

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
import Tkinter, math, sys

from memops.gui.ButtonList import ButtonList
from memops.gui.Canvas import Canvas
from memops.gui.Frame import Frame
from memops.gui.ScrolledCanvas import ScrolledCanvas
from memops.gui.Color import hexRepr
from memops.gui.Util import getPopup
from memops.gui.DataEntry import askString

sqrt3over2  = math.sqrt(3.0)/2.0
log10       = math.log(10)
isWindowsOS = sys.platform[:3].lower() == 'win'

class ScrolledGraph(Frame):

  items      = []
  crosshair  = []
  dataRegion = (0.0,0.0,1.0,1.0)
  font       = '-schumacher-clean-bold-r-normal--17-120-100-100-c-0-iso646.1991-irv',

  # category axes
  # log scale
  # fix variable bin width
  # redo ticks esp for category axis

  def __init__(self, parent, dataSets=None, title=None, width=650, height=400, zoom=1.0,
               xLabels=None, symbolSize=5, xLabel=None, yLabel=None, dataNames=None,
               showCoords=True, xTicks=True, yTicks=True, yRange=None,
               xLog=False, yLog=False, reverseX=False, relief='sunken',
               bgColor='white', mgColor='grey90', fgColor='black', symbols=None, canvasOrigin=(0,0),
               dataColors=None, lineWidths=None, graphType='line',*args, **kw):

    Frame.__init__(self, parent, *args, **kw)

    if dataSets:
      nSets = len(dataSets)
    else:
      nSets = 0 
 
    defaultColors = ['#800000','#000080',
                     '#008000','#808000',
                     '#800080','#008080',
                     '#808080','#000000',
                     '#804000','#004080']
 
    self.canvasOrigin = canvasOrigin
 
    self.showCoords = showCoords
    self.xTicks     = xTicks
    self.yTicks     = yTicks
    self.dataSets   = dataSets
    self.width      = width
    self.height     = height
    self.title      = title  or ''
    self.zoom       = zoom   or 1.0
    self.xLabel     = xLabel or 'x'
    self.yLabel     = yLabel or 'y'
    self.xLabels    = xLabels or []
    self.xLog       = xLog
    self.yLog       = yLog
    self.bgColor    = bgColor
    self.fgColor    = fgColor
    self.mgColor    = mgColor
    self.graphType  = graphType
    self.symbolSize = symbolSize
    self.reverseX   = reverseX
    self.dataColors = dataColors or [defaultColors[i%10] for i in range(nSets)]
    self.dataNames  = dataNames or [None] * nSets
    self.lineWidths = lineWidths or [1 for x in range(nSets)]
    self.symbols    = symbols or ['circle' for x in range(nSets)]
    self.legend     = (1.0,0.75,{})
    self.yRange     = yRange
    
    self.grid_rowconfigure(0, weight=1)
    self.grid_columnconfigure(0, weight=1)
    self.scrolledCanvas = ScrolledCanvas(self, borderwidth=2, relief=relief,
                                         width=width+100,height=height+100)
    self.scrolledCanvas.grid(row=0, column=0, sticky=Tkinter.NSEW)
    self.scrolledCanvas.canvas.config(bg=bgColor)
    
    self.inMotion   = False
    self.canvas     = self.scrolledCanvas.canvas
    self.canvasDict = {}
    self.waiting    = 0

    self.canvas.bind('<Button-1>',  self.mouseClick)
    self.canvas.bind('<B1-Motion>', self.mouseDrag)
    self.canvas.bind('<Motion>',   self.mouseEnter)
    self.canvas.bind('<Enter>',    self.mouseEnter)
    self.canvas.bind('<Leave>',    self.mouseLeave)

    if not isWindowsOS:
      self.canvas.bind('<Button-4>', lambda event: self.setZoom(self.zoom*1.2) )
      self.canvas.bind('<Button-5>', lambda event: self.setZoom(self.zoom/1.2) )
    else:
      self.canvas.bind('<MouseWheel>', self.windowsOsZoom)    

    self.configMenu()
    self.draw()

  def configMenu(self):

    zoom_items = [ \
      { 'kind': 'command', 'label': 'In',    
      'command': lambda event: self.setZoom(self.zoom*1.2) },
      { 'kind': 'command', 'label': 'Out',   
      'command': lambda event: self.setZoom(self.zoom/1.2) },
      { 'kind': 'command', 'label': 'Reset', 
      'command': lambda event: self.setZoom(1.0) },
    ]

    type_items = [ \
      { 'kind': 'command', 'label': 'Line',      
      'command':lambda event: self.setGraphType('line') },
      { 'kind': 'command', 'label': 'Scatter',   
      'command':lambda event: self.setGraphType('scatter') },
      { 'kind': 'command', 'label': 'Bar chart', 
      'command':lambda event: self.setGraphType('bar') },
      { 'kind': 'command', 'label': 'Histogram', 
      'command':lambda event: self.setGraphType('histogram') },
    ]

    symboltype_items = [ \
      { 'kind': 'command', 'label': 'Circle',   
      'command':lambda event: self.setSymbols('circle') },
      { 'kind': 'command', 'label': 'Square',   
      'command':lambda event: self.setSymbols('square') },
      { 'kind': 'command', 'label': 'Triangle', 
      'command':lambda event: self.setSymbols('triangle') },
    ]

    symbolsize_items = [ \
      { 'kind': 'command', 'label': '+',     
      'command':lambda event: self.setSymbolSize( self.symbolSize+1 ) },
      { 'kind': 'command', 'label': '-',     
      'command':lambda event: self.setSymbolSize( max(self.symbolSize-1,1) ) },
      { 'kind': 'command', 'label': 'Small', 
      'command':lambda event: self.setSymbolSize(3) },
      { 'kind': 'command', 'label': 'Normal',
      'command':lambda event: self.setSymbolSize(5) },
      { 'kind': 'command', 'label': 'Big',   
      'command':lambda event: self.setSymbolSize(7) },
    ]

    _items = [ \
      { 'kind': 'command', 'label': '', 'command':'' },
      { 'kind': 'command', 'label': '', 'command':'' },
      { 'kind': 'command', 'label': '', 'command':'' },
    ]

    items = [
             { 'kind': 'cascade', 'label': 'Zoom', 
             'submenu': zoom_items },
             { 'kind': 'cascade', 'label': 'Graph type', 
             'submenu': type_items },
             { 'kind': 'cascade', 'label': 'Symbol type', 
             'submenu': symboltype_items },
             { 'kind': 'cascade', 'label': 'Symbol size', 
             'submenu': symbolsize_items },
             { 'kind': 'command', 'label': 'Set Title',  
             'command' : self.setGraphTitle },
             { 'kind': 'command', 'label': 'Print to file', 
             'command' : self.scrolledCanvas.printCanvas },
            ]
      
    self.scrolledCanvas.menu.setMenuItems(items)

  def setGraphTitle(self, event):
  
    self.title = askString('Text Entry','Enter graph title',self.title,self)
    self.drawAfter()

  def mouseClick(self, event):
  
    self.inMotion = False

  def mouseDrag(self, event):
    
    self.scrolledCanvas.removeMenu()
    
    canvas = self.canvas
    x = canvas.canvasx(event.x)
    y = canvas.canvasy(event.y)

    obj = self.canvas.find('closest',x,y)[0]
    inMotion = self.inMotion
    
    xF, yF, itemDict = self.legend
    if inMotion or itemDict.has_key(obj):
      plotRegion = self.getPlotRegion()
 
      x1 = plotRegion[0]
      y1 = plotRegion[1]
      rX = plotRegion[2] - x1
      rY = plotRegion[3] - y1
      
      if inMotion:
        dx, dy = inMotion
      else:
        x0 = x1 + (xF * rX)
        y0 = y1 + (yF * rY)
        dx = x-x0
        dy = y-y0
        
      self.legend = ((x-dx-x1)/rX,(y-dy-y1)/rY,itemDict)
      
      for item in itemDict:
        canvas.delete(item)

      self.drawLegend(plotRegion)
      self.inMotion = (dx, dy)

  def mouseEnter(self, event):

    canvas  = self.canvas
    cCoords = canvas.coords
    cLine   = canvas.create_line
    cText   = canvas.create_text
    
    crosshair = self.crosshair
    canvas.focus_force()
    self.scrolledCanvas.removeMenu()
    
    x = canvas.canvasx(event.x)
    y = canvas.canvasy(event.y)
    
    plotRegion = self.getPlotRegion()
    (x0,y0,x1,y1) = plotRegion
    
    if (x < x0) or (x > x1) or (y < y1) or (y > y0):
      self.mouseLeave()
    else:
      if self.showCoords:
        coordStr = '[ %3.3f, %3.3f ]' % self.getPlotCoords(event, self.dataRegion, plotRegion)
      else:
        coordStr = ''

      if crosshair:
        (itemV,itemH,itemT) = crosshair
        cCoords(itemV,x,y0,x,y1)
        cCoords(itemH,x0,y,x1,y)
        cCoords(itemT,x0+(0.9*(x1-x0)),y0+y1)
        canvas.itemconfig(itemT,text=coordStr)
      else:
        mgColor = self.mgColor
        itemV = cLine(x,y0,x,y1,fill=mgColor,width=1)
        itemH = cLine(x0,y,x1,y,fill=mgColor,width=1)
        itemT = cText(x0+(0.9*(x1-x0)),y0+y1, text=coordStr, fill=self.fgColor)
        self.crosshair = (itemV,itemH,itemT)
    
  def mouseLeave(self, *event):

    if self.crosshair:
      for item in self.crosshair:
        self.canvas.delete(item)
        
      self.crosshair = []
       
  def drawAfter(self):
    
    if not self.waiting:
      self.waiting = 1
      self.after_idle(self.draw)
    
  def getMinMaxValues(self, dataSets):
  
    if (not dataSets):
      return [0.0,1.0,0.0,1.0,1,1.0,1.0]
    
    maxN = len(dataSets[0])
    bigSet = 0
    for i in range(len(dataSets)):
      if (len(dataSets[i]) > maxN):
        maxN = len(dataSets[i])
	bigSet = i
	
    if (maxN < 1):
      return [0.0,1.0,0.0,1.0,1,1.0,1.0]
	
    maxX = dataSets[bigSet][0][0] or 0.0
    minX = dataSets[bigSet][0][0] or 0.0
    maxY = dataSets[bigSet][0][1] or 0.0
    minY = dataSets[bigSet][0][1] or 0.0
    
    minDy = None
    minDx = None
 
    for i in range(len(dataSets)):
      N = len(dataSets[i])
      for j in range(N):
        x,y,e = dataSets[i][j]

        e = e or 0.0

 	if x is not None:
 	  if x < minX:
 	    minX = x
 	  if x > maxX:
 	    maxX = x
          
          if j+1 < N:
            x2 = dataSets[i][j+1][0]
            
            if x2 is not None:
              dX = dataSets[i][j+1][0] - x
 
              if (minDx is None) or (dX<minDx):
                minDx = dX

 	if y is not None:
 	  if y-e < minY:
 	    minY = y-e
 	  if y+e > maxY:
 	    maxY = y+e

          if j+1 < N:
            y2 = dataSets[i][j+1][1]
          
            if y2 is not None:
              dY = y2 - y
 
              if (minDy is None) or (dY<minDy):
                minDy = dY
 
    if self.yRange:
      yRange = list(self.yRange)
      yRange.sort()
      yMin, yMax = yRange
 
    if maxX == minX:
      maxX += 1.0

    if maxY == minY:
      maxY += 1.0
 
    if not minDx:
      minDx = 1.0

    if not minDy:
      minDy = 1.0
 
    return [minX,maxX,minY,maxY,maxN,minDx,minDy]
  
  def checkDataSets(self,dataSets):
      
    if not dataSets:
      return
   
    N = len(dataSets)
    
    validTypes = (type(float()), type(int()))

    for i in range(N):
    
      c = 0.0 
      for j in range( len(dataSets[i]) ):
      
        datum = dataSets[i][j]
        (x,y) = datum[:2]
        
        if len(datum) == 2:
          e = None
        else:
          e = datum[2]

        if (not y) and (y != 0):
          y = None 
	
        if (not x) and (x != 0):
          x = None 

        else:
          t = type(x)
          
	  if t not in validTypes:
	    x = c
	    c += 1.0

        dataSets[i][j] = (x,y,e)

      dataSets[i].sort()
      
    return dataSets

  def getDrawCoords(self, dataSet, dataRegion, plotRegion):
  
    deltaXplot = plotRegion[2] - plotRegion[0]
    deltaYplot = plotRegion[3] - plotRegion[1] 
    deltaXdata = dataRegion[2] - dataRegion[0]
    deltaYdata = dataRegion[3] - dataRegion[1]
  
    ppvX = deltaXplot/float(deltaXdata)
    ppvY = deltaYplot/float(deltaYdata)

    coords = []
    for x,y,e in dataSet:

      if (y is not None) and (x is not None):
        x0 = (x - dataRegion[0])*ppvX
        y0 = (y - dataRegion[1])*ppvY
        x0 += plotRegion[0]
        y0 += plotRegion[1]
        
        if e is None:
          e1 = e2 = None
        else:
          e0 = e*ppvY
          e1 = y0 + e0
          e2 = y0 - e0
        
        coords.append((x0,y0,e1,e2))

    return coords
  
  def getPlotCoords(self, event, dataRegion, plotRegion):
  
    x = self.canvas.canvasx(event.x) - plotRegion[0]
    y = self.canvas.canvasy(event.y) - plotRegion[1]
  
    deltaXplot = plotRegion[2] - plotRegion[0]
    deltaYplot = plotRegion[3] - plotRegion[1] 
    deltaXdata = dataRegion[2] - dataRegion[0]
    deltaYdata = dataRegion[3] - dataRegion[1]
  
    vppX = deltaXdata/float(deltaXplot)
    vppY = deltaYdata/float(deltaYplot)
  
    plotX = dataRegion[0]+x*vppX
    plotY = dataRegion[1]+y*vppY
    
    return (plotX,plotY)
  
  def getBoxSize(self, plotRegion, numBoxes, numSets=1):
  
    deltaXplot = plotRegion[2] - plotRegion[0]
    size = deltaXplot/float(numBoxes*numSets)    
    return size
  
  def drawBoxes(self, plotRegion, coords, size, outline='black',
                fill='grey', setSel=0, numSets=1, graphType='bar'):
  
    create_rectangle = self.canvas.create_rectangle
    create_line = self.canvas.create_line
    d = size/2.0
    
    m = 0.0
    if self.xLabels:
      if graphType == 'bar':
        m = size*(numSets/2.0)
      else:
        m = d
    
    d1 = (setSel - ((numSets-1)/2.0)) * size
    
    maxX,minY,minX,maxY = self.dataRegion
    
    if (minY < 0) and (maxY > 0):
      f = maxY/(maxY-minY)
      y1 = plotRegion[3] + ( f * (plotRegion[1] - plotRegion[3]) )
    
    elif (minY < 0) and (maxY < 0):
      y1 = plotRegion[3]
    
    else:
      y1 = plotRegion[1]
      
    items = []
    for (x,y0,yU,yL) in coords:
      if graphType == 'bar':
        x0 = x+d1-d+m
        x1 = x+d1+d+m
      else:
        x0 = x-d+m
        x1 = x+d+m

      item = create_rectangle(x0,y0,x1,y1,outline=outline,fill=fill)
      items.append(item)
    
      if yU is not None:
        xm = (x1+x0)/2.0
        item = create_line(xm,y0,xm,yU,fill=outline)
        items.append(item)
        item = create_line(x0,yU,x1,yU,fill=outline)
        items.append(item)
         
      if yL is not None:
        xm = (x1+x0)/2.0
        item = create_line(xm,y0,xm,yL,fill=outline)
        items.append(item)
        item = create_line(x0,yL,x1,yL,fill=outline)
        items.append(item)
    
    return items
  
  def drawLines(self, coords, outline, lineWidth):
  
    create_line = self.canvas.create_line
    N = len(coords)
    items = []
    for i in range(N-1):
      (x0,y0,y0a,y0b) = coords[i]
      (x1,y1,y1a,y1b) = coords[i+1]
      item = create_line(x0,y0,x1,y1,fill=outline,width=lineWidth)
      items.append(item)           
  
    return items

  def drawSymbols(self, coords, size, lineWidth,
                  shape='circle', outline='black', fill='grey'):
  
    d  = size/2.0
    d1 = sqrt3over2*d
    d2 = size/4.0
    items = []
    create_line = self.canvas.create_line
    if shape == 'triangle':
      create_polygon = self.canvas.create_polygon
      
      for (x,y,yU,yL) in coords:
        x0 = x
	x1 = x+d1
	x2 = x-d1
	y0 = y-d
	y1 = y+d2
    
        if yU is not None:
          item = create_line(x,y,x,yU,fill=outline)
          items.append(item)
          item = create_line(x1,yU,x2,yU,fill=outline)
          items.append(item)
 
        if yL is not None:
          item = create_line(x,y,x,yL,fill=outline)
          items.append(item)
          item = create_line(x1,yL,x2,yL,fill=outline)
          items.append(item)

        item = create_polygon(x0,y0,x1,y1,x2,y1,x0,y0,outline=outline,fill=fill,width=lineWidth)
        items.append(item)
        
    else:
      
      if shape == 'square':
        create_rectangle = self.canvas.create_rectangle
        
        for (x,y,yU,yL) in coords:
	  x0 = x-d
	  x1 = x+d
	  y0 = y-d
	  y1 = y+d
    
          if yU is not None:
            item = create_line(x,y,x,yU,fill=outline)
            items.append(item)
            item = create_line(x0,yU,x1,yU,fill=outline)
            items.append(item)
 
          if yL is not None:
            item = create_line(x,y,x,yL,fill=outline)
            items.append(item)
            item = create_line(x0,yL,x1,yL,fill=outline)
            items.append(item)
          
          item = create_rectangle(x0,y0,x1,y1,outline=outline,fill=fill,width=lineWidth)
          items.append(item)
          
      else:
        create_oval = self.canvas.create_oval

        for (x,y,yU,yL) in coords:
	  x0 = x-d
	  x1 = x+d
	  y0 = y-d
	  y1 = y+d
          
          if yU is not None:
            item = create_line(x,y,x,yU,fill=outline)
            items.append(item)
            item = create_line(x0,yU,x1,yU,fill=outline)
            items.append(item)
 
          if yL is not None:
            item = create_line(x,y,x,yL,fill=outline)
            items.append(item)
            item = create_line(x0,yL,x1,yL,fill=outline)
            items.append(item)
          
          item = create_oval(x0,y0,x1,y1,outline=outline,fill=fill,width=lineWidth)
          items.append(item)
      
    return items

  def getPlotRegion(self):
  
    zoom   = self.zoom
    x0, y0 = self.canvasOrigin
    
    plotRegion = (x0+75,y0+50+(self.height*zoom),x0+75+(self.width*zoom),y0+50)
  
    return plotRegion

  def draw(self):

    zoom       = self.zoom
    canvas     = self.canvas
    canvasDict = self.canvasDict
    dataSets   = self.dataSets

    for item in self.items:
       canvas.delete(item)
       
    self.items = []
    
    dataSets = self.checkDataSets(dataSets)
    if not dataSets:
      return

    [minX,maxX,minY,maxY,maxN,minDx,minDy] = self.getMinMaxValues(dataSets)
    
    if self.reverseX:
      dataRegion = (maxX,minY,minX,maxY)
    else:
      dataRegion = (minX,minY,maxX,maxY)

    plotRegion = self.getPlotRegion()
    symbolSize = self.symbolSize # max(1,int(zoom*self.symbolSize))  
    self.dataRegion = dataRegion
    
    diffX      = float(maxX-minX) or 1.0
    diffY      = float(maxY-minY) or 1.0
    
    width      = self.width*zoom
    height     = self.height*zoom
    xpad       = 75
    ypad       = 50 
    
    binLabels = [''] * (maxN+1) 
    N = float(len(dataSets))
    M = len(dataSets[0])
    step = diffX/maxN
    for n in range(maxN):
      x = minX + (n*step)
      binLabels[n] = '%4.2f' % x
       
    bins = diffX/min(1.0,minDx)

    if self.graphType == 'bar':
      size = self.getBoxSize(plotRegion, bins, N)
    else:
      size = self.getBoxSize(plotRegion, bins, 1)

    self.items.extend( self.drawAxes(plotRegion, dataRegion, 1) )
    
    i = 0
    for dataSet in dataSets:
      color     = self.dataColors[i]
      lineWidth = 1 # max(1,int(self.lineWidths[i]*zoom))
      coords    = self.getDrawCoords(dataSet, dataRegion, plotRegion)
      symbol    = self.symbols[i]
      if self.graphType == 'line':
        items = self.drawLines(coords, color, lineWidth)
        self.items.extend(items)
	items = self.drawSymbols(coords, symbolSize,
                                 lineWidth, shape=symbol,
                                 outline=color, fill='grey')
        self.items.extend(items)
      elif self.graphType == 'scatter':
        items = self.drawSymbols(coords, symbolSize,
                                 lineWidth, shape=symbol,
                                 outline=color, fill='grey')
        self.items.extend(items)
      else:
        items = self.drawBoxes(plotRegion, coords, size,
                               outline=self.fgColor, fill=color,
                               setSel=i, numSets=N,
                               graphType=self.graphType)
        self.items.extend(items)
      i += 1
          
    self.scrolledCanvas.refresh()

    self.waiting = 0
  
  def windowsOsZoom(self, event):
  
    delta = event.delta
    if delta > 0:
      self.setZoom(self.zoom*1.2)
    elif delta < 0:
      self.setZoom(self.zoom/1.2)
  
  def setZoom(self, factor=1.0):
  
    if factor:
      self.zoom = min(20,max(0.25,factor))

      
    self.drawAfter()

  def setTitle(self, title):
  
    if title:
      self.title = str(title)
    else:
      self.title = ''
    self.drawAfter()

  def setXLabel(self, label):
  
    if label:
      self.xLabel = label
    else:
      self.xLabel = ''
    self.drawafter()

  def setYLabel(self, label):
  
    if label:
      self.yLabel = label
    else:
      self.yLabel = ''
    self.drawafter()

  def setYLog(self, boolean=True):
  
    self.yLog = boolean
    self.drawAfter()

  def setXLog(self, boolean=True):
  
    self.xLog = boolean
    self.drawAfter()

  def setDataColors(self, dataColors):
  
    self.dataColors = []
    for i in range(len(self.dataSets)):
      if i < len(dataColors):
        self.dataColors.append(dataColors[i])
      else:
        self.dataColors.append('black')
    self.drawAfter()

  def setLineWidths(self, widthsList):
  
    N = len(self.dataSets)
    if not widthsList:
      self.lineWidths = [1 for x in range(N)]
    
    else:
      self.lineWidths = []
      for i in range(N):
        if i < len(widthsList):
          self.lineWidths.append(widthsList[i])
        else:
          self.lineWidths.append(1)

    self.drawAfter()

  def setSymbols(self, symbolName):
  
    self.symbols = [symbolName for x in range(len(self.dataSets))]
    self.drawAfter()

  def setSymbolSize(self, size):
  
    self.symbolSize = size
    self.drawAfter()

  def setDataNames(self, names):
  
    self.dataNames = names
    self.drawAfter()

  def setGraphType(self, graphType):
  
    if graphType in ('line','bar','histogram','scatter'):
      self.graphType = graphType

    self.drawAfter()

  def update(self, dataSets=None, dataColors=None, lineWidths=None,
             title=None, xLabel=None, yLabel=None, dataNames=None,
             symbols=None):
  
    if dataSets:
      self.dataSets = dataSets
      self.setLineWidths(lineWidths)
    
    if dataNames:
      self.dataNames = dataNames
    
    if symbols:
      self.symbols = symbols
    
    if title:
      self.title = title
      
    if xLabel:
      self.xLabel = xLabel
      
    if yLabel:
      self.yLabel = yLabel
      
    if dataColors:
      self.setDataColors(dataColors) 

    if len(self.dataSets) > len(self.dataColors):
      for i in range(len(self.dataColors),len(self.dataSets)):
        self.dataColors.append('red')
    else:
      self.dataColors = self.dataColors[:len(self.dataSets)]

    if len(self.dataSets) > len(self.symbols):
      for i in range(len(self.symbols),len(self.dataSets)):
        self.symbols.append('circle')
    else:
      self.symbols = self.symbols[:len(self.dataSets)]

    self.drawAfter()
      
  def drawAxes(self, plotRegion, dataRegion, lineWidth):
  
    items = []
    (x0,y0,x1,y1) = plotRegion

    outline    = self.canvas.create_rectangle(0,0,1,1,outline=self.bgColor,width=1)
    background = self.canvas.create_rectangle(x0,y0,x1,y1,outline='#FFFFFF',fill='#FFFFFF',width=lineWidth)
    
    self.canvas.lower(outline)
    items.append( outline )
    items.extend( self.drawTicks(plotRegion, dataRegion) )
    items.append( self.canvas.create_line(x0,y0,x1,y0,fill=self.fgColor,width=lineWidth) )
    items.append( self.canvas.create_line(x0,y0,x0,y1,fill=self.fgColor,width=lineWidth) )
    items.extend( self.drawTitle(plotRegion) )
    items.extend( self.drawLegend(plotRegion) )
    
    return items
  
  def drawTicks(self, plotRegion, dataRegion):
  
    if not (self.xTicks or self.yTicks):
      return []
      
    createLine = self.canvas.create_line
    createText = self.canvas.create_text
    
    deltaXplot = plotRegion[2] - plotRegion[0]
    deltaYplot = plotRegion[3] - plotRegion[1] 
    deltaXdata = dataRegion[2] - dataRegion[0]
    deltaYdata = dataRegion[3] - dataRegion[1]

    x0 = plotRegion[0]
    y0 = plotRegion[1]

    x1 = plotRegion[2]
    y1 = plotRegion[3]
    
    size = 7
    if self.xLabels:
      sizes = [len(x) for x in self.xLabels]
      size = max(sizes)
      
    item = createText(0, 0, text='A' * size)
    bbox = self.canvas.bbox(item)
    self.canvas.delete(item)
    
    dy = bbox[3] - bbox[1]
    dx = bbox[2] - bbox[0]
  
    yClose = 2 * dy
    xClose = dx * 1.5
    
    items = []
    
    lineWidth  = 1 # max(1,self.zoom)
    
    # calculate major and minor lines
    # minor lines will be equispaced between major and of a suitable size. 2, 5, 10 target numbers
    # major lines
    # in the data range find the non fractional points - not too close and enough
    # given the plot range we know the delta
    # split the delta into adequately,minimally spaced chunks
    # split the plot range into the same number chunks
    # round up the plot diff to the nearest round point with the accuracy 
    # specified by the data delta
    # 100 in 8 chunks => 12.5/chumk round to 10
    # 0.3 in 5 chunks => 0.06/chunk round to 0.05
    # 21 in 7 = 3/chunk round to 2 or 5 or 3
    # 0.16 in 10 = 0.016 per chunk => round to 0.01 or 0.02 

    xt = x0 - 10
    yt = y0 + 10
    
    xs = x0 - 8
    ys = y0 + 8

    ppvX = deltaXplot/float(deltaXdata)
    ppvY = deltaYplot/float(deltaYdata)
  
    spaceXdata = xClose/ppvX
    spaceYdata = yClose/ppvY
    
    sciX = '%e' % abs(spaceXdata)
    sciY = '%e' % abs(spaceYdata)
    
    deciX = int(sciX[-3:])
    deciY = int(sciY[-3:])

    sigDX = int(sciX[0])
    sigDY = int(sciY[0])

    nX = 10.0
    nY = 10.0
    sX = abs(sigDX-nX)
    sY = abs(sigDY-nY)
    for n in (1.0,2.0,5.0):

      s = abs(sigDX-n)
      if s < sX:
        sX = s
        nX = n

      s = abs(sigDY-n)
      if s < sY:
        sY = s
        nY = n

    incX = (abs(spaceXdata)/spaceXdata) *  nX * 10**(deciX)
    incY = (abs(spaceYdata)/spaceYdata) * -nY * 10**(deciY)

    valX = dataRegion[0] - (dataRegion[0] % incX )
    valY = dataRegion[1] - (dataRegion[1] % incY )

    if self.xTicks:
      for i in range(int(round(deltaXdata/incX))+2):
 
        tickX = round(valX,-deciX)
        x     = plotRegion[0]+(tickX - dataRegion[0])*ppvX
        valX += incX
 
        if x > plotRegion[2]:
          continue
        if x < plotRegion[0]:
          continue

        if self.xLabels and (i < len(self.xLabels)):
          if self.graphType in ('bar','histogram'):
            mid = (tickX + round(valX,-deciX))/2.0
            x2  = plotRegion[0]+(mid - dataRegion[0])*ppvX
          else:
            x2 = x
 
          text  = self.xLabels[i]
          item  = createText(x2, yt, text=text, anchor='n')
        else:
          text = self.formatText(tickX)
          item  = createText(x, yt, text=text, anchor='n')
 
        items.append(item)
        item = createLine(x, y0, x, ys, fill=self.mgColor,width=lineWidth )
        items.append(item)
        item = createLine(x, y0, x, ys, fill=self.fgColor,width=lineWidth )
        items.append(item)
    
    if self.yTicks:
      for i in range(int(round(deltaYdata/incY))+2):
 
        tickY = round(valY,-deciY)
        y     = plotRegion[1]+(tickY - dataRegion[1])*ppvY
        valY += incY
 
        if y < plotRegion[3]:
          continue
        if y > plotRegion[1]:
          continue

        item = createText(xt, y, text=self.formatText(tickY), anchor='e')
        items.append(item)
        item = createLine(x0, y, x1, y, fill=self.mgColor,width=lineWidth )
        items.append(item)
        item = createLine(x0, y, xs, y, fill=self.fgColor,width=lineWidth )
        items.append(item)
              
    return items

  def formatText(self,text):
  
    if type(text) == type(float(1)):
      if text == 0:
        text = '0'
      elif abs(text) > 999999 or abs(text) < 0.01:
        text = '%5.2e' % text
      else:
        text = str(text)
    elif type(text) == type(int(1)):
      text = str(text)
    if text and text[0:1] == '@':
      text = ''

    return text

  def drawLegend(self, plotRegion):
  
    pad = 2
    drawSymbols = self.drawSymbols
    createText  = self.canvas.create_text
    createRect  = self.canvas.create_rectangle
    symbolSize  = max(5,int(self.zoom*self.symbolSize))  
    lineWidth   = 1
    graphType   = self.graphType
    canvasBbox  = self.canvas.bbox
    symbols     = self.symbols
    fgColor     = self.fgColor
    delete      = self.canvas.delete
    x0,y0,x1,y1 = plotRegion
    canvasCoords = self.canvas.coords
    dataColors  = self.dataColors
    outline = None
    dX = x1-x0
    dY = y1-y0
  
    fX, fY, itemDict = self.legend
    
    for item in itemDict:
      delete(item)
    
    xMax  = 0
    items = []
    x = xS = x0 + (fX*dX)
    y = yS = y0 + (fY*dY)
    i = 0
    for dataName in self.dataNames:
      if dataName is not None:
        if outline is None:
          outline = createRect(0,0,0,0,fill=self.bgColor, outline=self.mgColor)

        color = dataColors[i]
        item  = createText(x,y, text=dataName,fill=fgColor, anchor='nw')
        bbox  = canvasBbox(item)
        items.append(item)       
        
        h  = bbox[3] - bbox[1]
        h2 = h/2
        
        canvasCoords(item, x+h+2, y)
        coordsA = [(x+h2, y+h2, None, None),]
        
        if bbox[2]+h+2 > xMax:
          xMax = bbox[2]+h+2
          
        if graphType == 'line':
          symbol = symbols[i]
          items0 = drawSymbols(coordsA, symbolSize, lineWidth, shape=symbol, outline=color, fill='grey')
        
        elif graphType == 'scatter':
          symbol = symbols[i]
          items0 = drawSymbols(coordsA, symbolSize, lineWidth, shape=symbol, outline=color, fill='grey')
        
        else:
          symbol = 'square'
          items0 = drawSymbols(coordsA, h, lineWidth, shape=symbol, outline=fgColor, fill=color,)
        
        items.extend(items0)
        y += h + pad
    
      i += 1
    
    if outline is not None:
      canvasCoords(outline, xS-4,yS-4,xMax+2,y+2)
      items.append(outline)
 
      itemDict = {}
      for item in items:
        itemDict[item] = True
 

    self.legend = fX, fY, itemDict
    
    return items    
  
  def drawTitle(self, plotRegion):
    
    (x0,y0,x1,y1) = plotRegion
    createText = self.canvas.create_text
    fgColor = self.fgColor

    item0 = createText((x0+x1)/2.0,y1/2.0, text=self.title, fill=fgColor, font=self.font)
    item1 = createText((x0+x1)/2.0,y0+y1,text=self.xLabel,fill=fgColor)
    item2 = createText(x0,y1-5, text=self.yLabel,fill=fgColor, anchor='se')
    
    return (item0,item1,item2)


if __name__ == '__main__':

  import Tkinter, math
  
  root = Tkinter.Tk()
  root.grid_columnconfigure(0, weight=1)
  root.grid_rowconfigure(0, weight=1)
  
  dataSets = []
  
  numbers = [float(x/10.0) for x in range(1,11)]
  
  dataSets.append([(x,x*x) for x in numbers])
  dataSets.append([(x,math.exp(x)) for x in numbers])
  dataSets.append([(x,1/x,0.6) for x in numbers])
  
  dataNames = ['x^2','e^x','1/x']
  
  colors = ['#A00000','#008000','#0000C0']
  
  graph = ScrolledGraph(root,dataSets=dataSets, title='Demo Graph',
                        width=300, height=200, zoom=1.0, dataNames=dataNames,
                        symbolSize=5, xLabel='x', yLabel='f(x)',
                        xLog=False, yLog=False, reverseX=False,
                        bgColor='white', mgColor='grey90', fgColor='black', 
                        symbols=None, dataColors=colors, 
                        lineWidths=None, graphType='line', grid=(0,0))
  #graph.grid(row=0,column=0,sticky='nsew')
  
  root.mainloop()



