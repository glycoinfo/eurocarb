<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>CASPER</#assign>
<#assign onload_function="init_applet()">

<#include "/template/common/header.ftl" />

<script language="javascript">
<!--
function numeric(str)
{
  str=str.replace(/[^\d\s\.-]/g,"");
  return str;
}
function text(str)
{
  str=str.replace(/[^\w\s\.\(\)]/g,"");
  return str;
}
function check_input()
{
  var free = new Array();
  nres=0;

  f=document.forms['simulate'];
  f.elements['name'].value=numeric(f.elements['name'].value);
  f.elements['source'].value=numeric(f.elements['source'].value);
  f.elements['cShifts'].value=numeric(f.elements['cShifts'].value);
  f.elements['hShifts'].value=numeric(f.elements['hShifts'].value);
  f.elements['cCorrection'].value=numeric(f.elements['cCorrection'].value);
  f.elements['hCorrection'].value=numeric(f.elements['hCorrection'].value);

  if(f.elements['cCorrection'].value=='')
  {
    f.elements['cCorrection'].value='0';
  }
  if(f.elements['hCorrection'].value=='')
  {
    f.elements['hCorrection'].value='0';
  }
  

  f.sequenceGWS.value = document.GlycanBuilder.getDocument();

  if (validate_structure(f.sequenceGWS.value)==-1)
  {
    alert(f.sequenceGWS.value);
    return;
  }

  f.submit();
}

function validate_structure(str)
{
  pos=str.indexOf('?');
  while(pos!=-1)
  {
    if(str.indexOf('--')!=pos-2 && str.charAt(pos+1)!='[' && str.charAt(pos+1)!=']')
    {
      alert('Structure contains unspecified parts, such as linkages or anomeric states. Correct this.');
      return -1;
    }
    pos=str.indexOf('?',pos+1);
  }
  if(str.indexOf('redEnd')!=-1)
  {
    alert('Reducing end not allowed in CASPER. Correct this.');
    return -1;
  }
  return 0;
}

function init_applet()
{
  if (!document.GlycanBuilder.isActive()) 
    {
      setTimeout("init_applet()", 1000);
      return ;
    }
  <#if sugarImageNotation?exists >
    document.GlycanBuilder.setNotation("${sugarImageNotation}");
  </#if>
  <#if sequenceGWS?exists > 
    document.GlycanBuilder.setDocument("${sequenceGWS}");
  </#if>
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

${sequenceGWS}

<div>Simulate Spectra</div>
<table>

  <@ww.form method="post" name="simulate" action="casper_simulate_start"
  enctype="multipart/form-data">
    <tr><td>
	<@ww.file name="project" label="CCPN project" title="Load a CCPN project (.tgz format)" />
    </td></tr>

    <tr><td>
        <@ww.textfield value="${name}" name="name" label="Title"
		       onchange="this.value=text(this.value)" size="45"
		       maxlength="60"
		       title="Title of the structure/project"/>
    </td></tr>

    <tr><td>
	<@ww.textfield value="${source}" name="source" label="Source"
		       onchange="this.value=text(this.value)" size="45"
		       maxlength="60"
		       title="Source of data (literature reference)"/>
    </td></tr>

    <tr><td colspan=2>

    <applet id="GlycanBuilder" name="GlycanBuilder" code="org.eurocarbdb.application.glycanbuilder.GlycanBuilderApplet.class" archive="GlycanBuilderApplet.jar" width="600" height="300" mayscript="true">
    </applet>

    <@ww.hidden name="sequenceGWS" value="" id="sequenceGWS" />
    </td></tr>
    <tr>
      <td>
	<@ww.textarea value="${cShifts}" name="cShifts" cols="45" rows="7"
		      maxlength="250"
		      onchange="this.value=numeric(this.value)"
		      title="Experimental C shifts. Used for comparing with simulated data.">
	  <label class="label"><sup>13</sup>C chemical shifts</label>
	</@ww.textarea>
      </td>
      <td>
	<@ww.textarea value="${hShifts}" name="hShifts" cols="45" rows="7"
		      maxlength="250"
		      onchange="this.value=numeric(this.value)"
		      title="Experimental H shifts. Used for comparing with simulated data.">
	  <label class="label"><sup>1</sup>H chemical shifts</label>
	</@ww.textarea>
      </td>
    </tr>
    <tr>
      <td>
	<@ww.textfield name="cCorrection" value="${cCorrection}" size="3"
		       label="Correct by subtracting (ppm)"
		       maxlength="8"
		       onchange="this.value=numeric(this.value)"
		       title="Correct for systematic errors from e.g. referencing."/>
      </td>
      <td>
	<@ww.textfield name="hCorrection" value="${hCorrection}" size="3"
		       label="Correct by subtracting (ppm)"
		       maxlength="8"
		       onchange="this.value=numeric(this.value)"
		       title="Correct for systematic errors from e.g. referencing."/>
      </td>
    </tr>
    <tr><td>
      </td>
      <td align="right">
        <input value="Start simulation" type="button" onclick="check_input()"
	title="Start the calculations. Should only take a few seconds."/>
    </td></tr>
  </@ww.form>
</table>
	  

<#include "/template/common/footer.ftl" />

