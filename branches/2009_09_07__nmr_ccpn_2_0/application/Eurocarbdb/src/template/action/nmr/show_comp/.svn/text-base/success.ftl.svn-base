
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<#assign title>Summary of ChemComp ${action.confCode}${ccpCode} with linking ${linking}</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<#-- not working due to bug in cdk
<img src="drawChemComp.action?ccpCode=${ccpCode}"/>
-->


<div>
<font color="blue">download as CCPN</font>
<br>
</div>

<div>
  Average shift by atom
</div>
 <p>

    <#assign atomTable = action.getAtomShiftTable() />
    <table class="table_top_header full_width">  
      <thead>
        <tr>    
          <td>atom</td>
          <td>average</td>
          <td>variation</td>
          <td>num records</td>
        </tr>
      </thead>
      <tbody>      
        <#list atomTable as r>
          <tr>    
            <td>${r[0]}</td>
            <td>${r[1]}</td>
            <td><#if r[2]?? && r[2] &gt; 0.001>${r[2]}<#else>-</#if></td>
            <td>${r[3]}</td>
          </tr>
        </#list>
      </tbody>      
    </table>

<br>

<#include "/template/common/footer.ftl" />


