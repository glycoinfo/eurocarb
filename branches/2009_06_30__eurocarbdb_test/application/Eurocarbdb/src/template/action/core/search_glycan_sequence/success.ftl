<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Search structures</#assign>
<#include "/template/common/header.ftl" />

<#assign action_name="${base}/search_glycan_sequence.action?">

<h1>${title}</h1>

<@ecdb.context_box title="Actions"> 
<a href="${action_name}historicalQueriesToRefine=${queryHistory.indexOf(currentSearch)}">Search within these results</a>
</@>

<@ecdb.context_box title="Previous searches"> 
<div id="glycan_sequence_query_history"
  <ul>
  <#list queryHistory?reverse as query>
    <#if query.queryTime?exists >
    <li><a href="${action_name}historicalQueriesToRun=${queryHistory.indexOf(query)}" class="query_result_count">${query.resultCount} results</a> <span class="query_description">${query.description}</span><span class="query_time">${query.queryTime.time?datetime}</span></li>
    </#if>
  </#list>
  </ul>
</div>
</@>


<#if ( message?length > 0 )>
	<!-- div style="padding: 1em 0 1em 0; color: darkred;">
		${message}	
	</div -->
</#if>



<#if ( currentSearch.description?exists && currentSearch.description != "" )>
<p>You searched for structures with</p>
<ul>
  <li>${currentSearch.description}</li>
  <#assign action_name="${action_name}historicalQueriesToRun=${queryHistory.indexOf(currentSearch)}&">
</ul>
</#if>

<#if (results?size>0)>
  <p>Found ${totalResults}</p>

  <@ecdb.page_navigator action_name/>
  <br>

  <table class="table_top_header full_width">
    <thead>
      <tr>
        <th>Structure</th>
        <!--th>Composition</th>
        <th>Mass (mono/avg)</th-->
        <th>Entered</th>
        <th>Contributor</th>
	<th>Data</th>
        <th>Taxonomies</th>
      </tr>
    </thead>
    <tbody>      
      <#list results as seq>
        <tr>
	  <td>
	     <a href="show_glycan.action?glycanSequenceId=${seq.glycanSequenceId?c}">
	       <img src="get_sugar_image.action?download=true&scale=0.5&outputType=png&inputType=gws&tolerateUnknown=1&sequences=${seq.sequenceGWS?url}"/>
	     </a>
	  </td>
	  <!-- td><#if seq.composition?exists>${seq.composition}</#if></td>
	  <td><#if seq.massMonoisotopic?exists && seq.massAverage?exists>${seq.massMonoisotopic} (${seq.massAverage})</#if></td -->
	  <td>${seq.dateEntered?date}</td>
	  <td><a href="show_contributor.action?contributorId=${seq.contributor.contributorId?c}">${seq.contributor.contributorName}</a></td>
	  <td>
	    <#if seq.hasEvidence()>
	      <#if seq.hasHPLCEvidence()>HPLC</#if>
	      <#if seq.hasMSEvidence()>MS</#if>
	      <#if seq.hasNMREvidence()>NMR</#if>
	    <#else>
	      -
	    </#if>
	  </td>
	  <td>	      
	    <ul class="no_bullets">
	      <#list seq.taxonomies as t>
		<li><a href="show_taxonomy.action?taxonomyId=${t.taxonomyId?c}">${t.taxon}</a></li>
	      </#list>
	     </ul>
	  </td>
        </tr>
     </#list>
   </tbody>
  </table>
  <@ecdb.page_navigator action_name/>
<#else/>
    <p>No sequences matching the criteria.</p>
</#if>

<#include "/template/common/footer.ftl" />
