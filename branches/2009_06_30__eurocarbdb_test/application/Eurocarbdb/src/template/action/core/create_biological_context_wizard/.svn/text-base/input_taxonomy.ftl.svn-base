<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context</#assign>
<#include "/template/common/header.ftl" />

<@eurocarb.app_context 
    list =[ "Create biological context", 
            "taxonomy",
            "tissue taxonomy", 
            "disease associations", 
            "perturbation associations", 
            "glycoconjugate associations" ]
    current="taxonomy" 
    />


<h1>${title}</h1>

<#-- show a query form -->
<@ww.form>

<@ww.textfield label="Enter a full or partial taxonomy name" name="taxonomyName" />

<@ww.textfield label="Alternatively, enter an NCBI Taxonomy Id" name="ncbiId" value="" />

<td colspan="2"><input type="button" value="Back <-" onclick="history.back()" 
              /><input type="submit" value="Continue ->" /></td>

</@ww.form>


<#include "/template/common/footer.ftl" />