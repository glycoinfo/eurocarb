<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - select disease associations</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.breadcrumb 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations" ]
    current="disease associations" 
    />

<h1>${title}</h1>



<#if ( diseases?exists && diseases?size > 0 ) ><#---------------- some diseases already entered -->
<p>
    Does this biological context have any other associated disease conditions
    in addition to the following?
</p>
<p>
<ul>
<#list diseases as d >
    <li><@eurocarb.detail_link object=d text="${ d.diseaseName }" target="_blank" />
        (<a href="create_biological_context_wizard!removeDisease.action?diseaseId=${d.diseaseId?c}">remove</a>)
    </li> 
</#list>
</ul>
</p>
<form>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="button" value="No ->"   onclick="document.location.href='create_biological_context_wizard.action'" />
<input type="button" value="Yes ->"  onclick="document.location.href='input_disease.action'" />
</form>

<#else/><#---------------------------------------------- no diseases entered -->

<p>
    Does this biological context have any associated disease conditions?
</p>

<form>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="button" value="No ->"   onclick="document.location.href='create_biological_context_wizard.action?hasNoDiseases=1'" />
<input type="button" value="Yes ->"  onclick="document.location.href='input_disease.action'" />
</form>

</#if>

<#include "/template/common/footer.ftl" />