<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>CASPER</#assign>
<#assign onload_function>for(i=1;i<9;i++) prot_disable(i);</#assign>

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
  free=fix_vars();
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
  
  for (i=1; i<9; i++)
  {
    // skip if this residue is not used (resN-field)
    if ( f.elements['residue'+i].value=='')
      continue;
    nres++;

    // posN-field
    pos=f.elements['linkToPos'+i].options[f.elements['linkToPos'+i].selectedIndex].value;
    link=f.elements['linkToResidue'+i].options[f.elements['linkToResidue'+i].selectedIndex].value;

    if (i==1 && pos=="m")
    {
//      f.elements['residue'+i].options[f.elements['residue'+i].selectedIndex].value+="OMe";
      if(link!='' || f.elements['linkToResidue'+i].selectedIndex!=0)
      {
        alert('Methyl glycosides can not link.');
	return;
      }
      continue;
    }

    // linkN-field
    j="abcdefgh".indexOf(link)+1;
    if (link=='')
    {
      j=0;
    }

    // skip if not linked (reducing end)
    if (j<1)
    {
      continue;
    }

    // check that 'to'-residue is selected
    if (f.elements['residue'+j].value=='')
    {
      alert('Residue '+i+' cannot link to residue '+j);
      return;
    }


    // check type of linkage
    if(free[j-1].indexOf(pos)==-1)
    {
      alert('Linkage between residue '+i+' and residue '+j+' is not valid');
      return;
    }

    // check that no other residue links this particular position and residue
    for (k=i+1; k<9; k++)
    {
      if (f.elements['residue'+k].value!='')
      {
        if (link==f.elements['linkToResidue'+k].options[f.elements['linkToResidue'+k].selectedIndex].value)
	{
          if(pos==f.elements['linkToPos'+k].options[f.elements['linkToPos'+k].selectedIndex].value)
          {
     	    alert('Residues '+i+' and '+k+' link to the same position');
     	    return;
    	  }
	}
      }
    }
  }
  if(nres==0 && f.elements['project'].value=='')
  {
    alert('No residues selected');
    return;
  }
  f.submit();
}

// Splits the residue field from the form into two parts. One of the parts is then put in an
// array which is returned.
function fix_vars()
{
  var free = new Array();
  f=document.forms['simulate'];
  for (i=1; i<9; i++)
  {
    t=f.elements['residue'+i].options[f.elements['residue'+i].selectedIndex].value.split('.');
//    f.elements['residue'+i].options[f.elements['residue'+i].selectedIndex].value=t[0];
    free[i-1]=t[1];
  }
  return free;
}

// Disables configuration and linkage fields if a protein residue is used.
function prot_disable(number)
{
  f=document.forms['simulate'];
  residue=f.elements['residue'+number];
  configuration=f.elements['configuration'+number];
  toPos=f.elements['linkToPos'+number];
  toRes=f.elements['linkToResidue'+number];

  if(residue.value=='Asn.4' || residue.value=='Ser.3' || residue.value=='Thr.3')
  {
    disabled=true;
  }
  else
  {
    disabled=false;
  }
  configuration.disabled=disabled;
  toPos.disabled=disabled;
  toRes.disabled=disabled;
}

// -->
</script>
<#macro unit_rows count>
  <#list 1..count as x>
    <tr>
      <td>
        ${x})
      </td>
      <td>
        <select name="configuration${x}" id="configuration${x}"
	title="Anomeric configuration of residue ${x}: alpha or beta.">
	  <option value="a">a</option>
	  <option value="b">b</option>
	</select>
      </td>
      <td>
        <select name="residue${x}" id="residue${x}"
	title="Specify residue of unit ${x}." onchange="prot_disable(${x})">
	  <option value="">none</option>
	  <#list residueList as residue>
	    <option value="${residue.value}">${residue.name}</option>
	  </#list>
	</select>
      </td>
      <td>
	<select name="linkToPos${x}" id="linkToPos${x}"
	 width="92" style="width: 92px"
	 title="Select which position in the next residue this residue links to.">
	  <#if x=1>
	    <option value="">not linked</option>
	    <option value="m">OMe</option>
	  </#if>
	  <#list 2..6 as i>
	    <option value="${i}">(->${i})</option>
	  </#list>
	</select>
      </td>
      <td>
	<select name="linkToResidue${x}" id="linkToResidue${x}"
	title="Select which residue this residue (nr ${x}) links to.">
	  <#if x=1>
	    <option value="">none</option>
	    <option value="a">self</option>
	  </#if>
	  <#list ["a1", "b2", "c3", "d4", "e5", "f6", "g7", "h8"] as i>
	    <#if x != i[1]?number>
	    <option value="${i[0]}">residue ${i[1]}</option>
	    </#if>
	  </#list>
	</select>
      </td>
    </tr>
  </#list>
</#macro>

<h1>${title}</h1>

<div>Please cite as: <i>
Sequence determination of oligosaccharides and regular polysaccharides using NMR spectroscopy and a novel Web-based version of the computer program CASPER</i>
<br/>
P.-E. Jansson, R. Stenutz and G. Widmalm;
<i>Carbohydr. Res.</i> <b>341</b> (2006), 1003-10; <a href="http://www.ncbi.nlm.nih.gov/sites/entrez?cmd=Retrieve&db=PubMed&dopt=AbstractPlus&list_uids=16564037">PubMed 16564037</a></div>
<br/>

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

    <tr><td>
        <table>
	  <tr>
	    <td></td><td></td>
	    <td><label for="residue1" class="label">Residue</label></td>
	    <td><label for="linkToPos1" class="label">Linkage</label></td>
	    <td><label for="linkToResidue1" class="label">Reducing end</label></td>
	  </tr>
	  <@unit_rows count=8 />
	</table>
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

