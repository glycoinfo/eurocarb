<#-- mjh: this section replaced by use of a Eurocarb macro, see below. --
<@ww.url action="get_sugar_image" id="url_get_sugar_image" includeParams="none" >
	<@ww.param name="download" value="false" />	
</@ww.url>
-->
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<div style="clear: both;"/>

<#-- mjh: Average mass doesn't work!!!! 
<h3>Statistics</h3>
<div>
Average mass of structures: ${action.getAverageMass()} Da<br/> 
${action.getStructureCount()} total structures<br/>

</div>
-->

<#-- show sequences -->
<#--<h3>Glycan sequences associated with this taxon</h3>-->
    <p>${structureCount} total structures <#--
<#if (structureCount > 20) > 
    (only displaying first 20 structures)
</#if> 
--></p>
    
<#--
<div class=" ecdb_sequences ">
    <ul>
        <#list sequences as seq>
        <#if seq_index == 20 ><#break/></#if>
        <li><@ecdb.linked_sugar_image id=seq.glycanSequenceId scale=0.5/></li>	
        </#list>
    </ul>
</div>
-->
