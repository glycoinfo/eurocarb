<#assign title>GlycoBase</#assign>
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<@ww.url value="/js/lib/mootools.js" includeParams="none" id="url_mootools_js"/>
<@ww.url value="/js/lib/glycan.js" includeParams="none" id="url_glycan_js"/>
<@ww.url value="/js/lib/digests.js" includeParams="none" id="url_digests_js"/>
<@ecdb.include_js url="${url_mootools_js}"/>
<@ecdb.include_js url="${url_glycan_js}"/>
<@ecdb.include_js url="${url_digests_js}"/>

<#include "/template/common/header.ftl" />

<#if ! currentContributor.isGuest() >
<@ecdb.context_box title="Actions" >
<a href="create_hplc_gu.action" title="Add or associate HPLC data to this entry">Add HPLC data</a>
<a href="show_glycan.action?glycanSequenceId=${glycan.ogbitranslation?c}" title="View core data description">Core Database Information</a>
</@ecdb.context_box>
</#if>

<#if currentContributor.isGuest() >
<@ecdb.context_box title="Actions" >
<a href="show_glycan.action?glycanSequenceId=${glycan.ogbitranslation?c}" title="View core data description">Core Database Information</a>
</@ecdb.context_box>
</#if>

<#assign testing = displayMultipleCt?size>

<div class="hplc_glycan_entry">
Glycan Id: ${glycan.glycanId?c}
</div>

<h1>HPLC Glycan Details</h1>



<#if (testing == 0) >
<p><img src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${glycan.ogbitranslation?c}"/></p>
</#if>

<#if (testing != 0) >
    <#list displayMultipleCt as multiple>
    <img style="display: block;" src="get_sugar_image.action?download=true&scale=0.4&outputType=png&glycanSequenceId=${multiple.sequenceId?c}"/>
	<#if multiple_has_next></#if>
    </#list>
</#if>

<table class="hplc_table_entry">
     <tr>
       <td><b>Glycan Name<b></td>
       <td>${glycan.name}</td>
     </tr>
     <#list displayStats as s>
     <tr>
       <td><b>GU Value:</b></td><td>${s[1]?string("0.##")}</td>  
     </tr>
     <#if s[2] !=1 >
     <tr>
       <td><b>Standard Dev:</b></td><td>${s[0]?string("0.##")}</td>
     </tr>
     </#if>
     </#list>
</table>

<p></p>
<div class="marginbottom">       
        <a id="v_slideout" href="#">slide out</a>
         |
        <a id="v_slidein" href="#">slide in</a>
        <a id="v_show" href="#"></a>
         <span id="vertical_status"></span>
        </div>
        <div id="vertical_slide">
<h2>Monosaccharide Composition</h2>
	<div id="myOtherElement">
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
	</div>

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
	</div>

	

<h2>Publication  Information</h2>
	<table class="table_top_header half_width">
	<tr><th>Author</th><th>Year</th><th>Reported GU</th><th>MS</th><th>MS/MS</th><th>Tax Link</th></tr>

	<#list displayRefs as p>
	<#if (p[4]?exists) >
	<tr><td style="text-align:left"><a href="http://www.ncbi.nlm.nih.gov/pubmed/${p[4]?c}">${p[3]}</a><td style="text-align:center" >${p[5]?c}<td style="text-align:center">${p[0]}<td style="text-align:center">${p[2]}<td style="text-align:center">${p[1]}<td style="text-align:center"><a href="show_tax.action?refId=${p[6]?c}&glycanId=${glycan.glycanId}&glycanName=${glycan.name}&imageStyle=uoxf">link</a><#if p_has_next></#if>
      
        </#if>
	</#list>
	</table>
	
	 
<#if displayReportGu?exists>
<h2>Report Data</h2>
	<div id="vertical_slide">
	<table class="table_top_header half_width">
	<tr><th>Sample</th><th>GU</th><th>MS</th><th>MS/MS</th></tr>

	<#list displayReportGu as d>
	<tr><td style="text-align:left">${d[3]}</td><td style="text-align:left">${d[0]}</td><td style="text-align:left">${d[1]}</td><td style="text-align:left">${d[2]}</td>
	</#list>
	</table>
	</#if>
	

<#include "/template/common/footer.ftl" />

