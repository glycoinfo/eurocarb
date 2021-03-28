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

<#-- show a query form -->
<@ww.form>

<@ww.textfield label="Enter a full or partial perturbation name" name="perturbationName" />
<td colspan="2"><#-- the TD is a hack to get around WW rendering forms in a table -->
<input type="button" value="Back <-" onclick="history.go(-1)" />
<input type="submit" value="Continue ->" />
<input type="button" value="Skip ->" onclick="document.location.href='create_biological_context_wizard.action?hasNoPerturbations=1'" />
</td>
</@ww.form>

<#include "/template/common/footer.ftl" />