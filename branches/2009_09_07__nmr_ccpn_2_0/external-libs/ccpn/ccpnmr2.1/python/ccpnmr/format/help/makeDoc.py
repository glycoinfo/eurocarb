
"""
======================COPYRIGHT/LICENSE START==========================

makeDoc.py: Exports .html to ../html directory for documentation.

Copyright (C) 2005 Wim Vranken (European Bioinformatics Institute)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../../license/LGPL.license
 
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

- contact Wim Vranken (wim@ebi.ac.uk)
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
import sys

popupList = ['AcqProcParsEdit',
             'AtomSelect',
             'ChainExport',
             'ChainLink',
             'CreateShiftList',
 	           'DataDimRefSelectByPeakDim',
             'ExperimentCreate',
             'ExportFormat',
	            'ImportFormat',
             'ImportFormatComponent',
             'LinkResonances',
	            'NamingSystem',
             'PeakDimSelect',
             'ResonanceGroup',
	            'SelectExperiment',
             'SelectExperimentToShiftList',
             'SingleProchiralStatus',
	            'SingleResonanceStatus',
             'WriteMapping']

def write_top(fp, title):

  fp.write('''<html>
<head>
<title>%s</title>
</head>
<body bgcolor="#FFFFFF">
''' % title)

def write_bottom(fp):

  fp.write('''
</body>
</html>''')

def write_useful_links(fp, prefix = ''):

  if (prefix == 'Glossary'):
    s0 = s1 = ''
  else:
    s0 = '<A HREF="Glossary.html">'
    s1 = '</A>' 

  fp.write('''
<A HREF="index.html">home</A>
|
%sglossary%s
''' % (s0, s1))

html_dir = '../doc'

if (os.path.exists(html_dir)):
  if (not os.path.isdir(html_dir)):
    print '"%s" is not a directory' % html_dir
    sys.exit(1)
else:
  os.mkdir(html_dir, 0755)
 
if (__name__ == '__main__'):
  files = sys.argv[1:]
else:
  files = []

if (files):
  do_popup_list = 0
else:
  do_popup_list = 1
  files = os.listdir(html_dir)
  #for file in files:
  #  fullfile = html_dir + '/' + file
  #  if (os.path.isdir(fullfile)):
  #    print 'warning: not deleting directory "%s"' % fullfile
  #  else:
  #    os.unlink(fullfile)
  #files = os.listdir('.')
  #files = [ file for file in files if file[-4:] == '.txt' ]

# TEMP hack while waiting for this script to die
do_popup_list = 0
files = ('Readme.txt', 'Install.txt')

for file in files:

  prefix = file[:-4]

  if (prefix in ('Readme', 'Install')): # just copy files, otherwise convert to html
    is_html = 0
    out_file = html_dir + '/' + file
  else:
    is_html = 1
    out_file = html_dir + '/' + prefix + '.html'

  fp = open(out_file, 'w')

  if (is_html):
    if (prefix == 'index'):
      title = 'CcpNmr FormatConverter home page'
    elif (prefix in popupList):
      title = '%s help' % prefix
    else:
      title = prefix
    write_top(fp, title)
    if (prefix != 'index'):
      write_useful_links(fp, prefix)

  data = open(file).read()
  fp.write(data)

  if (is_html):
    write_bottom(fp)

  fp.close()

if (do_popup_list):

  files = [ file for file in files if file[:-4] in popupList ]
  files.sort()

  fp = open('%s/Popups.html' % html_dir, 'w')
  write_top(fp, 'Popup list')
  write_useful_links(fp)

  fp.write('<H1>Popup list</H1>\n')
  fp.write('<UL>\n')
  for file in files:
    prefix = file[:-4]
    fp.write('<LI><A HREF="%s.html">%s</A>\n' % (prefix, prefix))
  fp.write('</UL>\n')

  write_bottom(fp)

