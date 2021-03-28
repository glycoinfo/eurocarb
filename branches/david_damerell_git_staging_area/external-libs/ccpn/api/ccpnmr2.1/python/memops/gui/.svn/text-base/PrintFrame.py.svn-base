
"""
======================COPYRIGHT/LICENSE START==========================

PrintFrame.py: <write function here>

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
import os
import time

import Tkinter

import memops.universal.Output as Output
import memops.universal.Pdf as Pdf
import memops.universal.PostScript as PostScript
import memops.universal.PrintHandler as PrintHandler
import memops.universal.PrintTicks as PrintTicks

from memops.gui.Button import Button
from memops.gui.CheckButtons import CheckButtons
from memops.gui.Entry import Entry
from memops.gui.FileSelect import FileType
from memops.gui.FileSelectPopup import FileSelectPopup
from memops.gui.Frame import Frame
from memops.gui.FloatEntry import FloatEntry
from memops.gui.Label import Label
from memops.gui.LabelFrame import LabelFrame
from memops.gui.MessageReporter import showError, showInfo, showYesNo
from memops.gui.PulldownList import PulldownList
from memops.gui.Scale import Scale

paper_types = Output.paper_types
paper_type_dict = Output.paper_type_dict
paper_type_inverse_dict = Output.paper_type_inverse_dict
paper_units = Output.paper_units
paper_sizes = Output.paper_sizes
paper_orientations = Output.paper_orientations
style_choices = Output.style_choices
format_choices = PostScript.format_choices + Pdf.format_choices
format_suffixes = PostScript.format_suffixes + Pdf.format_suffixes
border_decorations = [ 'Time & date', 'File name' ]
tick_locations = PrintTicks.tick_locations
tick_placements = PrintTicks.tick_placements

format_options = [format_suffix.upper() for format_suffix in format_suffixes]

format_suffixes = ['.' + format_suffix for format_suffix in format_suffixes]
file_suffixes = {}
for n in range(len(format_choices)):
  file_suffixes[format_choices[n]] = format_suffixes[n]

""" Below are option keys in data model:
  'FileName',
  'Title',
  'PaperSize',
  'OtherHeight',
  'OtherWidth',
  'OtherUnit',
  'Orientation',
  'InColor',
  'OutputFormat',
  'TickOutside',
  'TickPlacement',
  'ShowsDateTime',
  'ShowsFileName',
  'Scaling',
