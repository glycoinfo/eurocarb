import os

from memops.universal.Io import getTopDirectory
from memops.api import Implementation


from ccpnmr.format.process.linkResonances import linkResonances
from ccpnmr.format.help.Util import writeCcpnStyle, getHtmlDir, colourValues

from msd.software.Util import HtmlPage

if __name__ == '__main__':

  keywordInfo = linkResonances.keywordInfo

  htmlDir = getHtmlDir()
  
  styleSheet = "ccpnStyle.css"
  writeCcpnStyle(htmlDir,styleSheet)

  ccpnProject = Implementation.MemopsRoot(name = 'test')
  
  htmlFileName = os.path.join(htmlDir,"linkResonances.html")
  mainPage = HtmlPage(htmlFileName, htmlBaseName = "Void", styleSheet = styleSheet)
    
  colspan = 3
  
  mainPage.setupHtml("LinkResonances parameters.", colspan = colspan)
  mainPage.mainPageHtml("Parameters for linkResonances class.")

  mainPage.setEmptyRow(colspan = colspan)
  mainPage.addMainTableRow()
  mainPage.addMainTableColumn("Rows highlighted in blue are mandatory.",addText = ' colspan=%d' % colspan)
  mainPage.closeMainTableRow()
  
  addHeaderText = ' class="pageHead"'

  #
  # Main info
  #
 
  mainPage.setEmptyRow(colspan = colspan)
  mainPage.addSubHeading("linkResonances(ccpnProject, ...)",colspan = colspan)

  mainPage.addMainTableRow()
  mainPage.addMainTableColumn("Keyword",addText = addHeaderText)
  mainPage.addMainTableColumn("Default",addText = addHeaderText)
  mainPage.addMainTableColumn("Information",addText = addHeaderText)
  mainPage.closeMainTableRow()

  keywords = keywordInfo.keys()
  keywords.sort()
  
  for keyword in keywords:

    (default,mandatory,infoText) = keywordInfo[keyword]

    if mandatory:
      addText = ' class="pagesel"'
      #firstColumnText = '*'
    else:
      addText = ' class="pageBody"'
      #firstColumnText = ""

    #if isAutomatic:
    #  infoText = infoText[:-1] + " (SET AUTOMATICALLY)."

    # Write column header info
    mainPage.addMainTableRow()
    #mainPage.addMainTableColumn(firstColumnText,addText = addText)
    mainPage.addMainTableColumn(keyword.strip(),addText = addText)

    if type(default) == type(''):
      default = "'%s'" % default
      default = default.replace(' ','&nbsp;')

    mainPage.addMainTableColumn("%s" %  colourValues(str(default),allNumbers = True),addText = addText)
    
    htmlInfoText = ""
    for infoLine in infoText.split("\n"):
      infoLine = infoLine.lstrip()
      if infoLine:
        infoLine = infoLine.replace(" ","&nbsp;")
        htmlInfoText += "%s<BR>" % infoLine
    
    htmlInfoText = colourValues(htmlInfoText)
    
    mainPage.addMainTableColumn(htmlInfoText,addText = addText)

    mainPage.closeMainTableRow()
         
  mainPage.closeMainTable()
  mainPage.finishHtml()    

