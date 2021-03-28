<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<#assign title>Search Structures</#assign>

<@ecdb.use_js_lib name="${'YUI::Tabs'}"/>
<@ecdb.use_js_lib name="${'AutoCompleter'}"/>

<#include "/template/common/header.ftl" />

<style type="text/css">
  #main {
    overflow: visible;
  }
</style>

<#assign action_name="search_glycan_sequence.action?">

<h1>${title}</h1>

<#if (additionalQueries?size>0) >
<#assign title="Refine existing search"/>
<p>From your existing search:</p>
<ul>
  <#list additionalQueries as query>
  <li>${query.description} (${query.resultCount} results)</li>
  </#list>
</ul>
<p>refine your query by adding new search terms</p>
</#if>

<@ecdb.context_box title="Previous searches">
<div id="glycan_sequence_query_history"
  <ul>
  <#list queryHistory?reverse as query>
    <#if query.queryTime?exists >
    <li><a href="${action_name}historicalQueriesToRun=${queryHistory.indexOf(query)}" class="query_result_count">${query.resultCount} results</a> <span class="query_description">${query.description}</span><span class="query_time">${query.queryTime.time?datetime}</span></li>
    </#if>
  </#list>
  </ul>
</div>
</@>

<!-- intro -->
<div id="search_intro">
<p>
  This page allows you to search for glycan sequences by biological context 
  and physical mass/composition. Alternatively, you can also 
  <a href="${base}/search_substructure.action">search by glycan substructure</a>.
</p>
</div>

<@ww.form action="search_glycan_sequence" method="post">

<div id="search_boxes" class="yui-navset yui-skin-sam">
  <ul class="yui-nav">
    <li class="selected"><a href="#bc_search">Biological context</a></li>
    <li><a href="#mass_search">Mass</a></li>
    <li><a href="#composition_search">Composition</a></li>
    </ul>

    <div class="yui-content">

    <!-- biological context search -->
    <div id="bc_search">
        <@ww.textfield name="taxonomyName" label="Enter a taxonomy/species name" />
        <@ww.textfield name="tissueName" label="Enter a tissue name" />
        <@ww.textfield name="diseaseName" label="Enter a disease name" />
    </div>

    <div id="mass_search">
        <br/>
        <em>This feature temporarily disabled. It will return soon.</em>
        <br/>
        <br/>
        <br/>
        
<#-- disabled until working...
    <@ww.textfield name="discreteMass" label="Enter a specific mass (Da)" />
        <@ww.textfield name="discreteMassTolerance" label="and a tolerance (Da)" />
        <br/>
        - or -
        <br/>
        <@ww.textfield name="lowMass" label="Enter a low mass (Da) in a mass range" />
        <@ww.textfield name="highMass" label="and a high mass (Da)" />
        <br/>
-->        
        <#--
        <@ww.radio name="useAvgMass" value="false" label="monoisotopic mass" />
        <@ww.radio name="useAvgMass" value="true"  label="average mass" />
        -->
<#-- disabled until working...
        <input type="radio" name="avgMass" value="false" selected="selected" /> monoisotopic mass
        <input type="radio" name="avgMass" value="true"  /> average mass
        <br/>
-->
    </div>
        
    <div id="composition_search">
        <br/>
        <em>This feature temporarily disabled. It will return soon.</em>
        <br/>
        <br/>
        <br/>
<#-- disabled until working...
        <@ww.textfield name="exactComp" label="Enter an exact composition" />
        <br/>
        - or -
        <br/>
        <@ww.textfield name="minComp" label="Enter a minimum composition" />
        <@ww.textfield name="maxComp" label="and a maximum composition" />      
-->
    </div>
</div>
  
<@ww.submit value="Search ->" />


</div>

<input type="hidden" name="isNewQuery" value="true"/>

<#list historicalQueriesToRefine as historyId>
<input type="hidden" name="historicalQueriesToRun" value="${historyId}"/>
</#list>

</@ww.form>


<script type="text/javascript">
connect(window,'onload',function() {
  new YAHOO.widget.TabView('search_boxes'); 

  new ECDB.Autocompleter('autocompleter.action','taxonomy_name').apply($('search_glycan_sequence_taxonomyName'));

  new ECDB.Autocompleter('autocompleter.action','tissue_name').apply($('search_glycan_sequence_tissueName'));

  new ECDB.Autocompleter('autocompleter.action','disease_name').apply($('search_glycan_sequence_diseaseName'));

});
</script>

<#include "/template/common/footer.ftl" />

