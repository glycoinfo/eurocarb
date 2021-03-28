<#assign title>Create new biological context</#assign>
<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<p>
    This wizard creates a new biological context with which to associate
    one or more new glycan sequences.
</p>
<@ww.form action="create_biological_context_wizard">

<@ww.submit value="Continue ->" />

</@ww.form>

<#-- TODO

<#assign bc_list = action.getAllBiologicalContexts() />
<#if ( bc_list?exists && bc_list?size > 0 ) >
<p>
    Alternatively, select one of your previous biological contexts
    to use as a template:
</p>
<table>
    <tr>
        <th>Taxonomy</th>    
        <th>Tissue taxonomy</th>    
        <th>Disease associations</th>    
        <th>Perturbation associations</th>    
        <th></th>    
    </tr>
    <#list bc_list as bc >
    <tr>
        <td>${bc.taxonomy.taxon}</td>
        <td>${bc.tissueTaxonomy.tissueTaxon}</td>
        <td>
        <#if ( bc.diseases?exists && bc.diseases?size > 0 ) >
            <#list bc.diseases as d >
                ${d.diseaseName}<br/>
            </#list>
        <#else/>
            (none)
        </#if>
        </td>
        <td>
        <#if ( bc.perturbations?exists && bc.perturbations?size > 0 ) >
            <#list bc.perturbations as p >
                ${p.perturbationName}<br/>
            </#list>
        <#else/>
            (none)
        </#if>
        </td>
        <td><a href="">Use</a></td>
    </tr>
    </#list>
</table>
</#if>

-->

<#include "/template/common/footer.ftl" />