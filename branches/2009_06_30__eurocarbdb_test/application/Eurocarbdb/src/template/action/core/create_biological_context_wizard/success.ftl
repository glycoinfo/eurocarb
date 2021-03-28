<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - success</#assign>
<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<p>New biological context recorded (id = ${ biologicalContext.biologicalContextId?c })</p>

<#assign t  = taxonomy />
<#assign tt = tissueTaxonomy />
<#assign ds = diseases />
<#assign ps = perturbations />

<table>

<!-- taxonomy -->
<tr>
    <th>Taxonomy</th>
    <td><@eurocarb.detail_link object=t text="${t.taxon}" target="_blank" /></td>
</tr>

<!-- tissue taxonomy -->
<tr>
    <th>Tissue taxonomy</th>
    <td><@eurocarb.detail_link object=tt text="${tt.tissueTaxon}" target="_blank" /></td>
</tr>

<!-- diseases -->
<#if ( ds?size > 0 )><#------------------------------------ diseases present -->
<tr>
    <th>Disease associations</th>
    <td>
    <#list ds as d >
        <@eurocarb.detail_link object=d text="${d.diseaseName}" target="_blank" /><br/>
    </#list>
    </td>
</tr>
<#else/><#-------------------------------------------------- diseases absent -->
<tr>
    <th>Disease associations</th>
    <td><em>none</em></td>
</tr>
</#if>

<!-- perturbations -->
<#if ( ps?size > 0 )><#------------------------------------ perturbs present -->
<tr>
    <th>Perturbation associations</th>
    <td>
    <#list ps as p >
        <@eurocarb.detail_link object=p text="${p.perturbationName}" target="_blank" /><br/>
    </#list>
    </td>
</tr>
<#else/><#-------------------------------------------------- perturbs absent -->
<tr>
    <th>Perturbation associations</th>
    <td><em>none</em></td>
</tr>
</#if>

</table>

<#include "/template/common/footer.ftl" />