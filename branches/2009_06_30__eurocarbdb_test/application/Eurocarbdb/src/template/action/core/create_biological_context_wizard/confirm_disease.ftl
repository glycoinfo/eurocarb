<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - confirm disease</#assign>
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
<#assign count_results = matchingDiseases.size() />

<#if (count_results > 25) ><#-------------------------- shit-tons of results -->

<p>
    There were ${count_results} diseases that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>
    
<@ww.form action="create_biological_context_wizard!addDisease.action" >

<select name="diseaseId" >
<#list matchingDiseases?sort as d >
    <option id="opt_disease_${d.diseaseId?c}" value="${d.diseaseId?c}" >${d.diseaseName}</option>        
</#list>
</select>
               
<br/>
<input type="submit" value="Back <-" onsubmit="history.go(-1);" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#elseif (count_results > 1) ><#--------------------------- multiple results -->

<p>
    There were ${count_results} diseases that matched the search criteria<br/>
    <em>${searchCriteria}</em>.
</p>
<p>
    Please select from the following, or go back to the previous
    page to modify your search terms.
</p>

<@ww.form action="create_biological_context_wizard!addDisease.action" >

<#list matchingDiseases?sort as d >
<input type="radio" id="opt_disease_${d.diseaseId?c}" name="diseaseId" value="${d.diseaseId?c}" />        
<label for="opt_disease_${d.diseaseId?c}"><@eurocarb.detail_link object=d text="${d.diseaseName}" target="_blank" /></label><br/>
</#list>
               
<br/>
<input type="button" value="Back <-" onclick="history.go(-1);" />
<input type="submit" value="Continue ->" />
    
</@ww.form>

<#elseif (count_results == 1) /><#---------------------------- single result -->
    
<@ww.form action="create_biological_context_wizard!addDisease.action">
<p>
    Your search matched a single disease:<br/>
    <#list matchingDiseases as d >
        <@eurocarb.detail_link object=d text="${d.diseaseName}" target="_blank" /> 
        <@ww.hidden name="diseaseId" value="${ d.diseaseId?c }" />
    </#list>
</p>
    
<br/>
<input type="button" value="Back <-" onclick="history.go(-1);" />
<input type="submit" value="Continue ->" />

</@ww.form>

<#else/><#----------------------------------------------- no matching result -->
    
<p>
    There were no diseases that matched the search criteria 
    <em>${searchCriteria}</em>.
</p>
<@ww.form action="input_disease.action">
<input type="button" value="Back <-" onclick="history.go(-1);" />
</@ww.form>        


</#if><#----------------------------------------------------------------------->


<#include "/template/common/footer.ftl" />