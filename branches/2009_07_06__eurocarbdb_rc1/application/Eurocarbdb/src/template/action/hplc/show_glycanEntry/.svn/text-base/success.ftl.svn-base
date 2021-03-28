<#assign title>GlycoBase 2.0</#assign>
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<@ww.url value="/js/lib/JQuery/jquery-ui-1.7.1.custom.min.js" includeParams="none" id="url_personal"/>
<@ww.url value="/js/lib/JQuery/jquery-1.3.2.min.js" includeParams="none" id="url_jquery"/>
<@ww.url value="/js/lib/JQuery/jquery.tablesorter.min.js" includeParams="none" id="url_jquery_table"/>
<@ecdb.include_js url="${url_jquery}" />
<@ecdb.include_js url="${url_personal}" />
<@ecdb.include_js url="${url_jquery_table}"/>

<#include "/template/common/header.ftl" />

<script type="text/javascript">
$(document).ready(function() 
    { 
        $("#myTable").tablesorter({sortList: [[1,0]]}); 
        $("#myTable2").tablesorter({sortList: [[1,0]]}); 
    } 
); 
</script>


<#if ! currentContributor.isGuest() >
<@ecdb.context_box title="Actions" >
<a href="create_hplc_gu.action?glycanSequenceId=${glycan.ogbitranslation?c}" title="Add or associate HPLC data to this entry">Add HPLC data</a>
<a href="show_glycan.action?glycanSequenceId=${glycan.ogbitranslation?c}" title="View core data description">Core Database Information</a>
</@ecdb.context_box>
</#if>

<#if currentContributor.isGuest() >
<@ecdb.context_box title="Actions" >
<a href="show_glycan.action?glycanSequenceId=${glycan.ogbitranslation?c}" title="View core data description">Core Database Information</a>
</@ecdb.context_box>
</#if>

<@ecdb.context_box title="NIBRT">
<p>National Institute for Bioprocessing Research and Training (NIBRT) is located in Dublin, Ireland 
with a mandate to support the development of the bioprocessing industry by: Training highly skilled personnel for the 
bioprocessing industry. Conducting world-class research in key areas of bioprocessing. Providing flexible, 
multi-purpose bioprocessing research and training facilities. For further information please 
refer to <a href="http://www.nibrt.ie">www.nibrt.ie</a> or <a href="mailto:info@nibrt.ie?Subject=GlycoBase">email</a></p>
</@ecdb.context_box></p>


<@ecdb.context_box title="Information">
<p>The goal of EUROCarbDB is to develop bioinformatic solutions which assist the interpretation and storage of experimental data. We, therefore, invite any groups interested in expanding the resources presented to contact the <a href="mailto:matthew.campbell@nibrt.ie">EUROCarbDB developers</a>.</p>
</@ecdb.context_box>


<#assign testing = displayMultipleCt?size>
<a href="http://www.nibrt.ie"><img src="/eurocarb/images/nibrt_logo.png" align="right"/></a>

<div class="hplc_glycan_entry">
Glycan Id: ${glycan.glycanId?c}
</div>

<h1>HPLC Glycan Details</h1>
<!--
<p><@ecdb.sugar_image id=glycan.ogbitranslation /></p>
-->

<table><tr><b>Glycan Name:</b>${glycan.name}</tr>
<#if (testing == 0) >
<p><img src="get_sugar_image.action?download=true&scale=0.6&outputType=png&glycanSequenceId=${glycan.ogbitranslation?c}"/></p>
</#if>

<#if (testing != 0) >
    <#list displayMultipleCt as multiple>
    <img style="display: block;" src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${multiple.sequenceId?c}"/>
	<#if multiple_has_next></#if>
    </#list>
</#if>

     <#list displayStats as s>
     <tr><td><b>GU Value:</b></td><td>${s[1]?string("0.##")}</td>  
	 </tr>
     <#if s[2] !=1 >
    
     <tr>
       <td><b>Standard Dev:</b></td><td>${s[0]?string("0.##")}</td>
     </tr>
     </#if>
     </#list>
     
</table>

<p></p>
<h2>Monosaccharide Composition</h2>
	<table class="hplc_table_entry">
      	<tr>
        <#if glycan.hex?size != 0 >
        <td>Hex: ${glycan.hex}</td>
	</#if>
        </tr>
        <tr>
        <#if glycan.hexnac?size != 0 >
        <td>HexNAc: ${glycan.hexnac}</td>
        </#if>
        </tr>
 	<tr>
	<#if glycan.neunac?size != 0 >
	<td>NeuNAc: ${glycan.neunac}</td>
	</#if>
        </tr>
	<tr>
	<#if glycan.fucose?size != 0 >
       <td>Fucose: ${glycan.fucose}</td>
	</#if>
	</tr>
	<tr>
	<#if glycan.xylose?size != 0>
	<td>Xylose: ${glycan.xylose}</td>
	</#if>
        </tr>
	</table>

<h2>Digest Pathways</h2>
	  <table class="hplc_table_entry">
	  <#if (testing == 0) >
	  <#list displayDigestSingle as digest>
	  <tr><td><img src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${glycan.ogbitranslation?c}"/></td><td>${digest[0]}<br/></td>
	  <td><img src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${digest[3]?c}"/>
	  </td></tr>
	  <#if digest_has_next></#if>
	  </#list>
	  </#if>
	  </table>

	  <table class="hplc_table_entry" >
	  <#if (testing != 0) >
	  
	  <#list displayMultiDigests as digestMultiple>
	  <#if (digestMultiple[4]?exists)>

	  <tr><td><img style="display: block;"
	  src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${digestMultiple[2]?c}"/></td><td>${digestMultiple[0]}<img src="/ecdb/images/longarrow.gif"/></td><td><a href="show_glycanEntry.action?glycanId=${digestMultiple[1]}"><img src="/ecdb/ww/get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${digestMultiple[4]?c}"/></a></td></tr>
	  <tr><td>${glycan.name}</td><td></td><td><a href="show_glycanEntry.action?glycanId=${digestMultiple[1]}">${digestMultiple[5]}</a></td></tr>
	  </#if>
	  <#if digestMultiple_has_next></#if> 
	  </#list>
	  </#if> 
	  </table>

	

<h2>Publication  Information</h2>
	<table class="table_top_header half_width" id="myTable">
	<thead>
	<tr><th>Author <img src="/eurocarb/images/sort.gif" /></th><th>Year <img src="/eurocarb/images/sort.gif" /></th><th>Reported GU <img src="/eurocarb/images/sort.gif" /></th><th>MS</th><th>MS/MS</th></tr>
	</thead>
	<tbody>
	<#list displayRefs as p>
	<#if (p[4]?exists) >
	<tr><td style="text-align:left"><a href="http://www.ncbi.nlm.nih.gov/pubmed/${p[4]?c}">${p[3]}</a><td style="text-align:center" >${p[5]?c}<td style="text-align:center">${p[0]}<td style="text-align:center">${p[2]}<td style="text-align:center">${p[1]}<#if p_has_next></#if>
      
        </#if>
	</#list>
	</tbody>
	</table>
	
	 

<#include "/template/common/footer.ftl" />

