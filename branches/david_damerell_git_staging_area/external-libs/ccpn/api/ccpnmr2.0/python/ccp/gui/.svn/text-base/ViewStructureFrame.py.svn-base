
"""
======================COPYRIGHT/LICENSE START==========================

ViewStructureFrame.py: <write function here>

Copyright (C) 2005 Tim Stevens (University of Cambridge)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in license/LGPL.license
 
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

- email: ccpn@bioc.cam.ac.uk

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

Rasmus H. Fogh, Wayne Boucher, Wim F. Vranken, Anne
Pajon, Tim J. Stevens, T.N. Bhat, John Westbrook, John M.C. Ionides and
Ernest D. Laue (2005). A framework for scientific data modeling and automated
software development. Bioinformatics 21, 1678-1684.

===========================REFERENCE END===============================
"""

import Tkinter, math, time, threading, sys

from memops.universal import Geometry, PrintHandler


from memops.gui.Color import invertColor, scaleColor, hexRepr
from memops.gui.MessageReporter import showError, showInfo
from memops.gui.ScrolledCanvas import ScrolledCanvas

from memops.editor.PrintPopup import PrintPopup

try:
  from ccp.c import StructAtom
  from ccp.c import StructBond
  from ccp.c import StructStructure
  from memops.c import TkHandler
except:
  print 'Error, the ViewStructureFrame module will not work, something is wrong with the C code.'
  #StructAtom = StructBond = StructStructure = TkHandler = None
  raise

isWindowsOS = sys.platform[:3].lower() == 'win'

Pi    = math.pi
Twopi = 2.0 * Pi
DEGREES = Pi/180.0

BACKBONE_ATOMS = {'protein':('N','C','CA'),
                  'RNA':("OP1","P","O3'","O5'","C3'","C4'","C5'"),
                  'DNA':("OP1","P","O3'","O5'","C3'","C4'","C5'"),
                  'carbohydrate':("C1","C2","C3","C4","C5","C6","C7","C8"),}

symbolSize = { \
  'C': 1.7,
  'H': 1.2,
  'N': 1.55,
  'O': 1.52,
  'S': 1.80,
  'P': 1.80,
}

symbolMultiplier = {}
for key in symbolSize.keys():
  symbolMultiplier[key] = symbolSize[key] / symbolSize['C']

symbolColor = { \
  'C': (0.4, 0.4, 0.4),
  'H': (0.6, 0.6, 0.6),
  'N': (0.0, 0.0, 0.8),
  'O': (0.8, 0.0, 0.0),
  'S': (0.8, 0.4, 0.0),
  'P': (0.0, 0.8, 0.0),
}

# backbone

