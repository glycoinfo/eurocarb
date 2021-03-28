import os
import sys
import Tkinter

from memops.gui.BasePopup       import BasePopup
from memops.gui.ScrolledMatrix  import ScrolledMatrix
from memops.gui.Label           import Label
from memops.gui.Entry           import Entry
from memops.gui.ButtonList      import ButtonList
from memops.gui.MessageReporter import showWarning

from ccpnmr.update.UpdateAgent import UpdateAgent, UPDATE_SERVER_LOCATION, UPDATE_DIRECTORY, UPDATE_DATABASE_FILE

class UpdatePopup(BasePopup, UpdateAgent):

  def __init__(self, parent, serverLocation=UPDATE_SERVER_LOCATION,
               serverDirectory=UPDATE_DIRECTORY,
               dataFile=UPDATE_DATABASE_FILE, exitOnClose=False):

    self.exitOnClose = exitOnClose
    UpdateAgent.__init__(self, serverLocation, serverDirectory, dataFile, isStandAlone=exitOnClose)
    self.fileUpdate  = None
 
    if exitOnClose:
      quitFunc = sys.exit
    else:
      quitFunc = None

    BasePopup.__init__(self, parent=parent, title='CcpNmr Software Updates', quitFunc=quitFunc)

  def body(self, guiParent):
  
    self.geometry('600x300')
  
    guiParent.grid_columnconfigure(1, weight=1)
  

    url = ''
    if self.server:
      url = self.server.url
    label = Label(guiParent, text='Server location: %s' % url)
    label.grid(row=0, column=0, sticky='w', columnspan=2)

    label = Label(guiParent, text='Installation root: %s%s' % (self.installRoot,os.sep))
    label.grid(row=1, column=0, sticky='w', columnspan=2)
 
    editWidgets      = [ None] * 5
    editGetCallbacks = [ None, self.toggleSelected, None, None, None]
    editSetCallbacks = [ None] * 5

    guiParent.grid_rowconfigure(2, weight=1)
    headingList = ['File','Install?','Date','Relative Path','Priority','Comments']
    self.scrolledMatrix = ScrolledMatrix(guiParent, headingList=headingList,
                                         highlightType = 0,
                                         editWidgets=editWidgets, callback=self.selectCell,
                                         editGetCallbacks=editGetCallbacks,
                                         editSetCallbacks=editSetCallbacks)
                                         
    self.scrolledMatrix.grid(row=2, column=0, columnspan=2, sticky='nsew')

    if self.exitOnClose:
      txt = 'Quit'
      cmd = sys.exit
    else:
      txt = 'Close'
      cmd = self.close

    texts = ['Refresh List','Select All','Install Selected',txt]
    commands = [self.updateFiles, self.selectAll, self.install, cmd]
    self.buttonList = ButtonList(guiParent, texts=texts, commands=commands, expands=True)
    self.buttonList.grid(row=3, column=0, columnspan=2, sticky='ew')
    
    if self.server:
      for fileUpdate in self.server.fileUpdates:
        fileUpdate.isSelected = False

    #self.update()
    # need self.updateFiles, not just self.update
    # because otherwise the 2.0.5 to 2.0.6 upgrades do not work
    # (self.server not set on first pass so need call to updateFiles here)
    self.updateFiles()

  def toggleSelected(self, fileUpdate):
  
    boolean = fileUpdate.isSelected
    
    fileUpdate.isSelected = not boolean

    self.update()

  def install(self):
  
    if self.server:
      self.installUpdates()    
      self.updateFiles()

  def selectAll(self):
  
    if self.server:
      for fileUpdate in self.scrolledMatrix.objectList:
        fileUpdate.isSelected = True
        
    self.update()

  def selectCell(self, object, row, col):
  
    self.fileUpdate = object

  def updateButtons(self):
  
  
    buttons = self.buttonList.buttons
    
    if self.server:
      selected = False
      if self.server and self.server.fileUpdates:
        for fileUpdate in self.scrolledMatrix.objectList:
          if fileUpdate.isSelected:
            selected = True
            break
 
        buttons[1].enable()
      else:
        buttons[1].disable()

      if selected:
        buttons[2].enable()
        buttons[2].config(bg='#A0FFA0')
      else:
        buttons[2].disable()
        buttons[2].config(bg=buttons[1].cget('bg'))
 
    else:
      for button in buttons[:-1]:
        button.disable()
 
  def updateFiles(self):
    
    if self.server:
      if not self.server.fileUpdates:
        self.server.getFileUpdates()
        
      for fileUpdate in self.server.fileUpdates:
        fileUpdate.isSelected = False
        
    self.update()

  def update(self):
    
    self.updateButtons()
    
    self.fileUpdate = None
    textMatrix  = []
    objectList  = []
    colorMatrix = []
    
    if self.server:
      
      for fileUpdate in self.server.fileUpdates:
        
		
        if fileUpdate.getIsUpToDate():
          continue
          
        color = [None,'#A04040',None,None,None]
        yesNo = 'No'
        if fileUpdate.isSelected:
          color = [None,'#A0FFA0',None,None,None]
          yesNo = 'Yes'
        
        datum = []
        datum.append(fileUpdate.fileName)
        datum.append(yesNo)
        datum.append(fileUpdate.date)
        datum.append(fileUpdate.filePath+os.sep)
        datum.append(fileUpdate.priority)
        datum.append(fileUpdate.details)
        
        colorMatrix.append(color)
        textMatrix.append(datum)
        objectList.append(fileUpdate)
    
    
    self.scrolledMatrix.update(textMatrix=textMatrix, objectList=objectList, colorMatrix=colorMatrix)
    

if __name__ == '__main__':

  root = Tkinter.Tk()
  root.withdraw()
  top = UpdatePopup(root, exitOnClose=True)
  root.mainloop()
 
