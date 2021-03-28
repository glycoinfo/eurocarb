<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>Ranking of compounds matching shift profile</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<#--
<div>
    <#assign compTable = action.compTable />
    <#if compTable?has_content>
    <table class="table_top_header full_width">  
      <thead>
        <tr>    
          <td>component name</td>
          <td>project</td>
          <td>atom 1</td>
          <td>atom 1 shift</td>
          <td>atom 2</td>
          <td>atom 2 shift</td>
        </tr>
      </thead>
      <tbody>      
        <#list compTable as r>
          <tr>    
            <td><a href="show_comp.action?ccpCode=${r[0]}">${r[0]}</a></td>
            <td>${r[5]}</td>
            <td>${r[1]}</td>
            <td>${r[2]}</td>
            <td>${r[3]}</td>
            <td>${r[4]}</td>
          </tr>
        </#list>
      </tbody>      
    </table>
    <#else>
       no monomer units matched the search criteria
    </#if>
</div>
-->

<#include "/template/common/footer.ftl" />


