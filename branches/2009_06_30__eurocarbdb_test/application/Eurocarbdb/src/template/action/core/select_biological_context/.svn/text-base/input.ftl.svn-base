<#assign title>Biological context selection</#assign>
<#include "/template/common/header.ftl" />
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<h1>${title}</h1>

<#if ( message?length > 0 )>
<div class="error_message">
  ${message}	
</div>
</#if>    

<@ww.form theme="simple">
  <#if (biologicalContexts?exists && biologicalContexts?size>0)>
    <p>Select a biological context from the list</p>
    <table class="table_left_header">    
      <#list biologicalContexts as bc >
	<tr>
	  <th><input type="radio" name="biologicalContextId" value="${bc.biologicalContextId?c}"/></th>
	  <td><@ecdb.biological_context bc=bc separator=" " /></td>
	</tr>
      </#list>
    </table>
  <#else/><#-- no biological contexts -->
    There are no biological contexts to select.
  </#if>
  <br/>
  
  <@ww.submit name="submitAction" value="Cancel"/>
  <@ww.submit name="submitAction" value="Select"/>
  <@ww.submit name="submitAction" value="Create new"/>

  <@ww.hidden name="experimentStepId" value="${experimentStepId?c}"/>
  <@ww.hidden name="glycanSequenceId" value="${glycanSequenceId?c}"/>

</@ww.form>

<#include "/template/common/footer.ftl" />
