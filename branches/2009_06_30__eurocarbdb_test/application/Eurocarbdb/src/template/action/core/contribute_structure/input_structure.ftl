<#assign title>Contribute structure: input sequence</#assign>
<#assign onload_function="init_applet()">
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />

<script language="javascript">    
  function on_form_submit()
  {
    document.frmInput.sequenceGWS.value = document.GlycanBuilder.getDocument();
  }
  
  function init_applet()
  {
    if (!document.GlycanBuilder.isActive()) 
    {
      setTimeout("init_applet()", 1000);
      return ;
    }
	
    <#if (sugarImageNotation?exists) >
    document.GlycanBuilder.setNotation("${sugarImageNotation}");
    </#if>
    <#if sequenceGWS?exists > 
    document.GlycanBuilder.setDocument("${sequenceGWS}");
    </#if>
  }	
</script>

<div class="error_message">
<#list action.actionErrors as the_error >
<p>${the_error}</p>
</#list>
</div>

<#if ( message?length > 0 )>
<div class="error_message">
  ${message}	
</div>
</#if>

<h1>${title}</h1>

<p>Specify the glycan structure using the builder applet.</p>
<@ww.form theme="simple" onsubmit="on_form_submit();" method="post" id="frmInput" name="frmInput" enctype="multipart/form-data">

    <@ww.hidden name="sequenceGWS" value="" id="sequenceGWS" />
    
    <applet id="GlycanBuilder" name="GlycanBuilder" code="org.eurocarbdb.application.glycanbuilder.GlycanBuilderApplet.class" archive="GlycanBuilderApplet.jar" width=700 height=400 mayscript>
    </applet>
    
    <br/>
    <div class="hidden_alt">
      <p>Alternatively you can upload a sequence from a file on your computer:</p>    
      <label>Glyco CT XML</label>
      <input type="file" name="sequenceFile" />
      <input type="submit" name="submitAction" value="Load" />
    </div>
    <br/>
    <hr/>
    <br/>
    <input type="submit" name="submitAction" value="Cancel" />
    <input type="submit" name="submitAction" value="Set context" />
    
    </@ww.form>

<#include "/template/common/footer.ftl" />
