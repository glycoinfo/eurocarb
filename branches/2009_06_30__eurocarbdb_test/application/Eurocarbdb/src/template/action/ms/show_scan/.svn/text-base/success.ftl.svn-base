<#assign title>Show Scan Page ${scan.scanId}</#assign>
<#include "/template/common/header.ftl" />
<#setting url_escaping_charset='ISO-8859-1'>


<script>
  var currentAnnotationIndex = 0;
  
  function showPreviousAnnotation() {
    if( currentAnnotationIndex>0 ) {

      var tryIndex = currentAnnotationIndex - 1;
      var old_ann = document.getElementById("annotations_" + currentAnnotationIndex);
      var new_ann = document.getElementById("annotations_" + tryIndex);

      if( new_ann!=null ) {
        new_ann.style.display = 'block'
        if( old_ann!=null ) {
          old_ann.style.display = 'none'
	}
	currentAnnotationIndex = tryIndex;
      }
    }
  }

  function showNextAnnotation() {

    var tryIndex = currentAnnotationIndex + 1;
    var old_ann = document.getElementById("annotations_" + currentAnnotationIndex);
    var new_ann = document.getElementById("annotations_" + tryIndex);

    if( new_ann!=null ) {
      new_ann.style.display = 'block'
      if( old_ann!=null ) {
        old_ann.style.display = 'none'
      }
      currentAnnotationIndex = tryIndex;
    }
  } 
</script>

<!-- Display Data: -->

<h1>Overview of Scan no. ${scan.id} </h1>

<a href="show_acquisition.action?acquisitionId=${scan.acquisition.acquisitionId}">Show parent acquisition</a>

<div class="two_column_layout">
  <div class="two_column_layout_left_col">

    <h2>Experimental parameters</h2>
      
    <table class="table_form">
      <tr><th>MS Exponent</th><td>${scan.msExponent}</td></tr>
      <tr><th>Scan polarity</th><td>${scan.polarity?string('positive','negative')}</td></tr>
      <tr><th>Deisotoped</th><td>${scan.deisotoped?string('yes','no')}</td></tr>
      <tr><th>Charge deconvoluted</th><td>${scan.chargeDeconvoluted?string('yes','no')}</td></tr>
      <tr><th>Base Peak m/z</th><td>${scan.basePeakMz}</td></tr>
      <tr><th>Base Peak Intensity</th><td>${scan.basePeakIntensity}</td></tr>
      <tr><th>Start m/z</th><td>${scan.startMz}</td></tr>
      <tr><th>End m/z</th><td>${scan.endMz}</td></tr>
      <tr><th>Low m/z</th><td>${scan.lowMz}</td></tr>
      <tr><th>High m/z</th><td>${scan.highMz}</td></tr>
      <!-- tr><th>Quality level of the scan</th><td>${scan.contributorQuality}</td></tr -->    
    </table>
  </div>
  
  <div class="two_column_layout_right_col">
    <#if scan.scanImage?exists >
    <a href="show_scan_image.action?scanImageId=${scan.scanImage.scanImageId?c}" target="window"><img src="get_scan_image.action?scanImageId=${scan.scanImage.scanImageId?c}&which=mediumsize"/></a>
    </#if>
  </div>
  
</div>

<hr class="separator"/>

  
<!-- show labeled peaks -->

<h2>Annotations</h2>

<table class="table_top_header full_width">
  <thead>
    <tr>
      <th>Peak</th>
      <th>Intensity</th>
      <th>Annotation</th>
      <th>Calc. mass</th>
      <th>Type</th>
      <th>Charge</th>
      <th>Charged ions</th>
    </tr>
  </thead>
  <tbody>
    <#list scan.peakLabeledsOrdered as pl>
	<tr>
	  <td>${pl.mzValue}</td> 
	  <td>${pl.intensityValue}</td>
	  <td colspan="5"/>
	</tr>  
    </#list>
  </tbody>
</table>

<!-- show annotations -->

<#assign annotationIndex = 0/>

<#list scan.annotations as ann>

<#if annotationIndex==0 >
<div id="annotations_${annotationIndex}" style="display: block">
<#else>
<div id="annotations_${annotationIndex}" style="display: none">
</#if>

<h2>Annotations ${annotationIndex+1}/${scan.annotations?size} (<a onclick="showPreviousAnnotation()">previous</a> <a onclick="showNextAnnotation()">next</a> )</h2>

<img src="get_sugar_image.action?download=false&scale=1&opaque=false&inputType=gws&outputType=png&sequences=${ann.parentStructure.sequenceGWS?url}" />
      
<table class="table_form">
  <tr><th>Persubstitution:</th><td>${ann.persubstitution.name}</td></tr>
  <tr><th>Reducing end:</th><td>${ann.reducingEnd.name}</td></tr>
</table>

<br/><br/>

<table class="table_top_header full_width">
  <thead>
    <tr>
      <th>Peak</th>
      <th>Intensity</th>
      <th>Annotation</th>
      <th>Calc. mass</th>
      <th>Type</th>
      <th>Charge</th>
      <th>Charged ions</th>
    </tr>
  </thead>

    <#list ann.peakAnnotationsOrdered as pan>
      <#if pan.peakAnnotateds?size==0 >
        <tr>
	  <td>${pan.peakLabeled.mzValue}</td> 
	  <td>${pan.peakLabeled.intensityValue}</td>
	  <td colspan="5"/>
	</tr>
      <#else>
	<#assign ann_id=0>
	<#list pan.peakAnnotateds as q>
	  <tr>
	    <#if ann_id==0>
	      <!-- show labeled peak only onces -->
	      <td rowspan="${pan.peakAnnotateds.size()?c}">${pan.peakLabeled.mzValue}</td> 
	      <td rowspan="${pan.peakAnnotateds.size()?c}">${pan.peakLabeled.intensityValue}</td>
	    </#if>
	    <td>
	      <img style="display: block;" src="get_sugar_image.action?download=false&scale=0.5&opaque=false&outputType=png&sequences=${q.sequenceGWS?url}" />
	    </td>
	    <td><#if q.calculatedMass!=0>${q.calculatedMass}</#if></td>
	    <td>
	      <#list q.fragmentations as f>
	        <#if (f.fragmentType = "A" || f.fragmentType = "X")>
		  <sup>${f.cleavageOne},${f.cleavageTwo}</sup>${f.fragmentType} 
		<#else>
		  ${f.fragmentType} 
		</#if>
	      </#list>
	    </td>
	    <td>
	      <#assign charge = 0>
	      <#list q.peakAnnotatedToIons as i>
	        <#assign charge = charge + i.charge>
	      </#list>
	      <#if charge!=0>${charge}</#if>
	    </td>
	    <td>
	      <#list q.peakAnnotatedToIons as i>
	        ${i.charge} ${i.ion.ionType}<sup>+</sup> 
	      </#list>
	    </td>
	    <#assign ann_id=ann_id+1>
	  </tr>
	</#list>
      </#if>
    </#list>


</table>

</div>

<#assign annotationIndex = annotationIndex + 1 />

</#list>

<!-- neutral exchanges not supported in the first vesion-->


<#include "/template/common/footer.ftl" />

