
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<#assign title>Summary of NMR evidence ${evidenceId}</#assign>

<#macro printPath path>
	<font class="res_path_element_first">RE</font>

	<#if (path?size > 0) >
		&gt;
	</#if>
	
	<#list path as item>
		<#if (item != path?last)>
			<font class="res_path_element_middle">${item}</font>	
			&gt;
		<#else>
			<font class="res_path_element_last">${item}</font>	
		</#if>
		
	</#list>
</#macro>

<#include "/template/common/header.ftl" />

<style>
	@import url(../css/action/nmr.css);
</style>

<script src="../js/prototype.js"></script>

<script>
	var strShowingID = null;

	function show_page(strID)
	{
		var el, li;
	
		if (strShowingID != null)
		{
			el = $(strShowingID);
			el.style.display = "none";
			
			li = $("li_" + strShowingID);
			li.className = "";
		}
		
		el = $(strID);
		el.style.display = "block";

		li = $("li_" + strID);
		li.className = "selected";
		
		strShowingID = strID;
		
		return false;
	}
	
	function toggle(strID)
	{
		el = $(strID);
		
		if (el.style.display == "block")
		{
			el.style.display = "none";
		}
		else
		{
			el.style.display = "block";
		}
	}
	
	function page_init() 
	{
		   // display first page
		   show_page('exp_details');
		   
			// apply alternating row colors
	       var rows = document.getElementsByTagName('div');
		   
		   j = 0;
	       for (var i=0; i < rows.length; i++) 
		   {
	               if (rows[i].className == "row")
				   {
						if (j % 2 == 0)
						{
	                      rows[i].className += " odd";
						}
						
						j += 1;
	               }
				   else if (rows[i].className == "section" || rows[i].className.indexOf("page") != -1)
				   {
						j = 0;
				   }
	       }
		   
	}
	
	function show_chemcomp(strMolType, strCcpCode)
	{
		var container = $('chemcomp');
		
		strUrl = "drawChemComp.action?molType=" + strMolType + "&ccpCode=" + strCcpCode;
		
		// container.innerHTML = "<img width=400 src='" + strUrl + "'/>";
		container.innerHTML = "<object data='" + strUrl + "'type=\"image/svg+xml\" width=400 />";
		
		outer = $('outer_chemcomp');
		
		outer.style.display = 'block';
		
	}

	window.onload = page_init;

</script>

<div id="outer_chemcomp" style="display: none;">
	<div class="chemcomp_close"><a href="" onclick="javascript: $('outer_chemcomp').style.display = 'none'; return false;">close</a></div>
	
	<div id="chemcomp">
	
	</div>
</div>

<h1>${title}</h1>

<div class="nmr">
  <div>download as CCPN</div>
  <ul class="nmr_menu">
    <li id="li_exp_details"><a href="" onclick="return show_page('exp_details');">Experimental Details</a></li>
    <li id="li_shifts"><a href="" onclick="return show_page('shifts');">Chemical Shifts</a></li>
  </ul>
  <div style="clear: left;"></div>

  <div class="page experimental_details" style="display: none;" id="exp_details">
    <h3>NMR Experimental details</h3>
    <#assign exps = action.getExperiments() />
    <table class="table_top_header full_width">  
      <thead>
        <tr>    
          <td>name</td>
          <td>type</td>
          <td>frequency</td>
          <td>details</td>
        </tr>
      </thead>
      <tbody>      
        <#list exps as e>
          <tr>    
            <td>${e.name}</td>
            <td>${e.numDim}D</td>            
            <td><#if (e.spectrometer)?? && (e.spectrometer.nominalFreq)??>${e.getSpectrometer().nominalFreq} MHz<#else>-</#if></td>
            <td><#if (e.details)??>${e.details}<#else>-</#if></td>
          </tr>
        </#list>
      </tbody>      
    </table>
  </div>		

  <div class="page shifts" style="display: none;" id="shifts">

    <#if action.evidence.glycanSequences?has_content >
      <#list evidence.glycanSequences as glycan>
        <a href="show_glycan_sequence.action?glycanSequenceId=${glycan.glycanSequenceId?c}"><img src="get_sugar_image.action?download=false&scale=1.0&outputType=png&tolerateUnknown=1&glycanSequenceId=${glycan.glycanSequenceId?c}&showRedend=true"/></a>
     </#list>
    <#else>
      no glycan sequence attached to evidence
    </#if>

    <#assign count = 0/>
    <#assign listTable = action.getMeasTable() />
    <#list listTable as e>
      <#assign count = count + 1/>
      <div><h3>Shift table ${count}</h3></div>
      <table class="table_top_header full_width">  
        <thead>
          <tr>    
            <td>residue num</td>
            <td>residue type</td>
            <td>atom name</td>
            <td>shift (ppm)</td>
            <td>CASPER</td>
          </tr>
        </thead>
        <tbody>
          <#assign shiftTable = action.getShiftTable(e) />
          <#list shiftTable as r>
            <tr>    
              <#assign config = action.getConfCode(r[5])/>
              <td>${r[0]}</td>
              <td><a href="show_comp.action?ccpCode=${r[1]}&descriptor=${r[5]}&linking=${r[6]}">${config}${r[1]}</a></td>
              <td>${r[2]}</td>
              <td>${r[3]}</td>
              <td><#if r[4]??>${r[4]}<#else>-</#if></td>
            </tr>
          </#list>
        </tbody>
      </table>
    </#list>
  </div>
</div>

<#include "/template/common/footer.ftl" />