"""

# convert from nsew to top/botton/left/right
def getTickPlacement1(placement):

  result = []

  if 'n' in placement:
    result.append(PrintTicks.Top)

  if 's' in placement:
    result.append(PrintTicks.Bottom)

  if 'e' in placement:
    result.append(PrintTicks.Right)

  if 'w' in placement:
    result.append(PrintTicks.Left)

  return result

# convert from top/botton/left/right to nsew
def getTickPlacement2(placement):

  result = ''

  if PrintTicks.Top in placement:
    result = result + 'n'

  if PrintTicks.Bottom in placement:
    result = result + 's'

  if PrintTicks.Right in placement:
    result = result + 'e'

  if PrintTicks.Left in placement:
    result = result + 'w'

  return result

class PrintFrame(LabelFrame):

  def __init__(self, parent, getOption = None, setOption = None,
               text='Print Options', haveTicks = False, doOutlineBox = True, *args, **kw):

    self.getOption = getOption
    self.setOption = setOption
    self.haveTicks = haveTicks
    self.doOutlineBox = doOutlineBox

    LabelFrame.__init__(self, parent=parent, text=text, *args, **kw)

    self.file_select_popup = None

    self.getOptionValues()

    try:
      size_index = self.paper_types.index(self.paper_type)
    except:
      size_index = 0

    try:
      other_unit_index = self.paper_units.index(self.other_unit)
    except:
      other_unit_index = 0

    try:
      orientation_index = self.paper_orientations.index(self.orientation)
    except:
      orientation_index = 0

    try:
      style_index = self.style_choices.index(self.output_style)
    except:
      style_index = 0

    try:
      format_index = self.format_choices.index(self.output_format)
    except:
      format_index = 0

    if haveTicks:
      try:
        tick_location_index = self.tick_locations.index(self.tick_location)
      except:
        tick_location_index = 0

    self.grid_columnconfigure(2, weight=1)

    row = 0
    label = Label(self, text='File:')
    label.grid(row=row, column=0, sticky='e')
    self.file_entry = Entry(self, width=40, text=self.file_name)
    self.file_entry.grid(row=row, column=1, columnspan=2, sticky='ew')
    button = Button(self, text='Choose File', command=self.findFile)
    button.grid(row=row, column=3, rowspan=2, sticky='nsew')

    row += 1
    label = Label(self, text='Title:')
    label.grid(row=row, column=0, sticky='e')
    self.title_entry = Entry(self, width=40, text=self.title)
    self.title_entry.grid(row=row, column=1, columnspan=2, sticky='ew')

    row += 1
    frame = Frame(self)
    frame.grid(row=row, column=0, columnspan=4, sticky='ew')
    frame.grid_columnconfigure(4, weight=1)
    
    label = Label(frame, text='Paper size:')
    label.grid(row=0, column=0, sticky='e')
    entries = []
    for t in paper_types:
      if t == Output.other_paper_type:
        entry = t
      else:
        (w, h, u) = paper_sizes[t]
        entry = t + ' (%2.1f %s x %2.1f %s)' % (w, u, h, u)
      entries.append(entry)
    self.size_menu = PulldownList(frame, callback=self.changedSize,
                                  texts=entries, index=size_index)
    self.size_menu.grid(row=0, column=1, sticky='w')

    self.other_frame = Frame(frame)

    self.other_frame.grid_columnconfigure(0, weight=1)
    self.other_entry = FloatEntry(self.other_frame, text=self.other_size, isArray=True)
    self.other_entry.grid(row=0, column=0, sticky='ew')
    self.other_unit_menu= PulldownList(self.other_frame, texts=paper_units,
                                       index=other_unit_index)
    self.other_unit_menu.grid(row=0, column=1, sticky='ew')

    row += 1
    frame = Frame(self)
    frame.grid(row=row, column=0, columnspan=4, sticky='ew')
    frame.grid_columnconfigure(1, weight=1)
    frame.grid_columnconfigure(3, weight=1)
    frame.grid_columnconfigure(5, weight=1)

    label = Label(frame, text='Orientation:')
    label.grid(row=0, column=0, sticky='e')
    self.orientation_menu = PulldownList(frame, texts=paper_orientations,
                                         index=orientation_index)
    self.orientation_menu.grid(row=0, column=1, sticky='w')

    label = Label(frame, text='  Style:')
    label.grid(row=0, column=2, sticky='e')
    self.style_menu = PulldownList(frame, texts=style_choices,
                                   index=style_index)
    self.style_menu.grid(row=0, column=3, sticky='w')

    label = Label(frame, text='  Format:')
    label.grid(row=0, column=4, sticky='e')
    self.format_menu = PulldownList(frame, callback=self.changedFormat,
                                    texts=format_choices, index=format_index)

    self.format_menu.grid(row=0, column=5, sticky='w')

    if haveTicks:

      row += 1
      frame = Frame(self)
      frame.grid(row=row, column=0, columnspan=4, sticky='ew')
      frame.grid_columnconfigure(1, weight=1)
      frame.grid_columnconfigure(3, weight=1)
      
      label = Label(frame, text='Tick Location:')
      label.grid(row=0, column=0, sticky='e')
      self.tick_menu = PulldownList(frame, texts=tick_locations,
                                    index=tick_location_index)
      self.tick_menu.grid(row=0, column=1, sticky='w')

      label = Label(frame, text='  Tick Placement:')
      label.grid(row=0, column=2, sticky='e')
      self.tick_buttons = CheckButtons(frame, entries=tick_placements,
                                       selected=self.tick_placement)
      self.tick_buttons.grid(row=0, column=3, sticky='w')

    row += 1
    frame = Frame(self)
    frame.grid(row=row, column=0, columnspan=4, sticky='ew')
    frame.grid_columnconfigure(3, weight=1)
  
    label = Label(frame, text='Include:')
    label.grid(row=0, column=0, sticky='e')
    self.border_buttons = CheckButtons(frame, entries=border_decorations,
                                       selected=self.border_decoration)
    self.border_buttons.grid(row=0, column=1, sticky='w')
 
    label = Label(frame, text='  Scaling:')
    label.grid(row=0, column=2, sticky='e')
    self.scaling_scale = Scale(frame, orient=Tkinter.HORIZONTAL, value=self.scaling)
    self.scaling_scale.grid(row=0, column=3, sticky='ew')

  def destroy(self):

    self.setOptionValues()

    if self.file_select_popup:
      self.file_select_popup.destroy()

    Frame.destroy(self)

  def getOptionValues(self):

    getOption = self.getOption
    if getOption:

      file_name = getOption('FileName', defaultValue='')
      title = getOption('Title', defaultValue='')
      paper_type = getOption('PaperSize', defaultValue=paper_types[0])
      paper_type = paper_type_dict.get(paper_type, paper_types[0])
      other_height = getOption('OtherHeight', defaultValue=10)
      other_width = getOption('OtherWidth', defaultValue=10)
      other_size = [other_height, other_width]
      other_unit = getOption('OtherUnit', defaultValue=paper_units[0])
      orientation = getOption('Orientation', defaultValue=paper_orientations[0])
      in_color = getOption('InColor', defaultValue=True)
      if in_color:
        output_style = style_choices[0]
      else:
        output_style = style_choices[1]
      format_option = getOption('OutputFormat', defaultValue=format_options[0])
      output_format = format_choices[format_options.index(format_option)]
      if self.haveTicks:
        tick_outside = getOption('TickOutside', defaultValue=tick_locations[0])
        if tick_outside:
          tick_location = tick_locations.index(PrintTicks.Outside)
        else:
          tick_location = tick_locations.index(PrintTicks.Inside)
        tick_placement = getTickPlacement1(getOption('TickPlacement', defaultValue='nsew'))
      dateTime = getOption('ShowsDateTime', defaultValue=True)
      fileName = getOption('ShowsFileName', defaultValue=True)
      border_decoration = []
      if dateTime:
        border_decoration.append(border_decorations[0])
      if fileName:
        border_decoration.append(border_decorations[1])
      scaling = getOption('Scaling', defaultValue=0.9)
      scaling = int(round(100.0 * scaling))

    else:

      file_name = ''
      title = ''
      paper_type = paper_types[0]
      other_unit = paper_units[0]
      other_size = ''
      orientation = paper_orientations[0]
      output_style = style_choices[0]
      output_format = format_choices[0]
      if self.haveTicks:
        tick_location = tick_locations[0]
        tick_placement = tick_placements
      border_decoration = border_decorations
      scaling = 90

    if not self.haveTicks:
      tick_location = None
      tick_placement = None

    self.file_name = file_name
    self.title = title
    self.paper_type = paper_type
    self.other_unit = other_unit
    self.other_size = other_size
    self.orientation = orientation
    self.output_style = output_style
    self.output_format = output_format
    self.tick_location = tick_location
    self.tick_placement = tick_placement
    self.border_decoration = border_decoration
    self.scaling = scaling

  def setOptionValues(self):

    self.file_name = file_name = self.file_entry.get()
    self.title = title = self.title_entry.get()

    n = self.size_menu.getSelectedIndex()
    self.paper_type = paper_type = paper_types[n]
    if paper_type == Output.other_paper_type:
      other_size = self.other_entry.get()
      other_unit = self.other_unit_menu.getText()
    else:
      other_size = None
      other_unit = None
    self.other_size = other_size
    self.other_unit = other_unit

    self.paper_orientation = paper_orientation = self.orientation_menu.getText()
    self.output_style = output_style = self.style_menu.getText()
    self.output_format = output_format = self.format_menu.getText()

    if self.haveTicks:
      tick_location = self.tick_menu.getText()
      tick_placement = self.tick_buttons.getSelected()
    else:
      tick_location = tick_placement = None
    self.tick_location = tick_location
    self.tick_placement = tick_placement

    self.border_decoration = border_decoration = self.border_buttons.getSelected()
    scaling = self.scaling_scale.get()
    self.scaling = scaling = int(round(scaling))

    setOption = self.setOption
    if setOption:
      setOption('FileName', value=file_name)
      setOption('Title', value=title)
      if paper_type == Output.other_paper_type:
        setOption('OtherHeight', value=other_size[0])
        setOption('OtherWidth', value=other_size[1])
        setOption('OtherUnit', value=other_unit)
      else:
        paper_type = paper_type_inverse_dict[paper_type]
        setOption('PaperSize', value=paper_type)
      setOption('Orientation', value=paper_orientation)
      in_color = (output_style == style_choices[0])
      setOption('InColor', value=in_color)
      output_format = format_options[format_choices.index(output_format)]
      setOption('OutputFormat', value=output_format)
      if self.haveTicks:
        tick_outside = (tick_location == PrintTicks.Outside)
        setOption('TickOutside', value=tick_outside)
        tick_placement = getTickPlacement2(tick_placement)
        setOption('TickPlacement', value=tick_placement)
      dateTime = (border_decorations[0] in border_decoration)
      fileName = (border_decorations[1] in border_decoration)
      setOption('ShowsDateTime', value=dateTime)
      setOption('ShowsFileName', value=fileName)
      setOption('Scaling', value=0.01*scaling)

  def findFile(self):

    if self.file_select_popup:
      self.file_select_popup.open()
    else:
      file_types = [ FileType('All', ['*']),
                     FileType('PostScript', ['*.ps', '*.eps']),
                     FileType('PDF', ['*.pdf', '*.ai']) ]
      self.file_select_popup = FileSelectPopup(self, file_types=file_types)

    file = self.file_select_popup.getFile()
    if file:
      self.file_entry.set(file)

  def changedSize(self, entry):

    if entry == Output.other_paper_type:
      self.other_frame.grid(row=0, column=2, columnspan=2, sticky='w')
    else:
      self.other_frame.grid_forget()

  def changedFormat(self, entry):

    file_suffix = file_suffixes.get(entry)
    if not file_suffix:
      return

    file_name = self.file_entry.get()
    if not file_name:
      return

    for suffix in format_suffixes:
      if file_name.endswith(suffix):
        if suffix != file_suffix:
          n = len(suffix)
          file_name = file_name[:-n] + file_suffix
          self.file_entry.set(file_name)
        break
    else:
      file_name = file_name + file_suffix
      self.file_entry.set(file_name)

  # width and height are of plot, in pixels
  def getOutputHandler(self, width, height, fonts = None):

    if not fonts:
      fonts = []
    else:
      fonts = list(fonts)

    for n in range(len(fonts)):
      if fonts[n] == 'Times':
        fonts[n] = 'Times-Roman'

    self.setOptionValues()

    if not self.file_name:
      showError('No file', 'No file specified', parent=self)
      return None

    if os.path.exists(self.file_name):
      if not showYesNo('File exists', 'File "%s" exists, overwrite?' % self.file_name, parent=self):
        return None

    if (self.paper_type == Output.other_paper_type):
      paper_size = self.other_size + [ self.other_unit ]
    else:
      paper_size = paper_sizes[self.paper_type]
    output_scaling = self.scaling / 100.0

    font = 'Times-Roman'
    border_text = {}
    for decoration in self.border_decoration:
      if (decoration == 'Time & date'):
        location = 'se'
        text = time.ctime(time.time())
      elif (decoration == 'File name'):
        location = 'sw'
        text = self.file_name
      else:
        continue # should not be here
      border_text[location] = (text, font, 12)
    if (self.title):
      location = 'n'
      border_text[location] = (self.title, font, 18)

    if font not in fonts:
      fonts.append(font)

    outputHandler = PrintHandler.getOutputHandler(self.file_name, width, height,
                              output_scaling=output_scaling, paper_size=paper_size,
                              paper_orientation=self.paper_orientation, output_style=self.output_style,
                              output_format=self.output_format, border_text=border_text,
                              fonts=fonts, do_outline_box=self.doOutlineBox)

    return outputHandler

  def getAspectRatio(self):

    self.setOptionValues()

    if self.paper_type == Output.other_paper_type:
      paper_size = self.other_size
    else:
      paper_size = paper_sizes[self.paper_type]

    r = paper_size[1] / paper_size[0]
    if self.paper_orientation == 'Landscape':
      r = 1.0 / r

    return r
