<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>User home for contributor ${contributor.name}</#assign>
<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<#if (contributor.isGuest())> <#-- || params.size() == 0)> -->
<#-- show a table of number of glycan sequences contributed per contributor -->
<#--=== this section disabled due to multiple contributor names in DB === 
    
<#assign contrib_map = action.getMapOfGlycanSequenceCountByContributor() />
<table>
<#if ( contrib_map?size > 0 )>
<#assign contribs = contrib_map?keys  />
<#assign counts = contrib_map?values  />
    <tr>
        <th>Contributor name</th>
        <th>Number of glycan sequence entries contributed</th>
    </tr>
<#list contribs as c >
    <tr>
        <td>${c.contributorName}</td>
        <td>${counts[c_index]}</td>
    </tr>
</#list>
</table>
<#else>
    <p><em>database has no contributors</em><p>
</#if>
-->
    <p>You must <a href="${base}/login.action">log in</a> to view this page</p>
    
<#else><#-- otherwise show the current contributor's contributions -->

<#assign max_items_to_show = action.getProperty("pref.show_max_recent_items")?number />

<!--=== contributors sequences ===-->
<h2>Sequences</h2>

<#assign GlycanSequence = stack.findValue("@org.eurocarbdb.dataaccess.core.GlycanSequence@class") />
<#assign count_my_sequences = contributor.countMyContributionsOf( GlycanSequence ) />
<#assign sequences=contributor.getMyContributionsOf( GlycanSequence, max_items_to_show ) />
<#if ( sequences?exists && sequences?size > 0 ) >
<p>
    You have contributed ${count_my_sequences} sequence 
    <#if (count_my_sequences > 1) >entries<#else/>entry</#if>. 
    <#if (count_my_sequences > max_items_to_show) >Showing the ${max_items_to_show} most recently contributed sequences 
    (<a href="browse_contributor_structures.action?contributorId=${contributor.contributorId}">show all</a>).</#if>
</p>
<div class="thumbnails">
<#list sequences as seq >
<@ecdb.linked_sugar_image id=seq.glycanSequenceId scale="0.4" />
</#list>
</div>
<#else/>
    (no sequences - <a href="contribute_structure.action">contribute a sequence</a>)
</#if>

<!--=== contributors evidence ===-->
<h2>Evidence</h2>

<#assign Evidence = stack.findValue("@org.eurocarbdb.dataaccess.core.Evidence@class") />
<#assign count_my_evidence = contributor.countMyContributionsOf( GlycanSequence ) />
<#assign evidence = contributor.getMyContributionsOf( Evidence, max_items_to_show ) />
<#if ( evidence?exists && evidence?size > 0 ) >

<p>
    You have contributed ${count_my_evidence} evidence 
    <#if (evidence?size > 1) >entries<#else/>entry</#if>. 
    <#if (evidence?size > max_items_to_show)>Showing the ${max_items_to_show} most recently contributed pieces of evidence
    (<a href="browse_contributor_evidence.action?contributorId=${contributor.contributorId}">show all</a>).
    </#if>
</p>
<table class="table_top_header">   
<#list evidence as ev>
    <tr>
      <td>  
	<a href="show_evidence.action?evidenceId=${ev.evidenceId}">
	  ${ev.technique.techniqueAbbrev}
	</a>
      </td>
      <td> on ${ev.dateEntered?datetime} </td>
      <td>
	<ul class="hmenu">
	  <#list ev.glycanSequences as gs>
	  <li><@ecdb.linked_sugar_image id=gs.glycanSequenceId scale="0.4" /></li>
	  </#list>
	</ul>
      </td>	  
    </tr>
</#list>
    
</table>
<#else>
    (no evidence contributed yet!)
</#if>

</#if>

<#include "/template/common/footer.ftl" />


