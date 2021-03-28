<#assign title>Contribute structure: sequence details</#assign>
<#include "/template/common/header.ftl" />
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<h1>${title}</h1>

<#if glycanSequence?exists >

<p>The association between structure and biological context has been
successfully created.</p>

<p>
  <img style="display: block;" 
       src="get_sugar_image.action?download=true&inputType=gws&outputType=png&sequences=${glycanSequence.sequenceGWS?url}" 
       />
</p>

<table class="table_left_header">
  <tr>
    <th>Id</th> 
    <td>${glycanSequence.glycanSequenceId}</td>
  </tr>
  <tr>
    <th>Contributor</th> 
    <td><@ecdb.detail_link 
    object=glycanSequence.contributor 
    text=glycanSequence.contributor.contributorName /></td>
  </tr>
  <tr>
    <th>Date Entered</th> 
    <td>${glycanSequence.dateEntered?date}</td>
  </tr>        
  
  <!-- biological contexts for this sequence -->
  <tr>
    <th>Biological context in which this sequence has been observed</th>
    <td>
      <#if ( biologicalContext?exists ) >
        <@ecdb.biological_context bc=biologicalContext /><br/><br/>
      <#else/>
        (There is no biological context information for this sequence)
      </#if>
    </td>
  </tr>  

  <!-- references -->
  <tr>
    <th>References</th>
    <td>
      <#if ( references?exists && references?size>0) >
      <ul>
	<#list references as r>
	<li>
	  <@ecdb.reference ref=r/>
	</li>
	</#list>
      </ul>
      <#else/>
      <p>
	There are no references associated to this structure.
      </p>
      </#if>
    </td>
  </tr>    
</table>

<@ww.form theme="simple">
  <@ww.submit name="submitAction" value="Add MS data" />
</@ww.form>

<#else/>
<p>
  No sequence!
</p>
</#if>

<#include "/template/common/footer.ftl" />
