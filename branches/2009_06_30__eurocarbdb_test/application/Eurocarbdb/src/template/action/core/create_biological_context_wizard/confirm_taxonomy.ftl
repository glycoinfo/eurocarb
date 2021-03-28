<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - confirm taxonomy</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations" ]
    current="taxonomy" 
    />

<h1>${title}</h1>


<#-- show a confirmation dialogue -->
<#assign count_results = matchingTaxonomies.size() />

<#if (count_results > 25) ><#-------------------------- shit-tons of results -->

<p>
    There were ${count_results} taxonomies that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>
    
<@ww.form action="create_biological_context_wizard!addTaxonomy.action" >

<select name="taxonomyId" >
<#list matchingTaxonomies?sort as t >
    <option id="opt_taxon_${t.taxonomyId?c}" value="${t.taxonomyId?c}" >${t.taxon}</option>        
</#list>
</select>
               
<br/>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#elseif (count_results > 1) ><#--------------------------- multiple results -->

<p>
    There were ${count_results} taxonomies that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>

<@ww.form action="create_biological_context_wizard!addTaxonomy.action" >

<#list matchingTaxonomies?sort as t >
<input type="radio" id="taxon_${t.taxonomyId?c}" name="taxonomyId" value="${t.taxonomyId?c}" />        
<label for="taxon_${t.taxonomyId?c}"><@eurocarb.detail_link object=t text="${t.taxon}" target="_blank" /></label><br/>
</#list>
               
<br/>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="submit" value="Continue ->" />
    
</@ww.form>

<#elseif (count_results == 1) /><#---------------------------- single result -->
    
<@ww.form action="create_biological_context_wizard!addTaxonomy.action" >
<p>
    Your search matched a single taxonomy:<br/>
    <#list matchingTaxonomies as t >
        <@eurocarb.detail_link object=t text="${t.taxon}" target="_blank" />
        <@ww.hidden name="taxonomyId" value="${ t.taxonomyId?c }" />
    </#list>
</p>
    
<br/>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#else/><#----------------------------------------------- no matching result -->
    <p>
    There were no taxonomies that matched the search criteria<br/> 
    "<em>${searchCriteria}</em>".
    </p>
    <@ww.form action="input_taxonomy">
    <input type="button" value="Back <-" onclick="history.back();" />
    </@ww.form>        
</#if>


<#include "/template/common/footer.ftl" />