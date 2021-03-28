<#assign title>Provide additional data</#assign>
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />


<h1>${title}</h1>

<#if ( message?length > 0 )>
	<div style="padding: 1em 0 1em 0; color: darkred;">
		${message}	
	</div>
</#if>

<#assign contribs = allContributors />

<#if ( contribs?size > 0 )>

	<@ww.form onsubmit="on_form_submit();" method="post" id="frmInput" name="frmInput" enctype="multipart/form-data">
		<@ww.select name="contributorId" 
		            list=contribs 
		            listKey="contributorId" 
		            listValue="contributorName"
		            label="Contributor" />

		<@ww.submit value="Submit" />

	</@ww.form>

<#else/>
    <p>
        There are no contributors in the database, you'll need to
        first <a href="create_contributor.action">create one</a>.
    </p>
</#if>

<#include "/template/common/footer.ftl" />
