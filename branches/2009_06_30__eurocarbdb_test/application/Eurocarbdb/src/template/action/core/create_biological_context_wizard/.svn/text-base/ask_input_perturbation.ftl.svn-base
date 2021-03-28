<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - select perturbation associations</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations", 
            "glycoconjugate associations" ]
    current="perturbation associations" 
    />

<h1>${title}</h1>


<#if ( perturbations?exists && perturbations?size > 0 ) ><#------ some perturbations already entered -->
<p>
    Does this biological context have any other associated perturbations
    in addition to the following?
</p>
<p>
<ul>
<#list perturbations as d >
    <li><@eurocarb.detail_link object=d text="${ d.perturbationName }" target="_blank" />
        (<a href="create_biological_context_wizard!removePerturbation.action?perturbationId=${d.perturbationId?c}">remove</a>)
    </li> 
</#list>
</ul>
</p>
<form>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="button" value="No ->"   onclick="document.location.href='create_biological_context_wizard.action'" />
<input type="button" value="Yes ->"  onclick="document.location.href='input_perturbation.action'" />
</form>

<#else/><#----------------------------------------- no perturbations entered -->

<p>
    Does this biological context have any associated perturbations?
    Perturbation is the general term for any condition that may
    affect a biological system that is not a disease.
</p>

<form>
<input type="button" value="Back <-" onclick="history.back()" />
<input type="button" value="No ->"   onclick="document.location.href='create_biological_context_wizard.action?hasNoPerturbations=1'" />
<input type="button" value="Yes ->"  onclick="document.location.href='input_perturbation.action'" />
</form>

</#if>

<#include "/template/common/footer.ftl" />