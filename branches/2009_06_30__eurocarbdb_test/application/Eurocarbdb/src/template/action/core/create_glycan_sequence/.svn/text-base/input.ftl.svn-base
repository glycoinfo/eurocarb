<#assign title>Enter new sequence</#assign>
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />

<h1>${title}</h1>

<#assign contribs = action.getAllContributors() />
<#if ( contribs?size > 0 )>

<@ww.form>

<#-- <@ww.textfield label="Enter contributor id" name="contributor.contributorId" /> -->
<@ww.select name="contributor.contributorId" 
            label="Contributor id"
            list=contribs 
            listKey="contributorId" 
            listValue="contributorName" />

<@ww.textfield label="Enter sequence" name="sequence" size="40" />

<@ww.submit value="Continue ->" />

</@ww.form>

<#else/>
    <p>
        There are no contributors in the database, you'll need to
        first <a href="create_contributor.action">create one</a>.
    </p>
</#if>

<#include "/template/common/footer.ftl" />