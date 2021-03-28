<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - confirm before saving</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations",
            "summary" ]
    current="summary" 
    />

<h1>${title}</h1>

<#assign t  = taxonomy />
<#assign tt = tissueTaxonomy />
<#assign ds = diseases />
<#assign ps = perturbations />

<form>
<table class="wwFormTable">

<!-- taxonomy -->
<tr>
    <th>Taxonomy</th>
    <td><@eurocarb.detail_link object=t text="${t.taxon}" target="_blank" /></td>
    <td><a href="create_biological_context_wizard!removeTaxonomy.action?taxonomyId=${ t.taxonomyId?c }">change</a></td>
</tr>

<!-- tissue taxonomy -->
<tr>
    <th>Tissue taxonomy</th>
    <td><@eurocarb.detail_link object=tt text="${tt.tissueTaxon}" target="_blank" /></td>
    <td><a href="create_biological_context_wizard!removeTissueTaxonomy.action?tissueTaxonomyId=${ tt.tissueTaxonomyId?c }">change</a></td>
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
    <td>
    <#list ds as d >
        <a href="create_biological_context_wizard!removeDisease.action?diseaseId=${ d.diseaseId?c }">remove</a><br/>
    </#list>
    <#if ( ds?size > 2 )>
        <a href="create_biological_context_wizard!removeDisease.action">remove all</a>
    </#if>
    </td>
</tr>
<#else/><#-------------------------------------------------- diseases absent -->
<tr>
    <th>Disease associations</th>
    <td><em>none</em></td>
    <td><a href="input_disease.action">add</a></td>
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
    <td>
    <#list ps as p >
        <a href="create_biological_context_wizard!removePerturbation.action?perturbationId=${ p.perturbationId?c }">remove</a><br/>
    </#list>
    <#if ( ps?size > 2 )>
        <a href="create_biological_context_wizard!removePerturbation.action">remove all</a>
    </#if>
    </td>
</tr>
<#else/><#-------------------------------------------------- perturbs absent -->
<tr>
    <th>Perturbation associations</th>
    <td><em>none</em></td>
    <td><a href="input_perturbation.action">add</a></td>
</tr>
</#if>

<!-- submits -->
<tr>
    <td colspan="3">
        <input type="hidden" name="commit" value="1" />
        <input type="button" value="Back <-" onsubmit="history.go(-1);" />
        <input type="submit" value="Continue ->" />
    </td>
</tr>

</table>
</form>

<#include "/template/common/footer.ftl" />