 
"""
======================COPYRIGHT/LICENSE START==========================

EditObjectPopup.py: <write function here>

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

from memops.universal.Io import importModule
from memops.universal.Util import upperFirst

from memops.general.Constants import infinity, apiSubDirs
from memops.general import Implementation

from memops.metamodel.ImpConstants import parent_hierarchy, child_hierarchy, no_hierarchy, changeable

from memops.gui.ButtonList import ButtonList
from memops.gui.CheckButtons import CheckButtons
from memops.gui.DataEntry import askString
from memops.gui.Entry import Entry
from memops.gui.FloatEntry import FloatEntry
from memops.gui.Frame import Frame
from memops.gui.IntEntry import IntEntry
from memops.gui.Label import Label
from memops.gui.MessageReporter import showOkCancel, showError
from memops.gui.PulldownMenu import PulldownMenu
from memops.gui.ScrolledFrame import ScrolledFrame
from memops.gui.ToggleLabel import ToggleLabel

from memops.editor.BasePopup import BasePopup
from memops.editor.ObjectTable import ObjectTable
from memops.editor.ObjectTablePopup import ObjectTablePopup
from memops.editor.Util import getConcreteClasses, getKeyList, getObjectKey

title_col = 0
class_col = 1
name_col = 2
value_col = 3
type_col = 4
card_col = 5
note_col = 6
ncols = 7

# for second link row
button_col = 0
table_col = 1

name_bg = '#eeffee'
value_bg = '#eeeeff'

editObjectPopups = {}
createObjectPopups = {}

otherMenuText = 'other...'

class EditObjectPopup(BasePopup):

  def __init__(self, guiParent, metaclass, object = None, editMode = True,
               objParent = None, *args, **kw):

    if (not kw.has_key('project')):
      if (object is not None):
        project = object.root
      elif (objParent is not None):
        project = objParent.root
      else:
        project = None
      kw['project'] = project

    self.guiParent = guiParent
    self.metaclass = metaclass
    self.object = object
    self.editMode = editMode
    self.objParent = objParent
    self.myArgs = args
    self.myKw = kw.copy()

    if (editMode):
      t = 'Editor'
    else:
      t = 'Creator'
    kw['title'] = '%s for %s' % (t, metaclass.name)

    kw['popup_name'] = t + '_for_' + metaclass.name

    BasePopup.__init__(self, guiParent, *args, **kw)

    if (editMode):
      editObjectPopups[metaclass] = self
    else:
      createObjectPopups[metaclass] = self

  def body(self, master):

    master.grid_rowconfigure(0, weight=1)
    master.grid_columnconfigure(0, weight=1)

    # get wild config iterations unless doExtraConfig=False
    frame = ScrolledFrame(master, doExtraConfig=False, width=600, height=300)
    frame.grid(row=0, column=0, sticky=Tkinter.NSEW)
    self.parent_frame = frame.frame

    self.edit_widget = None
    self.keyList = getKeyList(self.metaclass, includeRoot=True)
    self.createWidgets()
    self.createBottomButtons(master)
    self.setObject(self.object)

    self.roleFuncs = {}
    for name in self.metaclass.roleAllNames:
      role = self.metaclass.elementDict[name]
      if (self.showRole(role)):
        # because of loop need role=role else all get bound to last role
        f = lambda obj, role=role: self.setRoleValue(role)
        self.roleFuncs[role] = f

    if (self.editMode):
      self.doRegisters()

  def doRegisters(self):

    self.registerNotify(self.updatedObject, self.metaclass.qualifiedName(), '')
    self.registerNotify(self.deletedObject, self.metaclass.qualifiedName(), 'delete')

    for name in self.metaclass.roleAllNames:
      role = self.metaclass.elementDict[name]
      if (self.showRole(role)):
        f = self.roleFuncs[role]
        classes = getConcreteClasses(role.otherClass)
        for clazz in classes:
          # do not need '' because tables use keys only
          #self.registerNotify(f, clazz.qualifiedName(), '')
          self.registerNotify(f, clazz.qualifiedName(), '__init__')
          self.registerNotify(f, clazz.qualifiedName(), 'delete')

  # unregisters dealt with by BasePopup

  def updatedObject(self, object):

    if (object == self.object):
      self.setObject(object)

  def deletedObject(self, object):

    if (object == self.object):
      self.setObject(None)
      self.close()

  def createWidgets(self):

    if (not self.editMode):
      self.creatorMap = {}

    self.parent_frame.grid_columnconfigure(value_col, weight=1)

    self.widget_dict = {}

    row = 0

    self.title_label = Label(self.parent_frame, text=self.title())
    row = row + 1

    if (self.editMode):
      self.key_toggle = ToggleLabel(self.parent_frame, text='Key:',
                                      callback=self.gridWidgets, isArrowClosed=False)
      row = row + 1

      for key in self.keyList:
        self.createKey(key)
        row = row + 1

    self.attr_toggle = ToggleLabel(self.parent_frame, text='Attributes: ',
                                   callback=self.gridWidgets, isArrowClosed=False)
    if (self.editMode):
      entries = [ 'if direct', 'if set' ]
      self.attr_buttons = CheckButtons(self.parent_frame, entries=entries,
                                       selected=entries, select_callback=self.gridWidgets)
    row = row + 1

    for name in self.metaclass.attributeAllNames:
      attr = self.metaclass.elementDict[name]
      if (self.showAttr(attr)):
        self.createAttr(attr)
        if (not self.editMode):
          if ((attr.defaultValue is not None) or (attr.hicard == 1)):
            self.creatorMap[attr.name] = attr.defaultValue
          else:
            self.creatorMap[attr.name] = []
        attr.row = row
        row = row + 1

    self.link_toggle = ToggleLabel(self.parent_frame, text='Links: ',
                                   callback=self.gridWidgets, isArrowClosed=False)
    if (self.editMode):
      entries = [ 'if direct', 'if set' ]
      self.link_buttons = CheckButtons(self.parent_frame, entries=entries,
                                       selected=entries, select_callback=self.gridWidgets)
    row = row + 1

    for name in self.metaclass.roleAllNames:
      role = self.metaclass.elementDict[name]
      if (self.showRole(role)):
        if (not self.editMode):
          if (role.hierarchy == parent_hierarchy):
            self.creatorMap[role.name] = self.objParent
          elif (role.hicard == 1):
            self.creatorMap[role.name] = None
          else:
            self.creatorMap[role.name] = []
        classes = getConcreteClasses(role.otherClass)
        for clazz in classes:
          self.createLink(role, clazz)
          row = row + 1

  def createBottomButtons(self, parent):

    if (self.editMode):
      texts = []
      commands = []
      if (self.metaclass.parentRole):
        texts.extend([ 'Parent', 'Siblings' ])
        commands.extend([ self.gotoParent, self.showSiblings ])
        if (self.metaclass.parentRole.otherClass.parentRole):
          texts.extend([ 'All' ])
          commands.extend([ self.showAll ])
      texts.extend([ 'Delete', 'Close' ])
      commands.extend([ self.deleteObject, self.close ])
    else:
      texts = [ 'Create', 'Cancel' ]
      commands = [ self.createObject, self.close ]
    bottom_buttons = ButtonList(parent, texts=texts, commands=commands,
                                direction=Tkinter.HORIZONTAL, expands=True)
    bottom_buttons.grid(row=2, column=0, columnspan=2, sticky=Tkinter.EW)

  def createKey(self, key):

    attr = key[-1]
    s = attr.name

    if (len(key) > 1):
      if (type(key[-2]) == type(0)):
        role = key[-3]
        n = key[-2]
        t = '%s[%d]' % (role.otherClass.name, n)
      else:
        role = key[-2]
        t = role.otherClass.name
    else:
      t = self.metaclass.name

    title_label = Label(self.parent_frame)
    class_label = Label(self.parent_frame, text=t, anchor=Tkinter.W)
    name_label = Label(self.parent_frame, text=s, anchor=Tkinter.W, bg=name_bg)
    value_label = Label(self.parent_frame, anchor=Tkinter.W, bg=value_bg)

    self.widget_dict[key] = (title_label, class_label, name_label, value_label)

  def createAttr(self, attr):

    title_label = Label(self.parent_frame)
    class_label = Label(self.parent_frame, text=attr.clazz.name, anchor=Tkinter.W)
    name_label = Label(self.parent_frame, text=attr.name, anchor=Tkinter.W, bg=name_bg)
    value_label = Label(self.parent_frame, anchor=Tkinter.W, bg=value_bg)
    type_label = Label(self.parent_frame, text=attr.dataType.name, anchor=Tkinter.W)
    card_label = Label(self.parent_frame, text=self.getCardinality(attr), anchor=Tkinter.W)
    note_label = Label(self.parent_frame, text=self.getNote(attr), anchor=Tkinter.W)

    if (self.isEditableAttr(attr)):
      dataType = attr.dataType
      if (dataType.enumeration):
        # below assumes all non-Boolean enumerations are strings (probably true)
        if (dataType.name == 'Boolean'):
          entries = ['True', 'False']
        else:
          entries = list(dataType.enumeration)
        if (dataType.isOpen):
          entries.append(otherMenuText)
          callback = lambda ind, value: self.updateMenuAttr(attr, value)
        else:
          callback = lambda ind, value: self.updateAttr(attr)
        edit_widget = PulldownMenu(self.parent_frame, entries=entries,
                        callback=callback, do_initial_callback=False, force_callback=True)
      else:
        if (dataType.name in ('Float', 'Double')):
          Widget = FloatEntry
        elif (dataType.name in ('Int', 'Long')):
          Widget = IntEntry
        else:
          Widget = Entry
        if (attr.hicard == 1):
          isArray = False
        else:
          isArray = True
        edit_widget = Widget(self.parent_frame, isArray=isArray,
                             returnCallback=lambda event: self.updateAttr(attr))
      edit_widget.bind('<KeyPress-Escape>', lambda event: self.cancelEditAttr())
      value_label.bind('<Double-1>', lambda event: self.editAttr(attr))
    else:
      edit_widget = None

    self.widget_dict[attr] = (title_label, class_label, name_label, value_label,
                              type_label, card_label, note_label, edit_widget)

  def isEditableAttr(self, attr):

    return (not self.editMode) or (attr.changeability == changeable and not attr.isDerived)

  def editAttr(self, attr):

    if (self.edit_widget):
      self.cancelEditAttr()
    edit_widget = self.widget_dict[attr][-1]
    if (self.editMode):
      value = getattr(self.object, attr.name)
    else:
      value = self.creatorMap[attr.name]
    if (attr.dataType.name == 'Boolean'):
      if (value):
        value = 'True'
      else:
        value = 'False'

    dataType = attr.dataType
    if (dataType.enumeration and dataType.isOpen):
      if (value not in edit_widget.entries):
        entries = edit_widget.entries + [ value ]
        edit_widget.replace(entries, len(entries)-1)

    edit_widget.set(value)
    edit_widget.focus()
    edit_widget.grid(row=attr.row, column=value_col, sticky=Tkinter.EW)
    self.edit_widget = edit_widget

  def updateMenuAttr(self, attr, value):

    if (value == otherMenuText):

      # TBD: assumes all open enumerations are strings (probably true)
      dataType = attr.dataType
      value = askString('Input entry', 'Input new entry for "%s"' % attr.name, parent=self)
      if (value is None):
        self.cancelEditAttr()
        return

    self.updateAttr(attr, value)

  def updateAttr(self, attr, value = None):

    if (self.edit_widget):
      if (value is None):
        value = self.edit_widget.get()
      if (attr.dataType.name == 'Boolean'):
        if (value == 'True'):
          value = True
        else:
          value = False
      if (self.editMode):
        try:
          setattr(self.object, attr.name, value)
        except Implementation.ApiError, e:
          showError('Setting attribute', e.error_msg, parent=self)
      else:
        self.creatorMap[attr.name] = value
        self.setAttrValue(attr)
      self.cancelEditAttr()

  def cancelEditAttr(self):

    if (self.edit_widget):
      self.edit_widget.grid_forget()
      self.edit_widget = None

  def createLink(self, role, clazz):

    title_label = Label(self.parent_frame)
    class_label = ToggleLabel(self.parent_frame, text=role.clazz.name,
                              callback=self.gridWidgets, isArrowClosed=True)
    class_label.label.config(anchor=Tkinter.W)
    name_label = Label(self.parent_frame, text=role.name, anchor=Tkinter.W, bg=name_bg)
    value_label = Label(self.parent_frame)
    type_label = Label(self.parent_frame, text=clazz.name, anchor=Tkinter.W)
    card_label = Label(self.parent_frame, text=self.getCardinality(role), anchor=Tkinter.W)
    note_label = Label(self.parent_frame, text=self.getNote(role), anchor=Tkinter.W)
 
    link_frame = Frame(self.parent_frame)
    link_frame.grid_rowconfigure(0, weight=1)
    link_frame.grid_columnconfigure(table_col, weight=1)

    # table must be created first
    table = ObjectTable(link_frame, clazz, initialRows=3)
 
    texts = [ 'Goto' ]
    commands = [ lambda: self.gotoObject(table, clazz) ]

    if (role.hierarchy == child_hierarchy):

      texts.extend([ 'Create', 'Delete' ])
      commands.extend([ lambda: self.createChild(clazz),
                        lambda: self.deleteChild(table) ])

    elif (not role.isDerived and (not self.editMode or 
          (role.changeability == changeable and (role.locard != role.hicard)))):

      if (role.hicard == 1):
        texts.extend([ 'Set', 'Unset' ])
        commands.extend([ lambda: self.setLink(role, clazz),
                          lambda: self.unsetLink(role) ])
      else:
        texts.extend([ 'Add', 'Remove' ])
        commands.extend([ lambda: self.addLink(role, clazz),
                          lambda: self.removeLink(table, role) ])

    buttons = ButtonList(link_frame, texts=texts, commands=commands,
                         direction=Tkinter.VERTICAL)

    self.widget_dict[(role, clazz)] = (title_label, class_label, name_label, value_label,
                                       type_label, card_label, note_label,
                                       link_frame, buttons, table)

    table.callback = lambda obj, row, col: self.setButtonState(table, role, clazz, buttons)

  def gridWidgets(self, *extra):

    row = 0
    self.title_label.grid(row=row, column=title_col, columnspan=ncols, sticky=Tkinter.W)
    row = row + 1

    #self.parent_frame.grid_rowconfigure(row, weight=1)

    if (self.editMode):
      self.key_toggle.grid(row=row, column=title_col, columnspan=2, sticky=Tkinter.W)
      row = row + 1

      for key in self.keyList:
        self.gridKey(key, row)
        row = row + 1

    #self.parent_frame.grid_rowconfigure(row, weight=1)

    self.attr_toggle.grid(row=row, column=title_col, columnspan=2, sticky=Tkinter.W)
    if (self.editMode):
      self.attr_buttons.grid(row=row, column=2, columnspan=ncols-2, sticky=Tkinter.W)
    row = row + 1

    for name in self.metaclass.attributeAllNames:
      attr = self.metaclass.elementDict[name]
      if (self.showAttr(attr)):
        self.gridAttr(attr, row)
        row = row + 1

    #self.parent_frame.grid_rowconfigure(row, weight=1)

    self.link_toggle.grid(row=row, column=title_col, columnspan=2, sticky=Tkinter.W)
    if (self.editMode):
      self.link_buttons.grid(row=row, column=2, columnspan=ncols-2, sticky=Tkinter.W)
    row = row + 1

    for name in self.metaclass.roleAllNames:
      role = self.metaclass.elementDict[name]
      if (self.showRole(role)):
        classes = getConcreteClasses(role.otherClass)
        for clazz in classes:
          self.gridLink(role, clazz, row)
          row = row + 2

  def gridKey(self, key, row):

    widgets = self.widget_dict[key]
    self.gridWidgetRow(widgets, row, self.key_toggle.isArrowClosed)

  def gridAttr(self, attr, row):

    if (self.attr_toggle.isArrowClosed or \
        (self.editMode and self.attr_buttons.isEntrySelected('if direct') and not self.metaobjIsDirect(attr)) or \
        (self.editMode and self.attr_buttons.isEntrySelected('if set') and not self.attrIsSet(attr))):
      isClosed = True
    else:
      isClosed = False

    widgets = self.widget_dict[attr][:-1]
    self.gridWidgetRow(widgets, row, isClosed)

  def gridLink(self, role, clazz, row):

    if (self.link_toggle.isArrowClosed or \
        (self.editMode and self.link_buttons.isEntrySelected('if direct') and not self.metaobjIsDirect(role)) or \
        (self.editMode and self.link_buttons.isEntrySelected('if set') and not self.roleIsSet(role, clazz))):
      isClosed = True
    else:
      isClosed = False

    widgets = self.widget_dict[(role, clazz)]

    if (isClosed):
      self.gridWidgetRow(widgets, row, isClosed)
    else:
      row_widgets = widgets[:ncols]
      self.gridWidgetRow(row_widgets, row, isClosed)
      row = row + 1
      class_toggle = row_widgets[class_col]
      if (class_toggle.isArrowClosed):
        self.gridWidgetRow(widgets[ncols:], row, True)
      else:
        (link_frame, buttons, table) = widgets[ncols:]
        link_frame.grid(row=row, column=1, columnspan=ncols-1, sticky=Tkinter.NSEW)
        buttons.grid(row=0, column=button_col)
        table.grid(row=0, column=table_col, columnspan=ncols-2, sticky=Tkinter.NSEW)

  def gridWidgetRow(self, widgets, row, isClosed):

    if (isClosed):
      for widget in widgets:
        widget.grid_forget()
    else:
      n = 0
      for widget in widgets:
        widget.grid(row=row, column=n, sticky=Tkinter.NSEW, padx=3)
        n = n + 1

  def setObject(self, object = None):

    self.object = object

    if (object or not self.editMode):
      self.setObjectValue()

    self.gridWidgets()

  def setObjectValue(self):

    object = self.object
    if (self.editMode and not object):
      return

    if (self.editMode):
      value = getObjectKey(object, self.keyList)
      n = 0
      for key in self.keyList:
        label = self.widget_dict[key][value_col]
        label.set(text=value[n])
        n = n + 1

    for name in self.metaclass.attributeAllNames:
      attr = self.metaclass.elementDict[name]
      if (self.showAttr(attr)):
        self.setAttrValue(attr)

    for name in self.metaclass.roleAllNames:
      role = self.metaclass.elementDict[name]
      if (self.showRole(role)):
        self.setRoleValue(role)

  def setAttrValue(self, attr):

    label = self.widget_dict[attr][value_col]
    if (self.editMode):
      value = getattr(self.object, attr.name)
    else:
      value = self.creatorMap[attr.name]
    if (value is None):
      text = ''
    elif (attr.dataType.name == 'Boolean'):
      if (value):
        text = 'True'
      else:
        text = 'False'
    else:
      text = value
    label.set(text=text)

  def setRoleValue(self, role):

    #print 'setRoleValue', self.metaclass.name, role.name

    classes = getConcreteClasses(role.otherClass)
    for clazz in classes:
      widgets = self.widget_dict[(role, clazz)]
      label = widgets[value_col]
      objects = self.getRoleObjects(role, clazz)
      label.set(text=len(objects))
      buttons = widgets[ncols+1+button_col]
      table = widgets[ncols+1+table_col]
      table.setObjects(objects)
      self.setButtonState(table, role, clazz, buttons)

  def clearDeletedObjects(self, role):

    # this must be a one-way cross-link

    #print 'clearDeletedObjects', self.metaclass.name, role.name

    if (not self.object or self.object.isDeleted):
      return

    if (self.editMode):
      value = getattr(self.object, role.name)
      if (role.hicard == 1):
        if (value.isDeleted):
          setattr(self.object, role.name, None)
      else:
        value = [ v for v in value if not v.isDeleted ]
        setattr(self.object, role.name, value)
    else:
      value = self.creatorMap[role.name]
      if (role.hicard == 1):
        if (value.isDeleted):
          self.creatorMap[role.name] = None
          self.setRoleValue(role)
      else:
        value = [ v for v in value if not v.isDeleted ]
        self.creatorMap[role.name] = value
        self.setRoleValue(role)

  def getRoleObjects(self, role, clazz = None):

    if (self.editMode):
      if (not self.object or self.object.isDeleted):
        if (role.hicard == 1):
          value = None
        else:
          value = []
      else:
        value = getattr(self.object, role.name)
    else:
      value = self.creatorMap[role.name]

    if (role.hicard == 1):
      if (value is None):
        objects = []
      else:
        objects = [value]
    else:
      objects = value

    n = len(objects)
    objects = [ obj for obj in objects if not obj.isDeleted ]
    if (len(objects) < n): # something has been deleted
      self.after_idle(lambda: self.clearDeletedObjects(role))

    if (clazz):
      objects = [ obj for obj in objects if obj.metaclass is clazz ]

    return objects

  def setButtonState(self, table, role, clazz, buttons):

    b = buttons.buttons
    if (table.currentObject):
      state = Tkinter.NORMAL
    else:
      state = Tkinter.DISABLED
    b[0].config(state=state)

    objects = self.getRoleObjects(role, clazz)
    nobjs = len(objects)

    if (role.hierarchy == child_hierarchy):

      if ((role.hicard == infinity) or (nobjs < role.hicard)):
        state = Tkinter.NORMAL
      else:
        state = Tkinter.DISABLED
      b[1].config(state=state)

      if (table.currentObject and (nobjs > role.locard)):
        state = Tkinter.NORMAL
      else:
        state = Tkinter.DISABLED
      b[2].config(state=state)

    elif (not role.isDerived and (not self.editMode or 
          (role.changeability == changeable and (role.locard != role.hicard)))):

      if (role.hicard == 1):

        state = Tkinter.NORMAL
        b[1].config(state=state)

        if (nobjs > 0):
          state = Tkinter.NORMAL
        else:
          state = Tkinter.DISABLED
        b[2].config(state=state)

      else:

        if (not self.editMode or (role.hicard == infinity) or (nobjs < role.hicard)):
          state = Tkinter.NORMAL
        else:
          state = Tkinter.DISABLED
        b[1].config(state=state)

        if (not self.editMode or (table.currentObject and (nobjs > role.locard))):
          state = Tkinter.NORMAL
        else:
          state = Tkinter.DISABLED
        b[2].config(state=state)

  def metaobjIsDirect(self, metaobj):

    if (metaobj.clazz is self.metaclass):
      return True
    else:
      return False

  def attrIsSet(self, attr):

    if (not self.object):
      return False

    objects = getattr(self.object, attr.name)

    if (attr.hicard == 1):
      if (objects is None):
        objects = []
      else:
        objects = [ objects ]

    if (objects):
      return True
    else:
      return False

  def roleIsSet(self, role, clazz):

    if (not self.object):
      return False

    objects = self.getRoleObjects(role, clazz)

    if (objects):
      return True
    else:
      return False

  def showAttr(self, attr):

    if attr.clazz.qualifiedName() == 'memops.Implementation.Project' and attr.name == 'override':
      return False # TBD: hack for now, ignore override (will work in new API)

    return self.editMode or ((attr.name != 'serial') and (not attr.isDerived))

  def showRole(self, role):

    return self.editMode or ((not role.isDerived) and (role.locard != 0)
                             and (role.hierarchy != child_hierarchy))

  def getCardinality(self, metaobj):

    if (metaobj.hicard == infinity):
      hicard = '*'
    else:
      hicard = metaobj.hicard
    card = '%s:%s' % (metaobj.locard, hicard)

    return card

  def getNote(self, metaobj):

    # first condition below for roles
    if (hasattr(metaobj, 'hierarchy') and metaobj.hierarchy):
      text = metaobj.hierarchy
    elif (metaobj.name in metaobj.clazz.keyNames):
      text = 'key'
    elif (metaobj.isDerived):
      text = 'derived'
    elif (metaobj.changeability != changeable):
      text = 'frozen'
    else:
      text = ''

    return text

  def gotoObject(self, table, clazz):

    otherObject = table.currentObject
    if (not otherObject):
      return

    openEditObjectPopup(self.guiParent, metaclass=clazz, object=otherObject,
                        *self.myArgs, **self.myKw)
    
  def createChild(self, clazz):
    
    openCreateObjectPopup(self.guiParent, metaclass=clazz, objParent=self.object,
                          *self.myArgs, **self.myKw)

  def deleteChild(self, table):

    object = table.currentObject
    if (object):
      if (showOkCancel('Delete object', 'Are you sure you want to delete selected object?',
                       parent=self)):
        object.delete()

  def setLink(self, role, clazz):

    if (self.editMode):
      root = self.object.root
    else:
      root = self.objParent.root

    popup = ObjectTablePopup(self, root, clazz, modal=True)
    selected = popup.selected
    popup.destroy()

    if (selected):
      if (self.editMode):
        try:
          func = getattr(self.object, 'set%s' % upperFirst(role.baseName))
          func(selected)
        except Implementation.ApiError, e:
          showError('Setting link', e.error_msg, parent=self)
      else:
        self.creatorMap[role.name] = selected
        self.setRoleValue(role)

  def unsetLink(self, role):

    if (self.editMode):
      try:
        func = getattr(self.object, 'set%s' % upperFirst(role.baseName))
        func(None)
      except Implementation.ApiError, e:
        showError('Unsetting link', e.error_msg, parent=self)
    else:
      self.creatorMap[role.name] = None
      self.setRoleValue(role)

  def addLink(self, role, clazz):

    if (self.editMode):
      root = self.object.root
    else:
      root = self.objParent.root

    popup = ObjectTablePopup(self, root, clazz, modal=True)
    selected = popup.selected
    popup.destroy()

    if (selected):
      if (self.editMode):
        try:
          func = getattr(self.object, 'add%s' % upperFirst(role.baseName))
          func(selected)
        except Implementation.ApiError, e:
          showError('Adding link', e.error_msg, parent=self)
      else:
        self.creatorMap[role.name].append(selected)
        self.setRoleValue(role)

  def removeLink(self, table, role):

    selected = table.currentObject
    if (selected):
      if (self.editMode):
        try:
          func = getattr(self.object, 'remove%s' % upperFirst(role.baseName))
          func(selected)
        except Implementation.ApiError, e:
          showError('Removing link', e.error_msg, parent=self)
      else:
        self.creatorMap[role].remove(selected)
        self.setRoleValue(role)

  def gotoParent(self):

    openEditObjectPopup(self.guiParent, metaclass=self.metaclass.parentRole.otherClass,
                        object=self.object.parent, *self.myArgs, **self.myKw)

  def showSiblings(self):

    popup = ObjectTablePopup(self, self.object.parent, self.metaclass, onlyShow=True, modal=True)
    popup.destroy()

  def showAll(self):

    popup = ObjectTablePopup(self, self.object.root, self.metaclass, onlyShow=True, modal=True)
    popup.destroy()

  def createObject(self):

    package = self.metaclass.package.qualifiedName()
    parts = package.split('.')
    parts[1:1] = apiSubDirs
    moduleName = '.'.join(parts)

    try:
      module = importModule(moduleName)
    except:
      showError('Finding module', 'Could not find module "%s"' % moduleName, parent=self)
      return

    try:
      Clazz = getattr(module, self.metaclass.name)
    except:
      showError('Finding class',
          'Could not find module "%s", class "%s"' % (moduleName, self.metaclass.name),
          parent=self)
      return

    try:
      attrlinks = self.creatorMap.copy()
      del attrlinks[self.metaclass.parentRole.name] # remove parent link
      object = Clazz(self.objParent, **attrlinks)
    except Implementation.ApiError, e:
      showError('Creating object', e.error_msg, parent=self)
      return

    self.close() 
    #openEditObjectPopup(self.guiParent, metaclass=self.metaclass, object=object, 
    #                    *self.myArgs, **self.myKw)

  def deleteObject(self):

    if (showOkCancel('Delete object', 'Are you sure you want to delete this object?',
                     parent=self)):
      self.object.delete()

def openEditObjectPopup(guiParent, metaclass, object = None, *args, **kw):

  popup = editObjectPopups.get(metaclass)
  if (popup):
    popup.setObject(object)
    popup.open()
  else:
    # editObjectPopups updated inside constructor
    # this way an outside application can start up this application
    # going directly via EditObjectPopup constructor rather than via here
    # (but they must be careful not to trample by opening twice)
    EditObjectPopup(guiParent, metaclass, object, *args, **kw)

def openCreateObjectPopup(guiParent, metaclass, objParent, *args, **kw):

  popup = createObjectPopups.get(metaclass)
  if (popup):
    popup.open()
  else:
    createObjectPopups[metaclass] = EditObjectPopup(guiParent, metaclass, editMode=False,
                                                    objParent=objParent, *args, **kw)

if (__name__ == '__main__'):

  import Tkinter

  from memops.api import Implementation as Impl

  p = Impl.Project(name='test_project')

  root = Tkinter.Tk()

  openEditObjectPopup(root, metaclass=p.metaclass, object=p)

  root.mainloop()
