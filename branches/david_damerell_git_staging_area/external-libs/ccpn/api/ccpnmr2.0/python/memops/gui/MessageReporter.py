
"""
======================COPYRIGHT/LICENSE START==========================

MessageReporter.py: <write function here>

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
import tkMessageBox

def showError(title, message, parent = None):

  if (parent):
    tkMessageBox.showerror(title, message, parent=parent)
  else:
    tkMessageBox.showerror(title, message)

def showInfo(title, message, parent = None):

  if (parent):
    tkMessageBox.showinfo(title, message, parent=parent)
  else:
    tkMessageBox.showinfo(title, message)

def showOkCancel(title, message, parent = None):

  if (parent):
    return tkMessageBox.askokcancel(title, message, parent=parent)
  else:
    return tkMessageBox.askokcancel(title, message)

def showYesNo(title, message, parent = None):

  if (parent):
    return tkMessageBox.askyesno(title, message, parent=parent)
  else:
    return tkMessageBox.askyesno(title, message)

def showWarning(title, message, parent = None):

  if (parent):
    return tkMessageBox.showwarning(title, message, parent=parent)
  else:
    return tkMessageBox.showwarning(title, message)

class MessageReporter:

  def showError(self, title, message, parent = None, *args, **kw):
 
    showError(title, message, parent)
 
  def showInfo(self, title, message, parent = None, *args, **kw):
 
    showInfo(title, message, parent)
 
  def showWarning(self, title, message, parent = None, *args, **kw):

    showWarning(title, message, parent)

  def showOkCancel(self, title, message, parent = None, *args, **kw):
 
    return showOkCancel(title, message, parent)
 
  def showYesNo(self, title, message, parent = None, *args, **kw):
 
    return showYesNo(title, message, parent)

messageReporter = MessageReporter()

if (__name__ == '__main__'):
 
  showError('title', 'error message')
  s = showOkCancel('title', 'ok message')
  print s, type(s)
  s = showOkCancel('title', 'ok2 message')
  print s, type(s)
  s = showYesNo('title', 'yes message')
  print s, type(s)
  s = showYesNo('title', 'yes2 message')
  print s, type(s)
  showWarning('title', 'warning message')
  showInfo('title', 'info message')
  messageReporter.showError('error title', 'error message')
  messageReporter.showInfo('info title', 'info message')
  messageReporter.showWarning('warning title', 'warning message')
  print messageReporter.showOkCancel('ok cancel title', 'ok cancel message')
  print messageReporter.showYesNo('yes no title', 'yes no message')
