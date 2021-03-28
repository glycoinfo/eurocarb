<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - confirm tissue taxonomy</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations", 
            "glycoconjugate associations" ]
    current="tissue taxonomy" 
    />

<h1>${title}</h1>


<#-- show a confirmation dialogue -->
<#assign count_results = matchingTissueTaxonomies.size() />

<#if (count_results > 25) ><#------------------------------ multiple results -->
    <p>
    There were ${count_results} taxonomies that matched the search criteria:<br/>
    "<em>${searchCriteria}</em>".
    </p>
    <p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
    </p>
    <@ww.form action="create_biological_context_wizard!addTissueTaxonomy.action" >

    <select name="tissueTaxonomyId" >
    <#list matchingTissueTaxonomies?sort as t >
        <option id="opt_ttaxon_${t.tissueTaxonomyId?c}" value="${t.tissueTaxonomyId?c}" >${t.tissueTaxon}</option>        
    </#list>
    </select>
    <br/>           
    
    <input type="button" value="Back <-" onclick="history.back()" 
    /><input type="submit" value="Continue ->" />
    
    </@ww.form>
<#elseif (count_results > 1) ><#--------------------------------  > 1 result -->
    <p>
    There were ${count_results} taxonomies that matched the search criteria:<br/>
    "<em>${searchCriteria}</em>".
    </p>
    <p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
    </p>
    <@ww.form action="create_biological_context_wizard!addTissueTaxonomy.action" >

    <#list matchingTissueTaxonomies?sort as t >
    <input type="radio" id="taxon_${t.tissueTaxonomyId?c}" 
           name="tissueTaxonomyId" 
           value="${t.tissueTaxonomyId?c}" />        
    <label for="taxon_${t.tissueTaxonomyId?c}"><@eurocarb.detail_link object=t text="${t.tissueTaxon}" target="_blank" /></label><br/>
    </#list>
               
    <input type="button" value="Back <-" onclick="history.back()" 
    /><input type="submit" value="Continue ->" />
    
    </@ww.form>

<#elseif (count_results == 1) /><#---------------------------- single result -->
    <p>
    Your search matched a single tissue taxonomy:<br/>
    <#list matchingTissueTaxonomies as t >
        <@eurocarb.detail_link object=t target="_blank" /> 
    </#list>
    </p>
    <@ww.form action="create_biological_context_wizard!addTissueTaxonomy.action">
            
    <@ww.hidden name="tissueTaxonomyId" value="${t.tissueTaxonomyId}?c" />
    <input type="button" value="Back <-" onclick="history.back()" />
    <input type="submit" value="Continue ->" />
    
    </@ww.form>

<#else/><#----------------------------------------------- no matching result -->
    <p>
    There were no taxonomies that matched the search criteria:<br/> 
    "<em>${searchCriteria}</em>".
    </p>
    <@ww.form action="input_tissue_taxonomy">
    <input type="button" value="Back <-" onsubmit="history.back()" />
    </@ww.form>        
</#if>


<#include "/template/common/footer.ftl" />