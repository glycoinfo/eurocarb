<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>Results of Search By NMR Frequency</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<div>
    <#assign compTable = action.compTable />
    <#if compTable?has_content>
    <table class="table_top_header full_width">  
      <thead>
        <tr>    
          <td>structure</td>
          <td>evidence</td>
          <td>monomer</td>
          <td>res num</td>
          <td>atom 1</td>
          <td>atom 1 shift</td>
          <td>atom 2</td>
          <td>atom 2 shift</td>
        </tr>
      </thead>
      <tbody>      
        <#list compTable as r>
          <tr>
            <#assign config=action.getConfCode(r[7])/>    
            <td>
              <#if r[9]??>
                <a href="show_glycan_sequence.action?glycanSequenceId=${r[9]?c}"><img src="get_sugar_image.action?download=false&scale=0.2&outputType=png&tolerateUnknown=1&glycanSequenceId=${r[9]?c}"/></a>
              </#if>
            </td>
            <td>
              <#if r[10]??>
                <a href="show_evidence.action?evidenceId=${r[10]}">${r[10]}</a>
              </#if>
            </td>
            <td><a href="show_comp.action?ccpCode=${r[0]}&descriptor=${r[7]}&linking=${r[8]}">${config}${r[0]}</a></td>
            <td>${r[6]}</td>
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


<#include "/template/common/footer.ftl" />


