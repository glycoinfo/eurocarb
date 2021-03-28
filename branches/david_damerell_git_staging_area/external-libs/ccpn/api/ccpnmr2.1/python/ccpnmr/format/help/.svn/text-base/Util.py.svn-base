import os

def getHtmlDir():
  
  from memops.universal.Io import getTopDirectory

  htmlDir = os.path.join(getTopDirectory(),'python','ccpnmr','format','doc')
  if not os.path.exists(htmlDir):
    os.mkdir(htmlDir)
    
  htmlDir = os.path.join(htmlDir,'parameters')
  if not os.path.exists(htmlDir):
    os.mkdir(htmlDir)

  return htmlDir

def colourValues(text,allNumbers = False):

  text = text.replace("None","<font color='blue'>None</font>")
  text = text.replace("True","<font color='green'>True</font>")
  text = text.replace("False","<font color='red'>False</font>")
  
  text = text.replace("Example:","<B>Example:</B>")
  
  for number in ("-1","0","1","2"):

    if not allNumbers:
      replaceNumber = "%s:" % number
      suffix = ":"
    else:
      replaceNumber = number
      suffix = ""

    text = text.replace(replaceNumber,"<font color='dark orchid'>%s</font>%s" % (number,suffix))
  
  return text

def writeCcpnStyle(htmlDir,styleSheet):

  fout = open(os.path.join(htmlDir,styleSheet),'w')
  
  fout.write("""
body	{
	background-color: #fffff;
	font: 11pt arial,helvetica,sans-serif;
	}
ul, li	{
	font: 11pt arial,helvetica,sans-serif;
	}
p	{
	font: 11pt arial,helvetica,sans-serif;
              margin-top: 8;
              margin-bottom: 8;
              margin-left: 5;
              margin-right: 5;
              text-align: justify;
	}
pre	{
	font: 10pt courier, fixed;
	color: #004000;
              margin-left: 8;
	}
h1	{
	font: bold 16pt arial,helvetica,sans-serif;
	color: #000000;
              margin-top: 4;
              margin-bottom: 1;
	}
h2	{
	font: 12pt arial,helvetica,sans-serif;
	color: #000080;
              margin-top: 4;
              margin-bottom: 1;
	}
h3	{
	font: bold 11pt arial,helvetica,sans-serif;
	color: #000040;
              margin-top: 4;
              margin-bottom: 1;
	}
span	{
	font: 11pt arial,helvetica,sans-serif;
	}
span.item	{
	font: 10pt courier, fixed;
	color: #004000;
	}
span.p2	{
              padding: 8;
	}
span.h1	{
	font: bold 11pt arial,helvetica,sans-serif;
	color: #000080;
	}
span.h2	{
	font: 11pt arial,helvetica,sans-serif;
	color: #000080;
	}
span.h3	{
	font: 11pt arial,helvetica,sans-serif;
	color: #000040;
	}
th {
	font: bold 11pt arial,helvetica,sans-serif;
              padding-left: 3;
              background-color: #000040;
	color: #FFFFFF;
	}

td	{
	font: 12pt arial,helvetica,sans-serif;
	}
td.siteTitle{
	font: bold 14pt arial,helvetica,sans-serif;
              padding: 4;
              background-color: #DDDDFF;
              border-style: solid;
              border-width: 1;
	border-color: #B0B0FF;
	color: #000080;
	}
td.section{
	font: bold 11pt arial,helvetica,sans-serif;
              padding-left: 3;
              background-color: #000040;
	color: #FFFFFF;
	}
td.subheading {
	font: 11pt arial,helvetica,sans-serif;
              padding-left: 5;
              background-color: #DDDDFF;
              border-style: solid;
              border-color: #C0C0FF;
	color: #5050FF;
	}
td.pagesec{
	font: 9pt arial,helvetica,sans-serif;
              border-style: solid;
              border-width: 1;
              border-color: #808080;
              background-color: #D0D0D0;
	color: #808080;
	}
td.pagesel{
	font: 9pt arial,helvetica,sans-serif;
              border-style: solid;
              border-width: 1;
              border-color: #6060FF;
              background-color: #C0C0FF;
	color: #606060;
	}
td.pageHead{
	font: bold 10pt arial,helvetica,sans-serif;
              border-style: solid;
              border-width: 1;
              border-color: #C0C0FF;
              background-color: #E0E0FF;
	color: #000000;
              padding: 3;
	}
td.pageBody{
	font: 10pt arial,helvetica,sans-serif;
              background-color: #E0E0E0;
              padding: 3;
	color: #000000;
	}

a	{
	text-decoration: none;
	color: #800000;
	}
a.menu	{
	text-decoration: none;
	color: #000000;
	}
a.menuSel {
	text-decoration: none;
	color: #000080;
	}
}
""")

  fout.close()
