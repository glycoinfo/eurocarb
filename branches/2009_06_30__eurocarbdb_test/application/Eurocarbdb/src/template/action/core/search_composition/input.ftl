<#assign title>Search Structures by Composition</#assign>
<#include "/template/common/header.ftl" />

<#import "/template/lib/FormInput.lib.ftl" as input />

<style>

	#searchCriteriaDisplay
	{
		border:		1px solid #aaaaaa;
		padding:	0.3em;
		font-size: 12px;
	}
	
	.wwFormTable
	{
		border: 1px solid #999999;
		border-top-width: 2px;
		border-bottom-width: 2px;
	}
	
	.criterion
	{
		border-bottom: 1px solid #aaaaaa;
	}
	
	.criterion .component
	{
	}
	
	.criterion .occurances
	{
		float: right;	
	}

</style>

<script language="javascript">
	var arrData = new Array();
	
	
	function isDigit(num) 
	{
		if (num.length>1){return false;}
		var string="1234567890";
		if (string.indexOf(num)!=-1){return true;}
		return false;
	}
	
	function isInteger(val)
	{
		if (val.length == 0)
		{
			return false;
		}
		
		for(var i=0;i<val.length;i++)
		{
			if(!isDigit(val.charAt(i)))
			{
				return false;
			}
		}
		
		return true;
	}
	
	function trim(stringToTrim) 
	{
		return stringToTrim.replace(/^\s+|\s+$/g,"");
	}
	
	function clear()
	{
		arrData = new Array();
		renderTable();
	}
					divOuter.appendChild(divComponent);				

	function mode_changed() 
	{
		var strMode = document.getElementById('mode').value;
		
		if (strMode == '-')
		{
			strDisplay = 'inline';
		}
		else
		{
			strDisplay = 'none';
		}
	
		document.getElementById('number2').style.display = strDisplay;
	}

	function addCriterion(strComponent, strOccurances)
	{
		var strComponent = document.getElementById("component").value;
		var strMode = document.getElementById("mode").value;
		
		var objNumber1 = document.getElementById('number1');
		var objNumber2 = document.getElementById('number2');
		
		var strNumber1 = trim(objNumber1.value);
		var strNumber2 = trim(objNumber2.value);
		
		if (!isInteger(strNumber1))
		{
			return ;
		}
		
		if (strMode == '-' && !isInteger(strNumber2))
		{
			return ;
		}
		
		for (nKey in arrData)
		{
			strComponent_stored = arrData[nKey][0];
			strMode_stored = arrData[nKey][1];
			strNumber1_stored = arrData[nKey][2];
			strNumber2_stored = arrData[nKey][3];
			
			if (strComponent_stored == strComponent)
			{
				if (strMode == '=' && strMode_stored == '=')
				{
					return;
				}
			}
			
		}
		
		objNumber1.value = "";
		objNumber2.value = "";
		
		arrData.push( new Array(strComponent, strMode, strNumber1, strNumber2) );
		
		renderTable();
	}
	
	function renderTable()
	{
		var objTable = document.getElementById("criteria");
		
		// clear table
		nObj = objTable.cloneNode(false);
		objTable.parentNode.insertBefore(nObj, objTable);
		objTable.parentNode.removeChild(objTable);		
		
		if (arrData.length == 0)
		{
			document.getElementById("searchCriteriaEmpty").style.display = "block";
			document.getElementById("searchCriteriaClear").style.display = "none";
		}
		else
		{
			document.getElementById("searchCriteriaEmpty").style.display = "none";
			document.getElementById("searchCriteriaClear").style.display = "block";
			
			// display search criteria in table
			for (nKey in arrData)
			{
				strComponent = arrData[nKey][0];
				strMode = arrData[nKey][1];
				strNumber1 = arrData[nKey][2];
				strNumber2 = arrData[nKey][3];
				
				if (strMode == '-')
				{
					strOperation = strNumber1 + strMode + strNumber2;
				}
				else
				{
					strOperation = strMode + strNumber1;
				}
				
				divOuter = document.createElement("div");
				divOccurances = document.createElement("div");
				divComponent = document.createElement("div");
				
				divOuter.setAttribute("class", "criterion");
				
				divOccurances.setAttribute("class", "occurances");
				divOccurances.appendChild(document.createTextNode(strOperation));
				
				divComponent.setAttribute("class", "component");
				divComponent.appendChild(document.createTextNode(strComponent));

				divOuter.appendChild(divOccurances);
				divOuter.appendChild(divComponent);				
				
				document.getElementById("criteria").appendChild(divOuter);
			}
		}
		
	}
	
	function on_form_submit()
	{
		var strSearchCriteria = "";
	
		for (nKey in arrData)
		{
			strComponent = arrData[nKey][0];
			strMode = arrData[nKey][1];
			strNumber1 = arrData[nKey][2];
			strNumber2 = arrData[nKey][3];

			strSearchCriteria += strComponent + ";" + strMode + ";" + strNumber1 + ";" + strNumber2 + ";";			
		}
		
		if (strSearchCriteria.length > 0)
		{
			strSearchCriteria = strSearchCriteria.substr(0, strSearchCriteria.length - 1);
		}
		
		document.getElementById('searchCriteria').value = strSearchCriteria;
	}

</script>

<h1>${title}</h1>


<#if ( message?length > 0 )>
	<div style="padding: 1em 0 1em 0; color: darkred;">
		${message}	
	</div>
</#if>

<#assign allComponents = components />

<#if ( allComponents?size > 0 )>
	<@ww.form onsubmit="on_form_submit();" method="post" id="frmInput" name="frmInput">
		            
		<tr>
		    <td colspan="2">
		    	<@ww.hidden name="searchCriteria" id="searchCriteria" />
		    
		    	<select name="component" id="component">
					<#list components as comp>
						<option value="${comp}">${comp}</option>
					</#list>		    	
				</select>
		    
				<select name="mode" id="mode" onchange="mode_changed();">
					<option value="=">equals</option>
					<option value=">">greater then</option>
					<option value="<">less then</option>
					<option value="-">between</option>
				</select>
				
				<input type="text" value="" name="number1" id="number1" size="3" />
				<input type="text" value="" name="number2" id="number2" style="display: none;" size="3" />
				
		    	<input type="button" onclick="addCriterion(); return false;" value="Add" />
			</td>
		</tr>
		
		<tr>
		    <td colspan="2">
		    	<div id="searchCriteriaDisplay">
		    		<div id="searchCriteriaEmpty" style="display:none;">
		    			no search criteria specified
		    		</div>
		    		
		    		<div id="criteria">
		    			
		    		</div>
		    		
		    		<div id="searchCriteriaClear" style="display:none; padding-top: 0.5em; text-align: center;">
		    			<a href="javascript: clear();">Clear</a>
		    		</div>
		    	</div>
		    </td>
		</tr>

		<@ww.submit value="Search" />
		
	</@ww.form>
<#else/>
	<p>
		No compositions stored in database.
	</p>
</#if>

<script>
	renderTable();
</script>


<#include "/template/common/footer.ftl" />
