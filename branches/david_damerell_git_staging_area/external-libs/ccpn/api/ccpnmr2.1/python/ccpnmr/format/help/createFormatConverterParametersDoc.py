import os

from memops.api import Implementation

from ccpnmr.format.general.Constants import allFormatsDict
from ccpnmr.format.general.Util import getFormatConverterInfoDict
from ccpnmr.format.help.Util import writeCcpnStyle, getHtmlDir, colourValues

from msd.software.Util import HtmlPage

if __name__ == '__main__':
  
  (fcInfo,subClassedFunctions) = getFormatConverterInfoDict()

  htmlDir = getHtmlDir()
  
  styleSheet = "ccpnStyle.css"
  writeCcpnStyle(htmlDir,styleSheet)
  
  formatNames = fcInfo.keys()
  formatNames.sort()
  
  for formatName in formatNames:
    
    formatLabel = allFormatsDict[formatName]
    
    #
    # TODO Also specify if it's a 'superclass'!!!
    #
    
    formatFileName = "%s.html" % formatName
    formatHtmlFileName = os.path.join(htmlDir,formatFileName)
    mainPage = HtmlPage(formatHtmlFileName, htmlBaseName = "Void", styleSheet = styleSheet)
    
    formatWidgetFileName = '%s_widgets.html' % formatName
    formatWidgetHtmlFileName = os.path.join(htmlDir,formatWidgetFileName)
    widgetPage = HtmlPage(formatWidgetHtmlFileName, htmlBaseName = "Void", styleSheet = styleSheet)
    

    mainPage.setupHtml("FormatConverter function parameters.", colspan = 3)
    mainPage.mainPageHtml("Import/export functions for %s format." % formatLabel)

    widgetPage.setupHtml("FormatConverter function parameters (widget level).", colspan = 4)
    widgetPage.mainPageHtml("Import/export functions widget information for %s format." % formatLabel)

    tmpPageInfo = ((mainPage,3,formatWidgetFileName,'widget'),(widgetPage,4,formatFileName,'main'))
    for tmpPageIndex in range(len(tmpPageInfo)):
    
      (tmpPage,colspan,otherPageFileName,otherInfo) = tmpPageInfo[tmpPageIndex]
      tmpPage.setEmptyRow(colspan = colspan)
      tmpPage.addMainTableRow()
      tmpPage.addMainTableColumn("Rows highlighted in blue are mandatory.",addText = ' colspan=%d' % colspan)
      tmpPage.closeMainTableRow()
      tmpPage.addMainTableRow()
      tmpPage.addMainTableColumn('Click <a href="%s">here</a> for %s information.' % (otherPageFileName,otherInfo),addText = ' colspan=%d' % colspan)
      tmpPage.closeMainTableRow()
     
    
    
    actionTypes = fcInfo[formatName].keys()
    actionTypes.sort()
    actionTypes.reverse()
    
    for actionType in actionTypes:

      components = fcInfo[formatName][actionType].keys()
      components.sort()

      for component in components:
      
        functionName = fcInfo[formatName][actionType][component][0]
        defaultFileName = fcInfo[formatName][actionType][component][1]

        mandatoryText = ""
        for (IOkeyword, default, mandatory, isAutomatic, infoText, widgetType, widgetDefaults, widgetLabel) in fcInfo[formatName][actionType][component][2]:
          if mandatory:
            if IOkeyword.count('fileName'):
              mandatoryText = "%s=value," % IOkeyword + mandatoryText    
            else:
              mandatoryText += "%s=value," % IOkeyword

        if mandatoryText:
          mandatoryText += "..."


        if functionName in subClassedFunctions.keys():
          superClassFunctionText = " <i>(subclass of %s() method)</i>" % subClassedFunctions[functionName]
        else:
          superClassFunctionText = ""

        for (tmpPage,colspan) in ((mainPage,3),(widgetPage,4)):
          tmpPage.setEmptyRow(colspan = colspan)
          tmpPage.addSubHeading("%s(%s)%s" % (functionName,mandatoryText,superClassFunctionText),colspan = colspan)


        addHeaderText = ' class="pageHead"'


        #
        # Main info
        #

        mainPage.addMainTableRow()
        mainPage.addMainTableColumn("Keyword",addText = addHeaderText)
        mainPage.addMainTableColumn("Default",addText = addHeaderText)
        mainPage.addMainTableColumn("Information",addText = addHeaderText)
        mainPage.closeMainTableRow()

        for curInfo in fcInfo[formatName][actionType][component][2]:
          
          (IOkeyword, default, mandatory, isAutomatic, infoText, widgetType, widgetDefaults, widgetLabel) = curInfo

          if mandatory:
            addText = ' class="pagesel"'
            #firstColumnText = '*'
          else:
            addText = ' class="pageBody"'
            #firstColumnText = ""

          if isAutomatic:
            infoText = infoText[:-1] + " (SET AUTOMATICALLY)."

          # Write column header info
          mainPage.addMainTableRow()
          #mainPage.addMainTableColumn(firstColumnText,addText = addText)
          mainPage.addMainTableColumn(IOkeyword.strip(),addText = addText)

          if type(default) == type(''):
            default = "'%s'" % default
            default = default.replace(' ','&nbsp;')

          mainPage.addMainTableColumn("%s" % colourValues(str(default)),addText = addText)
          mainPage.addMainTableColumn(colourValues(infoText),addText = addText)

          mainPage.closeMainTableRow()

        #
        # Widget level info
        #

        widgetPage.addMainTableRow()
        widgetPage.addMainTableColumn("Keyword", addText = addHeaderText)
        widgetPage.addMainTableColumn("Widget",  addText = addHeaderText)
        widgetPage.addMainTableColumn("Label",   addText = addHeaderText)
        widgetPage.addMainTableColumn("Defaults",addText = addHeaderText)
        widgetPage.closeMainTableRow()

        for (IOkeyword, default, mandatory, isAutomatic, infoText, widgetType, widgetDefaults, widgetLabel) in fcInfo[formatName][actionType][component][2]:

          if mandatory:
            addText = ' class="pagesel"'
            #firstColumnText = '*'
          else:
            addText = ' class="pageBody"'
            #firstColumnText = ""

          if isAutomatic:
            infoText = " (SET AUTOMATICALLY)."
          else:
            infoText = ""

          # Write column header info
          widgetPage.addMainTableRow()
          #mainPage.addMainTableColumn(firstColumnText,addText = addText)
          widgetPage.addMainTableColumn(IOkeyword.strip() + infoText,addText = addText)

          if not widgetType:
            (widgetType,widgetDefaults,widgetLabel) = ('n/a','n/a','n/a')

          widgetPage.addMainTableColumn(widgetType,addText = addText)
          widgetPage.addMainTableColumn(widgetLabel,addText = addText)
          widgetPage.addMainTableColumn(str(widgetDefaults),addText = addText)

          widgetPage.closeMainTableRow()

         
    mainPage.closeMainTable()
    mainPage.finishHtml()    

    widgetPage.closeMainTable()
    widgetPage.finishHtml()    

  #
  # Main page
  #
  
  indexHtmlFileName = os.path.join(htmlDir,"index.html")

  mainPage = HtmlPage(indexHtmlFileName, htmlBaseName = "Void", styleSheet = styleSheet)

  mainPage.setupHtml("FormatConverter function parameters.", colspan = 3)
  mainPage.mainPageHtml("List of available formats.")
  
  rowNumber = 0

  for formatName in formatNames:

    formatLabel = allFormatsDict[formatName]

    # Write column header info
    if not rowNumber % 4:
      mainPage.addMainTableRow()
      
    mainPage.addMainTableColumn('<a href="%s.html">%s</a>' % (formatName,formatLabel))
    
    if not (rowNumber + 1) % 4:
      mainPage.closeMainTableRow()
      
    rowNumber += 1

  if rowNumber % 4:
    mainPage.closeMainTableRow()

  mainPage.setEmptyRow(colspan = 3)  
  mainPage.addMainTableRow()
  mainPage.addMainTableColumn('<a href="linkResonances.html">linkResonances parameters</a>')
  mainPage.closeMainTableRow()
  mainPage.setEmptyRow(colspan = 3)  

  mainPage.closeMainTable()
  mainPage.finishHtml()    
  
