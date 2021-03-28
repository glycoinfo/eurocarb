<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>CASPER</#assign>

<#include "/template/common/header.ftl" />

<style type="text/css">
<!-- 

.hide{
	display:none;
}

-->
</style>

<script language="javascript">
<!--
function vue(str)
{
  document.forms['view'].elements['structure'].value=str;
  document.forms['view'].submit();
}

function toggleShow()
{
  var cl;
  var theRules = new Array();

  if (document.styleSheets[1].cssRules)
    theRules = document.styleSheets[1].cssRules
  else if (document.styleSheets[1].rules)
    theRules = document.styleSheets[1].rules

  for (var i=0; i<theRules.length; i++)
  {
    if(theRules[i].selectorText == '.' + 'hide')
    {
      cl=theRules[i];
    }
  }
  if (cl.style.display != 'none' ) 
    {
      cl.style.display = 'none';
    }
    else
    {
      cl.style.display = 'table-cell';
    }
}
// -->
</script>

<h1>${title}</h1>

<div>Please cite as: <i>
Sequence determination of oligosaccharides and regular polysaccharides using NMR spectroscopy and a novel Web-based version of the computer program CASPER</i>
<br/>
P.-E. Jansson, R. Stenutz and G. Widmalm;
<i>Carbohydr. Res.</i> <b>341</b> (2006), 1003-10; <a href="http://www.ncbi.nlm.nih.gov/sites/entrez?cmd=Retrieve&db=PubMed&dopt=AbstractPlus&list_uids=16564037">PubMed 16564037</a></div>
<br/>
<form name="view" method="post" action="casper_determine_assign.action"
      enctype="multipart/form-data">
<input type="hidden" name="structure" />
<table>
${results}
</table>
</form>

<@ww.form action="ccpn_project_save" method="post">
<#if savedProject!="">
  <@ww.submit value="Save as CCPN project" />
</#if>
</@ww.form>

<#include "/template/common/footer.ftl" />

