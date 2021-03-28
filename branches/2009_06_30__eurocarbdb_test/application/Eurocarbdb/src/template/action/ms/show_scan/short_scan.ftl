<#if scan.peakLabeledsOrdered?exists>
<p>This <@ecdb.actionlink name="show_scan" params="scanId=${scan.scanId?c}">scan</@> contains ${scan.peakLabeleds.size()} peaks</p>
</#if>
<#if scan.annotations?exists>
  <ul>
  <#list scan.annotations as ann>
    <li>Annotation for <@ecdb.sugar_image id=ann.parentStructure.id/></li>
  </#list>
  </ul>
</#if>