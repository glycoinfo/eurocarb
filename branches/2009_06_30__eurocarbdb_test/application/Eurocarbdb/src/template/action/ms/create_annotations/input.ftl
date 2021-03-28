<#assign title>Annotation Parameters Page</#assign>
<#setting url_escaping_charset='ISO-8859-1'>
<#include "/template/common/header.ftl" />

<h1>Annotation Settings Page</h1>

<@ww.form theme="simple">

<!-- Select Structure: -->

<table class="table_top_header">
  <thead>
    <tr><th>Select structure</th><th/></tr>
  </thead>
  <tbody>
    <tr>
      <td>
	<#if glycanSequence?exists >
	  <img style="display: block;" src="get_sugar_image.action?download=false&scale=1&opaque=false&inputType=gws&outputType=png&sequences=${glycanSequence.sequenceGWS?url}" />
	<#else>
	  No structure selected
	</#if>
      </td>
      <td>
	<#if (allowNewStructures!=0) >
	  <@ww.submit value="Select structure" name="submitAction" />
	</#if>
      </td>
    </tr>
  </tbody>
</table>

<!-- Fragment options: -->

<h3>Select type of derivatizations</h3>

<table class="table_form">
  <tr>
    <th>Persubstitution:</th>
    <td>
      <select name="massOptions.derivatization" size="1">	
	<#list persubstitutions as p>
	  <#if p.abbreviation==massOptions.derivatization>
	  <option value="${p.abbreviation}" selected="true">${p.name}</option> 
	  <#else/>
	  <option value="${p.abbreviation}">${p.name}</option> 
	  </#if>
	</#list>
      </select>
    </td>
  </tr>
  <tr>
    <th>ReducingEnd:</th>
    <td>
      <select name="massOptions.reducingEndTypeString" size="1">	
	<#list reducingEnds as r>
	  <#if r.abbreviation==massOptions.reducingEndTypeString>
	  <option value="${r.abbreviation}" selected="true">${r.name}</option> 
	  <#else/>
	  <option value="${r.abbreviation}">${r.name}</option> 
	  </#if>
	</#list>
      </select>
    </td>
  </tr>  
</table>

<h3>Select fragments to be calculated</h3>

<table class="table_form">
  <tr>
    <th>B fragments:</th><td><@ww.checkbox label="B fragments" name="fragmentOptions.addBFragments" /></td>
    <th>Y fragments:</th><td><@ww.checkbox label="Y fragment" name="fragmentOptions.addYFragments" /></td>
  </tr>
  <tr>
    <th>C fragments:</th><td><@ww.checkbox label="C fragment" name="fragmentOptions.addCFragments" /></td>
    <th>Z fragments:</th><td><@ww.checkbox label="Z fragment" name="fragmentOptions.addZFragments" /></td>
  </tr>
  <tr>
    <th>A fragments:</th><td><@ww.checkbox label="A fragment" name="fragmentOptions.addAFragments" /></td>
    <th>X fragments:</th><td><@ww.checkbox label="X fragment" name="fragmentOptions.addXFragments" /></td>
  </tr>
</table>

<h3>Select maximum number of fragmentations</h3>

<table class="table_form">
  <tr><th>Max no. of cleavages:</th><td><@ww.select label="Max no. of cleavages" name="fragmentOptions.maxNoCleavages" list="{1,2,3,4,5}" /></td></tr>
  <tr><th>Max no. of cross-ring cleavages</th><td><@ww.select label="Max no. of cross rings" name="fragmentOptions.maxNoCrossrings" list="{1,2,3,4,5}" /></td></tr>
</table>
  
<h3>Select polarity and charged ions</h3>

<table class="table_form">
  <tr><th>Positive mode:</th><td><@ww.checkbox label="Positive mode" name="annotationOptions.positiveMode" /></td></tr>
  <tr><th>Max no. of charges:</th><td><@ww.select label="Max No. of charges" name="annotationOptions.maxNoCharges" list="{1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of H<sup>+</sup>:</th><td><@ww.select label="Max No. of H+" name="annotationOptions.maxNoHIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of Na<sup>+</sup>:</th><td><@ww.select label="Max No. of Na+" name="annotationOptions.maxNoNaIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of K<sup>+</sup>:</th><td><@ww.select label="Max No. of K+" name="annotationOptions.maxNoKIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of Li<sup>+</sup>:</th><td><@ww.select label="Max No. of Li+" name="annotationOptions.maxNoLiIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
</table>

<table class="table_form">
  <tr><th>Neutral exchanges:</th><td><@ww.checkbox label="Neutral exchanges" name="annotationOptions.computeExchanges" /></td></tr>
  <tr><th>Max No. of ex Na<sup>+</sup>:</th><td><@ww.select label="Max No. of ex Na+" name="annotationOptions.maxExNaIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of ex K<sup>+</sup>:</th><td><@ww.select label="Max No. of ex K+" name="annotationOptions.maxExKIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
  <tr><th>Max No. of ex Li<sup>+</sup>:</th><td><@ww.select label="Max No. of ex Li+" name="annotationOptions.maxExLiIons" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
</table>

<h3>Specify mass accuracy</h3>

<table class="table_form">
  <tr><th>Select mass accuracy:</th><td><@ww.textfield label="Accuracy of mass" name="annotationOptions.massAccuracy" /></td><td><@ww.select label="" name="annotationOptions.massAccuracyUnit" list="{'Da','ppm'}" /></td></tr>
</table>

<h3>Specify quality of the annotation</h3>

<table class="table_form">
  <tr><th>Quality of the Annotation</th><td><@ww.select label="Quality of the Annotation" name="contributorQuality" list="{0,1,2,3,4,5,6,7,8,9,10}" /></td></tr>
</table>

<@ww.submit value="Back" name="submitAction" />
<@ww.submit value="Annotate" name="submitAction" />

</@ww.form>

<#include "/template/common/footer.ftl" />