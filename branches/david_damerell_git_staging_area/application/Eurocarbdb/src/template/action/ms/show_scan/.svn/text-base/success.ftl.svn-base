<#assign title>Show Scan Page</#assign>
<#include "/template/common/header.ftl" />
<#setting url_escaping_charset='ISO-8859-1'>

<#macro show_annotation ann >
<h2>Annotation</h2>
<img src="get_sugar_image.action?download=false&amp;scale=1&amp;opaque=false&amp;inputType=gws&amp;outputType=png&amp;sequences=${ann.parentStructure.sequenceGWS?url}" />
      
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
	      <img style="display: block;" src="get_sugar_image.action?download=false&amp;scale=0.5&amp;opaque=false&amp;outputType=png&amp;sequences=${q.sequenceGWS?url}" />
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
</#macro>

<#macro show_peaklist scan>
<div id="peaklist_table" class="peaklist_table">
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
</div>
</#macro>

<#if scan?exists >

<!-- Display Data: -->

<h1>Overview of Scan no. ${scan.id} </h1>

<a href="show_acquisition.action?acquisitionId=${scan.acquisition.acquisitionId}">Show parent acquisition</a>

<@ecdb.scan_detail_brief scan=scan />

<hr class="separator"/>

<!-- show labeled peaks -->
<h2>Peaklist</h2>
<@show_peaklist scan=scan />

<!-- show annotations -->

<#list scan.annotations as ann >
<div>
  <@show_annotation ann=ann />
</div>
</#list>

<#else>

<#if annotation?exists >
<div id="annotation_list" class="annotation_list">
  <@show_annotation ann=annotation/>
</div>
</#if>

</#if>

<#include "/template/common/footer.ftl" />

