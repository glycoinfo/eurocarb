
"""
======================COPYRIGHT/LICENSE START==========================

SaveProjectFrame.py: <write function here>

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
import Tkinter

from memops.universal.Io import joinPath

from memops.general import Implementation, Io

from memops.gui.Entry import Entry
from memops.gui.FileSelect import FileSelect
from memops.gui.Frame import Frame
from memops.gui.Label import Label
from memops.gui.LabelFrame import LabelFrame
from memops.gui.MessageReporter import showError, showInfo, showYesNo
from memops.gui.Util import createDismissHelpButtonList

class SaveProjectFrame(Frame):

  def __init__(self, guiParent, project, callback = None,
               help_msg = '', help_url = '', dismiss_text = '', *args, **kw):

    self.project = project
    self.callback = callback
    self.help_msg = help_msg
    self.help_url = help_url
    self.dismiss_text = dismiss_text
    self.did_save = False
    if not hasattr(self, 'modal'):
      self.modal = False
    Frame.__init__(self, guiParent, *args, **kw)

    guiParent.grid_columnconfigure(1, weight=1)

    row = 0

    label = Label(guiParent, text='Project Name:') 
    label.grid(row=row, column=0, sticky=Tkinter.EW)

    self.proj_name_entry = Entry(guiParent, text=self.project.name)
    self.proj_name_entry.grid(row=row, column=1, sticky=Tkinter.EW)

    row = row + 1
    labelFrame = LabelFrame(guiParent, text='Save Location')
    labelFrame.grid(row=row, column=0, columnspan=2, sticky=Tkinter.NSEW)
    labelFrame.grid_rowconfigure(0, weight=1)
    labelFrame.grid_columnconfigure(0, weight=1)

    directory = os.path.dirname(Io.getUserDataPath(self.project))
    self.proj_dir_select = FileSelect(labelFrame, directory=directory, show_file=False)
    self.proj_dir_select.grid(row=0, column=0, sticky=Tkinter.NSEW)

    guiParent.grid_rowconfigure(row, weight=1)

    row = row + 1
    texts = [ 'Save' ]
    commands = [ self.save ]
    buttons = createDismissHelpButtonList(guiParent, texts=texts, commands=commands,
                help_msg=self.help_msg, help_url=self.help_url,
                dismiss_text=self.dismiss_text, expands=True)
    buttons.grid(row=row, column=0, columnspan=2, sticky=Tkinter.EW)

  def save(self):

    projName = self.proj_name_entry.get()
    directory = self.proj_dir_select.getDirectory()
    directory = joinPath(directory, projName)

    self.did_save = False
    try:
      done = Io.saveProject(self.project, newPath=directory, newProjectName=projName,
                            createFallback=True, showYesNo=showYesNo)
      if done:
        showInfo('Project saved', 'Project saved successfully')
        self.did_save = True
        if self.callback:
          self.callback(self.project)
      elif self.modal:
        return # give another chance
    except Implementation.ApiError, e:
      showError('Save project', e.error_msg)
    except IOError, e:
      showError('Save project', str(e))

    if self.modal:
      self.close()

