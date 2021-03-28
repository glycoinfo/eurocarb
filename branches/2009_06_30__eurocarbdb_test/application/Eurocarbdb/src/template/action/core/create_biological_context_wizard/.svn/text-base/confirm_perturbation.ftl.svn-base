<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - confirm perturbation</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations" ]
    current="disease associations" 
    />

<h1>${title}</h1>


<#-- show a confirmation dialogue -->
<#assign count_results = matchingPerturbations.size() />

<#if (count_results > 25) ><#-------------------------- shit-tons of results -->

<p>
    There were ${count_results} perturbations that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>
    
<@ww.form action="create_biological_context_wizard!addPerturbation.action" >

<select name="perturbationId" >
<#list matchingPerturbations?sort as p >
    <option id="opt_perturbation_${p.perturbationId?c}" value="${p.perturbationId?c}" >${p.perturbationName}</option>        
</#list>
</select>
               
<br/>
<input type="submit" value="Back <-" onsubmit="history.go(-1);" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#elseif (count_results > 1) ><#--------------------------- multiple results -->

<p>
    There were ${count_results} perturbations that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>

<@ww.form action="create_biological_context_wizard!addPerturbation.action" >

<#list matchingPerturbations?sort as p >
<input type="radio" id="opt_perturbation_${p.perturbationId?c}" name="perturbationId" value="${p.perturbationId?c}" />        
<label for="opt_perturbation_${p.perturbationId?c}"><@eurocarb.detail_link object=p text="${p.perturbationName}" target="_blank" /></label><br/>
</#list>
               
<br/>
<input type="button" value="Back <-" onclick="history.go(-1);" />
<input type="submit" value="Continue ->" />
    
</@ww.form>

<#elseif (count_results == 1) /><#---------------------------- single result -->
    
<@ww.form action="create_biological_context_wizard!addPerturbation.action">
<p>
    Your search matched a single perturbation:<br/>
    <#list matchingPerturbations as p >
        <@eurocarb.detail_link object=p text="${p.perturbationName}" target="_blank" /> 
        <@ww.hidden name="perturbationId" value="${ p.perturbationId?c }" />
    </#list>
</p>
    
<br/>
<input type="button" value="Back <-" onclick="history.go(-1);" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#else/><#----------------------------------------------- no matching result -->
    
<p>
    There were no perturbations that matched the search criteria 
    <em>${searchCriteria}</em>.
</p>
<@ww.form action="input_perturbation.action">
<input type="button" value="Back <-" onclick="history.go(-1);" />
</@ww.form>        


</#if><#----------------------------------------------------------------------->


<#include "/template/common/footer.ftl" />