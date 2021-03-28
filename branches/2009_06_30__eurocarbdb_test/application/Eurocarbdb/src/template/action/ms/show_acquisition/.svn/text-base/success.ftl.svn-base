<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Acquisition Details Page</#assign>
<#setting url_escaping_charset='ISO-8859-1'>

<#include "/template/common/header.ftl" />


<script>
  var currentScanIndex = 0;  

  function showScan(tryIndex) {
    if( tryIndex==currentScanIndex ) {
      return;
    }
  
    var old_scan = document.getElementById("scan_" + currentScanIndex);
    var old_list = document.getElementById("list_" + currentScanIndex);
    var new_scan = document.getElementById("scan_" + tryIndex);
    var new_list = document.getElementById("list_" + tryIndex);

    if( new_list!=null && new_scan!=null ) {
      new_scan.style.display = 'block'
      new_list.style.fontWeight = 'bold'
      if( old_scan!=null ) {
        old_scan.style.display = 'none'
      }
      if( old_list!=null ) {
        old_list.style.fontWeight = 'normal'
      }
      currentScanIndex = tryIndex;
    }
  } 
</script>


<h1>Overview of Acquisition num. ${acquisition.acquisitionId}</h1>

<#if acquisition.experimentStep?exists>
<a href="show_experiment_step.action?experimentStepId=${acquisition.experimentStep.experimentStepId}">Show parent acquisition</a>
</#if>

<h2>Biological contexts</h2>

<#if (acquisition.biologicalContexts?exists && acquisition.biologicalContexts?size>0)>
  <ul>
    <#list acquisition.biologicalContexts as bc >
      <li><@ecdb.biological_context bc=bc separator=" " /></li>
    </#list>
  </ul>
<#else/>
  There are no biological contexts for this acquisition.
</#if>

<h2>References</h2>

<#if (acquisition.references?exists && acquisition.references?size>0)>
  <ul>
    <#list acquisition.references as r >
      <li><@ecdb.reference ref=r/></li>    
    </#list>
  </ul>
<#else/>
  There are no references for this acquisition.
</#if>

<h2>Acquisition parameters</h2>

<table class="table_form">
  <tr>
    <th>mzXML file</th>
    <td>
      <#if acquisition.filename?exists >
      <a href="get_file.action?uri=${acquisition.filename?url}">download file</a>
      <#else>
      no file specified.
      </#if>
    </td>
  </tr>
  <tr><th>Device</th><td>${acquisition.device.manufacturer.name} ${acquisition.device.model}</td></tr>
  <tr><th>Date obtained</th><td>${acquisition.dateEntered?datetime}</td></tr>
</table>

<br>
<hr>
<br>

<h2>Scan Objects</h2>

<#macro show_scan_nodes scans>
<#if (scans?size>0)>
<ul class="scan_list">
  <#list scans as scan>
  <#if first==1 >
  <li id="list_${scan.scanId}" style="font-weight: bold">
  <#assign first = 0/>
  <#assign firstId = scan.scanId/>
  <#else>
  <li id="list_${scan.scanId}" style="font-weight: normal">
  </#if>
    <a href="show_scan.action?scanId=${scan.scanId?c}"><img alt="show" title="show" src="/ecdb/images/lens.gif"/></a>
    <a onclick="showScan('${scan.scanId}')">
      Scan ${scan.scanId}, 
      <#if (scan.msExponent==1)>MS<#elseif (scan.msExponent==2)>MS/MS<#else>MS<sup>${scan.msExponent}<sup></#if>
      <#if (scan.msExponent>1)>, base peak m/z: ${scan.basePeakMz}</#if>
      <#if (scan.parentScan?exists) >, parent scan ${scan.parentScan.scanId}</#if>
    </a>
    <@show_scan_nodes scans=scan.childScans/>
  </li>
  </#list>  
</ul>
</#if>
</#macro>
  
<div class="two_column_layout">
  <div class="two_column_layout_left_col">
    <#assign first = 1/>
    <#assign firstId = 0/>
    <@show_scan_nodes scans=acquisition.rootScans/>

    <script>
      var currentScanIndex = ${firstId};  

      function showScan(tryIndex) {
        if( tryIndex==currentScanIndex ) {
	  return;
	}
  
	var old_scan = document.getElementById("scan_" + currentScanIndex);
	var old_list = document.getElementById("list_" + currentScanIndex);
	var new_scan = document.getElementById("scan_" + tryIndex);
	var new_list = document.getElementById("list_" + tryIndex);

	if( new_list!=null && new_scan!=null ) {
	  new_scan.style.display = 'block'
	  new_list.style.fontWeight = 'bold'
	  if( old_scan!=null ) {
	    old_scan.style.display = 'none'
	  }
	  if( old_list!=null ) {
	    old_list.style.fontWeight = 'normal'
	  }
	  currentScanIndex = tryIndex;
	}
     } 
    </script>
  </div>
  <div class="two_column_layout_right_col">
    <#list acquisition.scans as scan>
      <#if scan.scanId==firstId >
      <div id="scan_${scan.scanId}" style="display: block">
      <#else>
      <div id="scan_${scan.scanId}" style="display: none">
      </#if>
        <#if scan.scanImage?exists >    
	<a href="show_scan_image.action?scanImageId=${scan.scanImage.scanImageId?c}" target="window"><img src="get_scan_image.action?scanImageId=${scan.scanImage.scanImageId?c}&which=mediumsize"/></a>
	</#if>
      </div>
    </#list>
  </div>
</div>

<!-- table class="table_top_header full_width" >
  <thead>
    <tr>
      <th>Id</th>
      <th>MS Exp.</th>
      <th>Polarity</th>
      <th>Deisotoped</th>
      <th>Deconvoluted</th>      
      <th>Annotated</th>
      <th>Base Peak m/z</th>
      <th>Base Peak Int.</th>
      <th>Start m/z</th>
      <th>End m/z</th>
      <th>Low m/z</th>
      <th>High m/z</th>
      <th>Quality</th>
    </tr>
  </thead>
  <tbody >
    <#list acquisition.scans as s>
      <tr>
        <td>
	  <a href="show_scan.action?scanId=${s.scanId?c}">${s.scanId?c}</a>
	</td>
	<td>${s.msExponent}</td>
	<td>${s.polarity?string('positive','negative')}</td>
	<td>${s.deisotoped?string('yes','no')}</td>
	<td>${s.chargeDeconvoluted?string('yes','no')}</td>
	<td><#if (s.annotations?exists & s.annotations?size>0)>yes<#else>no</#if></td>
	<td>${s.basePeakMz}</td>
	<td>${s.basePeakIntensity}</td>
	<td>${s.startMz}</td>
	<td>${s.endMz}</td>
	<td>${s.lowMz}</td>
	<td>${s.highMz}</td>
	<td>${s.contributorQuality}</td>
      </tr> 
    </#list>
  </tbody>
</table -->

<#include "/template/common/footer.ftl" />