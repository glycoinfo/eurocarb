<#assign title>Glycan sequence detail</#assign>
<#include "/template/common/header.ftl" />
<#--import "/template/lib/Eurocarb.lib.ftl" as ecdb /-->

<h1>${title}</h1>

<#if glycan?exists >

<!-- the sugar image -->
<p><@ecdb.sugar_image id=glycan.glycanSequenceId /></p>     
     
<p>
<table class="table_left_header">

    <tr>
        <th>EurocarbDB Glycan Sequence&nbsp;ID</th> 
        <td>${glycan.glycanSequenceId?c}<br/>
        
        </td>
    </tr>
    
    <tr>
        <th>Originally contributed</th> 
        <td>${glycan.dateEntered}, by <@ecdb.contributor c=glycan.contributor /></td>
    </tr>
    
    <!-- evidence for this sequence -->
    <#assign evidence_list = glycan.evidence />
    <tr>
	    <th>Evidence for this sequence</th> 
        <td>
    <#if ( evidence_list?exists && evidence_list?size > 0 ) >
        <#list evidence_list as ev >
            <@ecdb.evidence ev=ev  /> 
            entered on ${ev.dateEntered}
            by <@ecdb.contributor c=ev.contributor /><br/>
        </#list>
    <#else/>
        (No evidence for this sequence has been contributed yet)
    </#if>
        </td>
	</tr>
    
    <!-- biological contexts for this sequence -->
    <#assign biological_context_list = glycan.biologicalContexts />
    <tr>
        <th>Biological contexts in which this sequence has been observed</th>
        <td>
        <#if ( biological_context_list?exists && biological_context_list?size > 0 ) >
            <ul>
                <#list biological_context_list as bc >
                <li><@ecdb.biological_context bc=bc separator="; " /></li>
                </#list>
            </ul>
        <#else/><#-- no biological contexts -->
            (No biological context information for this sequence has been contributed yet)
        </#if>
        </td>
    </tr>
    
    <!-- references -->
    <#assign references = glycan.references />
    <tr>
        <th>References</th>
        <td>
        <#if ( references?exists && references?size>0) >
            <ul>
                <#list references?sort as r>
                <li><@ecdb.reference ref=r/></li>
                </#list>
            </ul>
        <#else/>
            <p> There are no references associated to this structure. </p>
        </#if>
        </td>
    </tr>

    <!-- composition -->
    <#assign compositionMap = glycan.composition />
    <#if compositionMap?exists >
    <tr>
        <th>Composition</th>
        <td><@text.joinMap map=compositionMap joinEntriesBy="<br/>" joinPairsBy=":&nbsp;" /></td>
    </tr>
    </#if>
    
    <!-- sequence -->
    <#assign seq = glycan.sugarSequence />
    <tr>
        <th>Sequence</th>
        <td><pre style="font-size: small">${seq}</pre></td>
    </tr>
    
</table>

<!-- context box for adding new evidence -->
<#if ! currentContributor.isGuest() >
<@ecdb.context_box title="Actions" >
<a href="create_ms.action?glycanSequenceId=${glycanSequenceId}" title="Add or associate mass-spectrometry data to this entry">Add MS data</a>
<a href="create_hplc_gu.action?glycanSequenceId=${glycanSequenceId}" title="Add or associate HPLC data to this entry">Add HPLC data</a>
<a href="javascript:alert('Addition of NMR data not yet finished!')" title="Add or associate NMR data to this entry">Add NMR data</a>
</@ecdb.context_box>
</#if>


<#else/>
    <p>
		No sequence!
    </p>
</#if>

<#include "/template/common/footer.ftl" />