class ViewStructureFrame(ScrolledCanvas):


  def __init__(self, parent, model=None, zoom=0.5, resizeCallback=None,
               radiiScale=0.2, bondWidth=2, width=400, height=400, project=None,
               printAppKey=None, atomCallback=None, bondCallback=None, *args, **kw):

    if (project and not printAppKey):
      printAppKey = 'printStructure'

    self.project = project
    self.printAppKey = printAppKey
    self.symbolColor = symbolColor

    ScrolledCanvas.__init__(self, parent, borderwidth=1, width=width, height=height, relief='solid', **kw)

    self.atomicColorDict = {'C':'#404040','N':'#0000A0',
                            'O':'#A00000','H':'#A0A0A0',
                            'P':'#00A000','S':'#A0A000'}

    self.radiiScale = radiiScale
    self.bondWidth  = bondWidth 

    self.yRotation = 0.0
    self.xRotation = 0.0
    self.width     = None
    self.height    = None
    self.initialX  = None
    self.initialY  = None
    self.model     = model
    self.connections = []
    self.anchors     = []
    self.highlightedAtoms = []
    self.atomColors  = {}
    self.cAtomDict = {}
    self.cBondDict = {}
    self.backbone  = []
    self.center    = (width/2.0,height/2.0,0)
    self.view      = [x/zoom for x in (-10,10,-10,10)]
    self.animate = None
    self.atomCallback = atomCallback
    self.bondCallback = bondCallback
    
    self.grid_columnconfigure(0, weight=1)
    self.grid_rowconfigure(0, weight=1)
    
    self.cStructure = None # StructStructure.StructStructure()
    self.canvas.config(background='black')

    self.handler = TkHandler.TkHandler(self.canvas)
    self.bind('<Configure>', self.resize)
        
    self.canvas.bind('<Button-1>', self.mouseButton1)
    self.canvas.bind('<Button-2>', self.mouseButton2)
    self.canvas.bind('<Button-3>', self.mouseButton3)
    self.canvas.bind('<Prior>', self.zoomOut)
    self.canvas.bind('<Next>', self.zoomIn)
    if not isWindowsOS:
      self.canvas.bind('<Button-4>', self.zoomIn)
      self.canvas.bind('<Button-5>', self.zoomOut)
    else:
      self.canvas.bind('<MouseWheel>', self.windowsOsZoom)
    self.canvas.bind('<Up>', self.rotateUp)
    self.canvas.bind('<Down>', self.rotateDown)
    self.canvas.bind('<Left>', self.rotateLeft)
    self.canvas.bind('<Right>', self.rotateRight)
    self.canvas.bind('<Control-Up>', lambda e: self.translate(0,6))
    self.canvas.bind('<Control-Down>', lambda e: self.translate(0,-6))
    self.canvas.bind('<Control-Left>', lambda e: self.translate(-6,0))
    self.canvas.bind('<Control-Right>',lambda e: self.translate(6,0))
    self.canvas.bind('<Leave>', self.stop)
    self.canvas.bind('<Enter>', self.enter)
    self.canvas.bind('<ButtonRelease-1>',self.mouseButtonRelease1)
    self.canvas.bind('<ButtonRelease-2>',self.mouseButtonRelease2)
    self.canvas.bind('<B2-Motion>', self.mouseMotion)
    self.bind('<Configure>', self.resize)
    self.bind('<Expose>', self.expose)
    self.configMenu()

  def configMenu(self):
  
    bb_items = [ \
      { 'kind': 'command', 'label': 'Highlight', 'command': self.highlightBackbone },
      { 'kind': 'command', 'label': 'Reset', 'command': self.resetBackbone },
    ]

    items = [{ 'kind': 'command', 'label': 'Reset View', 'command' : self.resetView },
             { 'kind': 'cascade', 'label': 'Backbone', 'submenu' : bb_items },
             { 'kind': 'command', 'label': 'Spin', 'command' : self.spin },
             { 'kind': 'command', 'label': 'Print to File', 'command' : self.printCanvas }]
      
    self.menu.setMenuItems(items)

  def spin(self, *event):
    
    self.after(7, self.daemon)
    self.animate = True

  def stop(self, *event):
    
    self.animate = None
  
  def daemon(self, *args, **kwargs):

    if self.animate:
      self.rotateStructureXY(3, 0)
      self.after(10, self.daemon)

  def resetView(self, *event):
  
    self.view = [-20.0,20.0,-20.0,20.0]
    if self.cStructure:
      self.cStructure.moveToCenter()
    self.drawStructure()

  def removeMenu(self, event=None):
  
    ScrolledCanvas.removeMenu(self, event)
    self.drawStructure()

  def enter(self, *event):
  
    self.canvas.focus_force()
    self.drawStructure()

  def expose(self, event):
  
    self.drawStructure()

  def mouseButton1(self, event):

    self.stop()
    x = event.x
    y = event.y

    if not self.initialX:
      self.initialX = x
      self.initialY = y

    if self.cStructure:
      width  = float(max(1,self.canvas.winfo_width()))
      height = float(max(1,self.canvas.winfo_height()))
      aspect = width/height
      view   = self.view[:]
      
      if height > width:
        view[3] /= aspect
        view[2] /= aspect
      
      else:
        view[0] *= aspect
        view[1] *= aspect
      
      dX = view[1] - view[0]
      dY = view[3] - view[2]

      xScale = dX/width 
      yScale = dY/height

      coordX = view[0] + (x * xScale)
      coordY = view[3] - (y * yScale)

      tol = 10*xScale # 10 pixels
      
      if self.atomCallback:
        cAtom = self.cStructure.nearestAtom(coordX, coordY, tol)

        if cAtom:
          atom = self.cAtomDict.get(cAtom)  
          
          if atom:
            self.atomCallback(atom)
      
      if self.bondCallback:
        cBond = self.cStructure.nearestBond(coordX, coordY, tol)
        
        if cBond:
          atom1, atom2 = self.cBondDict.get(cBond, (None, None))
        
          if atom1:
           self.bondCallback(atom1, atom2)

  def mouseButton2(self, event):
    
    self.stop()
    if not self.initialX:
      self.initialX = event.x
      self.initialY = event.y

  def mouseButton3(self, event):
    
    self.stop()
    ScrolledCanvas.mouseButton3(self, event)

  def mouseButtonRelease1(self, event):
  
    self.initialX = None
    self.initialY = None

  def mouseButtonRelease2(self, event):
  
    self.initialX  = None
    self.initialY  = None

  def resize(self, event):
  
    self.handler.resize(event.width, event.height)
    self.drawStructure()
  
  def windowsOsZoom(self, event):
  
    delta = event.delta
    if delta > 0:
      scale = 1.2
    elif delta < 0:
      scale = 0.8 
 
    self.view = [x/scale for x in self.view]
    self.drawStructure()
  
  def zoomIn(self, event):

    self.view = [x/1.2 for x in self.view]
    self.drawStructure()
  
  def zoomOut(self, event):
  
    self.view = [x/0.8 for x in self.view]
    self.drawStructure()
   
  
  def mouseMotion(self, event):
  
    self.canvas.focus_force()
    if not self.cStructure:
      return

    if not event:
      return
    
    x, y = event.x,  event.y
      
    # absolute canvas values
    dx = x - self.initialX
    dy = self.initialY - y
    
    if dx == 0 and dy == 0:
      return
        
    if event.state & 1:
      # shift - zoom
      if dy < 0:
        scale = 0.90  
      else:
        scale = 1.1
        
      self.view = [v/scale for v in self.view]
      self.drawStructure()
    
    elif event.state & 4:
      # translate
      self.translate(float(dx), float(dy))
      
    else:
      # rotate
      self.rotateStructureXY(float(dx), -float(dy)) # note sign on y
 
    self.initialX = x
    self.initialY = y

  def translate(self, dX, dY):
    
    w = float(self.winfo_width())
    h = float(self.winfo_height())

    (l,r,t,b) = self.view
    dx1 = (r-l) * dX/w
    dy1 = (b-t) * dY/h
    
    self.view = [l-dx1,r-dx1,t-dy1,b-dy1]
    self.drawStructure()

  def rotateUp(self, event=None):

    aX = 8.0
    self.xRotation += aX
    R = Geometry.matrixRotX(aX*DEGREES)
    self.rotateStructure(R)  

  
  def rotateDown(self, event=None):

    aX = -8.0
    self.xRotation += aX
    R = Geometry.matrixRotX(aX*DEGREES)
    self.rotateStructure(R)  

  
  def rotateLeft(self, event=None):

    aY = -8.0
    self.yRotation += aY
    R = Geometry.matrixRotY(aY*DEGREES)
    self.rotateStructure(R)  


  def rotateRight(self, event=None):

    aY = 8.0
    self.yRotation += aY
    R = Geometry.matrixRotY(aY*DEGREES)
    self.rotateStructure(R)  


  def rotateStructureXY(self, aX, aY):

    self.xRotation += aX
    self.yRotation += aY
    
    aX *= DEGREES
    aY *= DEGREES
    
    R1 = Geometry.matrixRotY(aX)
    R2 = Geometry.matrixRotX(aY)
    R  = Geometry.matrixMultiply(R2, R1)
   
    v = self.view
    C = ( (v[0]+v[1])/2.0, (v[2]+v[3])/2.0, 0.0 )
    self.cStructure.rotate(R, C)
    self.drawStructure()
          
  def rotateStructure(self, R):
    
    v = self.view
    C = ( (v[0]+v[1])/2.0, (v[2]+v[3])/2.0, 0.0 )
    self.cStructure.rotate(R, C)
    self.drawStructure()

  def focusOnAtom(self, atom):

    cAtom = self.cAtomDict.get(atom)
    self.cStructure.focusOnAtom(cAtom)
    self.drawStructure()

  def displayStructure(self, preserveAtoms=False):
    
    if preserveAtoms and self.cStructure and self.model:
      
      cAtomDict = self.cAtomDict
      model = self.model
      structure = model.structureEnsemble
      for chain in structure.coordChains:
        for residue in chain.residues:
           for atom in residue.atoms:
             coord = atom.findFirstCoord(model=model)
             cAtom = cAtomDict[atom]
             cAtom.setCoords((coord.x, coord.y, coord.z))
    
      aX = self.xRotation
      aY = self.yRotation
      self.xRotation = 0
      self.yRotation = 0
      self.rotateStructureXY(aX, aY) 
    
    else:
    
      self.cStructure = None
      self.clearConnections()
      self.clearHighlights()
      self.backbone = []
      getAtomDisplayScheme = self.getAtomDisplayScheme
 
      model = self.model
      if model:
 
        cAtomDict = {}
        cBondDict = {}
        self.cStructure = StructStructure.StructStructure()
        cStructure = self.cStructure

        bonds    = {}
        residues = {}
 
        structure = model.structureEnsemble
        for chain in structure.coordChains:
          for residue in chain.residues:
            residues[residue.residue.molResidue] = residue


        n = 0
        for chain in structure.coordChains:
          for residue in chain.residues:

            molResidue     = residue.residue.molResidue
            linkData       = []
 
            for molResLinkEnd in molResidue.molResLinkEnds:
              if molResLinkEnd.linkCode != 'prev' and molResLinkEnd.molResLink:
                for linkEnd in molResLinkEnd.molResLink.molResLinkEnds:
                  if linkEnd is not molResLinkEnd:
                    linkedResidue = residues.get(linkEnd.molResidue)
                    if linkedResidue: # might fail if molsystem is longer than structure
                      linkData.append( (molResLinkEnd, linkEnd, linkedResidue) )

            chemAtomDict = {}
            for atom1 in residue.atoms:
              chemAtomDict[atom1.chemAtom] = atom1
 
            for atom1 in residue.atoms:
              coord  = atom1.findFirstCoord(model=model)
              symbol = atom1.elementSymbol
              bonds1 = atom1.chemAtom.chemBonds
              color, label, size  = getAtomDisplayScheme(atom1)
              cAtom  = StructAtom.StructAtom(size, '', label, [coord.x, coord.y, coord.z], color)
 
              self.atomColors[cAtom] = color
              cAtomDict[atom1] = cAtom
              cAtomDict[cAtom] = atom1
              cBondDict[atom1] = []
              cStructure.addAtom(cAtom)
              n += 1
 
              for bond in bonds1:
                chemAtoms = list(bond.chemAtoms)
                atom01    = chemAtomDict.get(chemAtoms[0])
                atom02    = chemAtomDict.get(chemAtoms[1])
                if (atom01 is not None) and (atom02 is not None):
                  key = [atom01,atom02]
                  key.sort()
                  bonds[tuple(key)] = 1
 
 
            for molResLinkEnd, nextLinkEnd, nextResidue in linkData:
              atom1 = residue.findFirstAtom(chemAtom = molResLinkEnd.linkEnd.boundChemAtom)
              if atom1:
                nextChemAtom = nextLinkEnd.linkEnd.boundChemAtom
                for atom3 in nextResidue.atoms:
                  if atom3.chemAtom is nextChemAtom:
                    bonds[(atom1, atom3)] = 1
                    break
 
        self.cAtomDict = cAtomDict
        self.cBondDict = cBondDict
 
        # StructBonds
        for atom1,atom2 in bonds.keys():
          cBond = StructBond.StructBond(cAtomDict[atom1],cAtomDict[atom2])
          cBond.setLineWidth(self.bondWidth)
          cBondDict[atom1].append(cBond)
          cBondDict[atom2].append(cBond)
          cBondDict[cBond] = (atom1, atom2)
          cStructure.addBond(cBond)
 
          backboneAtoms = BACKBONE_ATOMS.get(atom1.residue.residue.molResidue.molType)
 
          if backboneAtoms:
            if atom1.name in backboneAtoms:
              if atom2.name in backboneAtoms:
                self.backbone.append( (atom1,atom2,cBond) )
 
        if n > 1:
          cStructure.moveToCenter()
          self.drawStructure()
      
  
  def getAtomDisplayScheme(self, atom):
      
    symbol = atom.elementSymbol
    color  = symbolColor.get(symbol, (0.6, 0.6, 0.6))
    label  = ''
    size   = self.radiiScale * symbolMultiplier.get(symbol, 1.0)
    
    return color, label, size
  
  def highlightBackbone(self, *event):
  
    for atom1, atom2, cBond in self.backbone:
      cAtomDict = self.cAtomDict
      cAtomDict[atom1].setSize(0.15 * symbolMultiplier.get(atom1.elementSymbol, 1.0))
      cAtomDict[atom2].setSize(0.15 * symbolMultiplier.get(atom2.elementSymbol, 1.0))
      cBond.setLineWidth(3)
    self.drawStructure()


  def resetBackbone(self, *event):
  
    for atom1, atom2, cBond in self.backbone:
      cAtomDict = self.cAtomDict
      cAtomDict[atom1].setSize(self.radiiScale * symbolMultiplier.get(atom1.elementSymbol, 1.0))
      cAtomDict[atom2].setSize(self.radiiScale * symbolMultiplier.get(atom2.elementSymbol, 1.0))
      cBond.setLineWidth(self.bondWidth)
    self.drawStructure()

  
  def clearHighlights(self):
  
    for atom in self.highlightedAtoms:
      cAtom = self.cAtomDict[atom]
      cAtom.setAnnotation('')
      cAtom.setAnnotationColor()
      cAtom.setSize(self.radiiScale * symbolMultiplier.get(atom.elementSymbol, 1.0))
      cAtom.setColor(self.atomColors.get(cAtom, (0.6,0.6,0.6)))
      for cBond in self.cBondDict[atom]:
        cBond.setLineWidth(self.bondWidth)

    self.highlightedAtoms = []
  
  def customResidueStyle(self, residue, label=None, color=(0.0,1.0,0.0), size=0.5):
  
    cAtomDict = self.cAtomDict
    cBondDict = self.cBondDict
    
    for atom1 in residue.atoms:
      cAtom1 = cAtomDict.get(atom1)
      
      if cAtom1:
        if label and (atom1.name == 'CA'):
          text = '%d%s %s' % (residue.seqCode, residue.residue.ccpCode, label)
          cAtom1.setAnnotation(text)
          cAtom1.setAnnotationColor(color)
          
        cAtom1.setColor(color)
        cAtom1.setSize(size * symbolMultiplier.get(atom1.elementSymbol, 1.0))
        for cBond in cBondDict[atom1]:
          cBond.setLineWidth(int(10*size))
 
        self.highlightedAtoms.append(atom1)
    
   
  def highlightResidue(self, atom, color=(0.0,1.0,0.0), atomSize=0.2 ):

    cAtomDict = self.cAtomDict
    cBondDict = self.cBondDict
    cAtom = cAtomDict.get(atom)
    if cAtom:
      for atom1 in atom.residue.atoms:
        cAtom1 = cAtomDict.get(atom1)
        
        if cAtom1:
          if atom1.name == 'CA':
            cAtom1.setAnnotation('%d%s' % (atom.residue.seqCode, atom.residue.residue.ccpCode))
        
          cAtom1.setSize(atomSize * symbolMultiplier.get(atom1.elementSymbol, 1.0))
          for cBond in cBondDict[atom1]:
            cBond.setLineWidth(5)
          
          self.highlightedAtoms.append(atom1)
          
      text = '%d%s:%s' % (atom.residue.seqCode, atom.residue.residue.ccpCode, atom.name)
      cAtom.setAnnotation(text)
      cAtom.setAnnotationColor(color)
      self.highlightedAtoms.append(atom)

  def highlightAtom(self, atom, color=(0.0,1.0,0.0), size=0.2, label=None ):

    cAtomDict = self.cAtomDict
    cBondDict = self.cBondDict
    cAtom = cAtomDict.get(atom)
    if cAtom:
      if label is None:
        text = '%d%s:%s' % (atom.residue.seqCode, atom.residue.residue.ccpCode, atom.name)
      else:
        text = label
      
      cAtom.setAnnotation(text)
      cAtom.setAnnotationColor(color)
      cAtom.setColor(color)
      cAtom.setSize(size * symbolMultiplier.get(atom.elementSymbol, 1.0))
      for cBond in cBondDict[atom]:
        cBond.setLineWidth(int(10*size))
          
      self.highlightedAtoms.append(atom)
                
  def drawConnection(self, atoms1, atoms2, color=(0.0,1.0,0.0), label='' ):

    cBond = None
    if self.cStructure and (atoms1 != atoms2):
    
      cAtomDict = self.cAtomDict
      cAtom1 = cAtomDict.get(atoms1[0])
      if (len(atoms1) == 1) and cAtom1:
        cAtom1 = self.cAtomDict[atoms1[0]]
        
      else:
        n = 0.0
        x = 0.0
        y = 0.0
        z = 0.0
        
        cAtoms = []
        for atom in atoms1:
          cAtom = cAtomDict.get(atom)
          if not cAtom:
            continue
          cAtoms.append(cAtom)
          x1, y1, z1 = cAtom.getCoords()
         
          x += x1
          y += y1
          z += z1
          n += 1.0
          
        x /= n or 1.0
        y /= n or 1.0
        z /= n or 1.0
        cAtom1 = StructAtom.StructAtom(0.1, '', '', [x, y, z], color)
        self.cStructure.addAtom(cAtom1)
        self.anchors.append(cAtom1)
        
        for cAtom in cAtoms:
          cBond = StructBond.StructBond(cAtom1, cAtom)
          cBond.setColor(color)
          cBond.setLineStyle(1)
          cBond.setLineWidth(4.0)
          self.cStructure.addBond(cBond)
          self.connections.append(cBond)

      cAtom2 = cAtomDict.get(atoms2[0])
      if (len(atoms2) == 1) and cAtom2:
        pass
        
      else:
        n = 0.0
        x = 0.0
        y = 0.0
        z = 0.0
        
        cAtoms = []
        for atom in atoms2:
          cAtom = cAtomDict.get(atom)
          if not cAtom:
            continue
          cAtoms.append(cAtom)
          x1, y1, z1 = cAtom.getCoords()

          x += x1
          y += y1
          z += z1
          n += 1.0
          
        x /= n or 1.0
        y /= n or 1.0
        z /= n or 1.0
        cAtom2 = StructAtom.StructAtom(0.1, '', '', [x, y, z], color)
        self.cStructure.addAtom(cAtom2)
        self.anchors.append(cAtom2)

        for cAtom in cAtoms:
          cBond = StructBond.StructBond(cAtom2, cAtom)
          cBond.setColor(color)
          cBond.setLineStyle(1)
          cBond.setLineWidth(4.0)
          self.cStructure.addBond(cBond)
          self.connections.append(cBond)
    
      cBond = StructBond.StructBond(cAtom1, cAtom2)
      cBond.setColor(color)
      cBond.setAnnotation(label)
      cBond.setLineStyle(1)
      cBond.setLineWidth(4.0)
      self.cStructure.addBond(cBond)
      self.connections.append(cBond)

    return cBond

  def clearConnections(self):
  
    if self.cStructure:
      for cBond in self.connections:
        try:
          self.cStructure.removeBond(cBond)
        except:
          pass

      for cAtom in self.anchors:
        try:
          self.cStructure.removeAtom(cAtom)
        except:
          pass
        
      self.anchors = []
      self.connections = []

  # overrides ScrolledCanvas version
  def printCanvas(self, *event):

    self.printStructure()

  def printStructure(self):

    w = self.winfo_width()
    h = self.winfo_height()
    popup = PrintPopup(self, width=w, height=h, title='Print Structure',
                       modal=True, project=self.project, appKey=self.printAppKey)
    outputHandler = popup.outputHandler
    popup.destroy()

    if (not outputHandler):
      return

    (x0, y0, x1, y1) = self.handler.getRegion()
    try:
      printHandler = PrintHandler.PrintHandler(outputHandler,
                                    xRegion=(x0, x1), yRegion=(y0, y1))
      self.drawStructure(handler=printHandler)
      file_name = outputHandler.file_name
      printHandler.close() # clears file_name, hence first need to save, as above
      showInfo('Wrote file', 'Successfully wrote file "%s"' % file_name, parent=self)
    except IOError, e:
      showError('IO Error', str(e), parent=self)

  def drawStructure(self, handler=None):
  
    if not handler:
      handler = self.handler
 
    w  = self.winfo_width()
    h  = self.winfo_height()
  
    if not self.cStructure:
      handler.setBackground((0.0, 0.0, 0.0))
      handler.startBack() # for double buffering
      handler.expose(0, 0, w, h)
      handler.swapBuffers() # for double buffering
      return
      
    view = self.view
    a0 = view[0] 
    a1 = view[1] 
    b0 = view[2] 
    b1 = view[3] 
    if w < h:
      c = 0.5 * (b0 + b1)
      d = 0.5 * float(h) * (a1 - a0) / w
      b0 = c - d
      b1 = c + d
    elif w > h:
      c = 0.5 * (a0 + a1)
      d = 0.5 * float(w) * (b1 - b0) / h
      a0 = c - d
      a1 = c + d
    
    handler.mapRanges(0.0, 0.0, 1.0, 1.0, a0, b0, a1, b1)
    handler.setColor((1.0, 1.0, 1.0))
    handler.setBackground((0.0, 0.0, 0.0))
    handler.startBack() # for double buffering
    handler.expose(0, 0, w, h)
    
    if handler == self.handler:
      self.cStructure.draw(handler)
    else:
      self.cStructure.draw(handler.cHandler)
      
    handler.swapBuffers() # for double buffering
              
  
  def getRGB(self, color):

    rgb = [x/65535.0 for x in self.winfo_rgb(color)]
    return rgb
      

  def update(self, model=None):
  
    preserveAtoms = False
    if model and self.model:
      if self.model.structureEnsemble is model.structureEnsemble:
         preserveAtoms = True
  
    self.model = model or None
    self.displayStructure(preserveAtoms)
