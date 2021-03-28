<#assign title>Search</#assign>
<#assign onload_function="init_applet()">
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />

<script language="javascript">    
  function init_applet() {
    if (!document.GlycanBuilder.isActive()) 
    {
      setTimeout("init_applet()", 1000);
      return ;
    }
    
    <#if (sugarImageNotation?exists) >
    document.GlycanBuilder.setNotation("${sugarImageNotation}");
    </#if>
  }
</script>


<h1>${title}</h1>

<#if ( message?length > 0 )>
	<div style="padding: 1em 0 1em 0; color: darkred;">
		${message}	
	</div>
</#if>

<@ww.form theme="simple" onsubmit="document.frmSearch.sequenceGWS.value = document.frmSearch.GlycanBuilder.getDocument();" method="post" name="frmSearch" id="frmSearch">
	<applet id="GlycanBuilder" name="GlycanBuilder" code="org.eurocarbdb.application.glycanbuilder.GlycanBuilderApplet.class" archive="GlycanBuilderApplet.jar" width=700 height=400 mayscript></applet>
	<br/>
	<@ww.hidden name="sequenceGWS" id="sequenceGWS" />
	<@ww.hidden name="mode" id="mode"/>

	<input type="submit" value="Search for exact structure" onclick="document.frmSearch.mode.value='exact';"/>
	<input type="submit" value="Search for sub-structure" onclick="document.frmSearch.mode.value='substructure';"/>
	<input type="submit" value="Fuzzy search" onclick="document.frmSearch.mode.value='fuzzy';"/>

</@ww.form>

<#include "/template/common/footer.ftl" />
