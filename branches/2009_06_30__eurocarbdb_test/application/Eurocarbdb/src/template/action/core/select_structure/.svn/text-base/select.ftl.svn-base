<#import "/template/lib/FormInput.lib.ftl" as input />
<#assign title>Select structure</#assign>

<#include "/template/common/header.ftl" />

<#include "scripts.ftl"/>

<#if action.hasActionErrors() >
  <div class="error_message">
  <#list action.actionErrors as the_error >
    <p>${the_error}</p>
  </#list>
  </div>
</#if>

<h1>${title}</h1>

<p>Specify the glycan structure using the builder applet.</p>

<@ww.form theme="simple" onsubmit="on_form_submit();" method="post" id="frmInput" name="frmInput" enctype="multipart/form-data">
  <input type="submit" name="submitAction" value="Cancel" />
  <input type="submit" name="submitAction" value="Next" />

  <#include "input.ftl"/>
  
</@ww.form>

<#include "/template/common/footer.ftl" />