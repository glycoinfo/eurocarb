<#assign title>References selection</#assign>
<#include "/template/common/header.ftl" />
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<h1>${title}</h1>

<@ww.form theme="simple">
  <#if (references?exists && references?size>0)>
    <p>Select the references from the list</p>
    <table class="table_left_header">    
      <#list references as r >
	<tr>
	  <th><input type="checkbox" name="referenceIds" value="${r.referenceId?c}"/></th>
	  <td><@ecdb.reference ref=r/></td>
	</tr>
      </#list>
    </table>
  <#else/>
    There are no references to select.
  </#if>
  <br/>
  <@ww.submit name="submitAction" value="Cancel"/>
  <@ww.submit name="submitAction" value="Select"/>
</@ww.form>

<#include "/template/common/footer.ftl" />
