
"""
======================COPYRIGHT/LICENSE START==========================

DataLocationFrame.py: <write function here>

Copyright (C) 2008 Wayne Boucher, Rasmus Fogh, Tim Stevens and Wim Vranken (University of Cambridge and EBI/MSD)

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

import os

from memops.api.Implementation import Url

from memops.gui.FileSelectPopup import FileSelectPopup
from memops.gui.Frame import Frame
from memops.gui.ScrolledMatrix import ScrolledMatrix

from ccp.api.general.DataLocation import NumericMatrix
from ccp.api.general.DataLocation import MimeTypeDataStore

from ccp.general.Io import changeDataStoreUrl, setDataStoreFileName

class DataLocationFrame(Frame):

  def __init__(self, parent, project, *args, **kw):

    self.project = project
    self.waiting  = False
    Frame.__init__(self, parent, *args, **kw)

    self.grid_rowconfigure(0, weight=1)
    self.grid_columnconfigure(0, weight=1)

    headingList = ['#', 'Absolute Path', 'Relative Path\nand File', 'Spectrum / Image']
    editWidgets = [None, None, None, None]
    editGetCallbacks = [None, self.getDataUrl, self.getDataPath, None]
    editSetCallbacks = [None, None, None, None]

    self.dataStoreTable = ScrolledMatrix(self, headingList=headingList,
                                          ###callback=self.selectDataStore,
                                          editWidgets=editWidgets, multiSelect=True,
                                          editGetCallbacks=editGetCallbacks,
                                          editSetCallbacks=editSetCallbacks,
                                          ###deleteFunc=self.deleteDataStores)
                                          )

    self.dataStoreTable.grid(row=0, column=0, sticky='nsew')

    self.updateAfter()

  def updateAfter(self, *extra):
    
    if self.waiting:
      return
    
    self.waiting = True
    self.after_idle(self.update)

  def update(self):

    dataStores = []
    for dataLocationStore in self.project.sortedDataLocationStores():
      dataStores.extend(dataLocationStore.sortedDataStores())

    textMatrix = []
    colorMatrix = []
    for i, dataStore in enumerate(dataStores):
      if isinstance(dataStore, NumericMatrix):
        tt = ['%s:%s' % (dataSource.experiment.name, dataSource.name) for dataSource in dataStore.nmrDataSources]
      elif isinstance(dataStore, MimeTypeDataStore):
        tt = ['%s:%s:%s' % (dataSourceImage.dataSource.experiment.name, dataSourceImage.dataSource.name, dataSourceImage.serial) for dataSourceImage in dataStore.nmrDataSourceImages]
      else:
        tt = []

      n = len(tt)
      if n == 0:
        tt = ''
      elif n == 1:
        tt = tt[0]
      elif n == 2:
        pass
      else:
        tt = '[%s,%s,...]' % (tt[0], tt[1])

      datum = [i+1, dataStore.dataUrl.url.dataLocation, dataStore.path, tt]
      textMatrix.append(datum)

      colors = 4*[None]  # number of columns=4
      color = '#FF8080'  # red
      if not os.path.exists(dataStore.dataUrl.url.dataLocation):
        colors[1] = color
      elif not os.path.exists(dataStore.fullPath):
        colors[2] = color
      colorMatrix.append(colors)

    self.dataStoreTable.update(textMatrix=textMatrix, objectList=dataStores,
                               colorMatrix=colorMatrix)

    self.waiting = False

  def getDataUrl(self, *extra):

    if self.dataStoreTable.currentObject:
      dataStore = self.dataStoreTable.currentObject
      oldPath = dataStore.dataUrl.url.dataLocation
      if os.path.exists(oldPath):
        directory = oldPath
      elif os.path.exists(os.path.dirname(oldPath)):
        directory = os.path.dirname(oldPath)
      else:
        directory = None
      popup = FileSelectPopup(self, directory=directory, show_file=False)
      newPath = popup.getDirectory()
      popup.destroy()
      if newPath and oldPath != newPath:
        changeDataStoreUrl(dataStore, newPath)

  def getDataPath(self, *extra):

    if self.dataStoreTable.currentObject:
      dataStore = self.dataStoreTable.currentObject
      oldPath = dataStore.fullPath
      directory = file = ''
      if os.path.exists(oldPath):
        file = oldPath
      elif os.path.exists(os.path.dirname(oldPath)):
        directory = os.path.dirname(oldPath)
      elif os.path.exists(dataStore.dataUrl.url.dataLocation):
        directory = dataStore.dataUrl.url.dataLocation
      popup = FileSelectPopup(self, file=file, directory=directory)
      newPath = popup.getFile()
      popup.destroy()
      if newPath and oldPath != newPath:
        pp = dataStore.dataUrl.url.dataLocation
        if newPath.startswith(pp):
          newPath = newPath[len(pp)+1:]
          dataStore.path = newPath
        else:
          setDataStoreFileName(dataStore, newPath)

  def administerNotifiers(self, notifyFunc):

    for func in ('__init__', 'delete', 'setDataUrl', 'setPath'):
      for clazz in ('BlockedBinaryMatrix', 'ShapeMatrix', 'MimeTypeDataStore'):
        notifyFunc(self.updateAfter, 'ccp.general.DataLocation.%s' % clazz, func)

    notifyFunc(self.updateAfter, 'ccp.general.DataLocation.DataUrl', 'setUrl')

    for func in ('__init__', 'delete', 'setName'):
      for clazz in ('Experiment', 'DataSource', 'DataSourceImage'):
        notifyFunc(self.updateAfter, 'ccp.nmr.Nmr.%s' % clazz, func)

if __name__ == '__main__':

  import sys

  if len(sys.argv) != 2:
    print 'must specify project directory'
    sys.exit()

  path = sys.argv[1]

  import Tkinter
  from memops.gui.DataEntry import askDir, askFile
  from memops.gui.MessageReporter import showWarning
  from memops.general.Io import loadProject
  from memops.universal.Io import normalisePath

  path = normalisePath(path)
  askdir = lambda title, prompt, initial_value: askDir(title, prompt,
              initial_value, parent=top, extra_dismiss_text='Skip')
  askfile = lambda title, prompt, initial_value: askFile(title, prompt,
              initial_value, parent=top, extra_dismiss_text='Skip')
  project = loadProject(path, showWarning=showWarning,
                        askDir=askdir, askFile=askfile)

  r = Tkinter.Tk()

  popup = DataLocationPopup(r, project)

  r.withdraw()
  r.mainloop()
