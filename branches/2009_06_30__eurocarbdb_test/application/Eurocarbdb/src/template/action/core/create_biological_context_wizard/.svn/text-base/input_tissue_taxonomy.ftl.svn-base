<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />
<#assign title>Create new biological context - input tissue taxonomy</#assign>
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

<#-- show a query form -->
<form action="">
<table>
<tr>
<td><label for="tissueTaxonomyName">Enter a full or partial tissue taxonomy name</label></td>
<td><input type="text" id="tissueTaxonomyName" name="tissueTaxonomyName" /></td>
</tr>
<tr>
<td colspan="2"><input type="button" value="Back <-" onclick="history.back()" 
              /><input type="submit" value="Continue ->" /></td>
<tr>
<table>
</form>

<#include "/template/common/footer.ftl" />