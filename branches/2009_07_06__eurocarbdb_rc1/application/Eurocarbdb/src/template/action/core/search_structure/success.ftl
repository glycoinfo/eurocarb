<#assign title>Enter new sequence</#assign>
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />

<#if ( message?length > 0 )>
	<div style="padding: 1em 0 1em 0; color: darkred;">
		${message}	
	</div>
</#if>

glycanSequenceId set to ${glycanSequenceId}

<#include "/template/common/footer.ftl" />
