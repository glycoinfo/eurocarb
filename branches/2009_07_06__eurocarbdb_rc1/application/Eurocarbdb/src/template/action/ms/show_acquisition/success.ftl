<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Acquisition Details Page</#assign>
<#setting url_escaping_charset='ISO-8859-1'>

<@ecdb.use_js_lib name="${'AjaxFormSubmitter'}"/>
<@ecdb.use_js_lib name="${'ScanNavigator'}"/>

<#include "/template/common/header.ftl" />

<style type="text/css">

.acquisition_sequence_details img {
  height: 100px;
}

.scan_detail .annotation_summary {
  float: left;
}

.scan_detail .annotation_summary img {
  height: 75px;
}

.annotation_list, .peaklist_table
{
  height: 500px;
}

</style>

<h1>Overview of Acquisition num. ${acquisition.acquisitionId} <#if acquisition.contributor.equals(currentContributor)><@ecdb.actionlink name="edit_acquisition!input" class="ecdb_button" params="acquisition.acquisitionId=${acquisition.acquisitionId}">Edit</@></#if></h1>

<#if acquisition.experimentStep?exists>
<a href="show_experiment_step.action?experimentStepId=${acquisition.experimentStep.experimentStepId}">Show parent acquisition</a>
</#if>

<h2>Biological contexts</h2>

<div>
<#if (acquisition.biologicalContexts?exists && acquisition.biologicalContexts?size>0) >
  <div class="acquisition_context_details">
    <#list acquisition.biologicalContexts as context >
      <@ecdb.short_biological_context context=context />
      <#if (context.glycanSequences?exists && context.glycanSequences?size>0) >
      <div class="acquisition_sequence_details">
        <#list acquisition.glycanSequences as sequence >
          <@ecdb.linked_sugar_image id=sequence.id />
        </#list>
        <div style="clear: both; height: 0px; width: 100%"></div>
      </div>
      </#if>
    </#list>
  </div>
</#if>
<#if (acquisition.references?exists && acquisition.references?size>0)>
  <div class="acquisition_reference_details">
  <h2>References</h2>
    <ul>
      <#list acquisition.references as r >    
        <li><@ecdb.reference ref=r/></li>    
      </#list>
    </ul>
  </div>
</#if>

  <div class="acquisition_parameter_details">
    <h2>Acquisition details</h2>
      <p><em>Device:</em> ${acquisition.device.manufacturer.name} ${acquisition.device.model}<br/>
      <em>Date obtained:</em> ${acquisition.dateEntered?datetime}</p>

        <#if (acquisition.filename?exists && acquisition.filename?size>0) >
        <a href="get_file.action?uri=${acquisition.filename?url}">download file</a>
        <#else>
        no file specified.
        </#if>
  </div>
</div>

<div style="width: 100%; height: 0px; clear: both;"></div>

<h2>Scan Objects</h2>

<#macro show_scan_nodes scans parentScanId="">
<#if (scans?size>0)>
<#if (parentScanId != '') >
  <#assign ul_id="id='scan_list_"+parentScanId+"'"/>
<#else>
  <#assign ul_id=""/>
</#if>
<ul ${ul_id} class="scan_list">
  <#list scans as scan>
  <li id="list_${scan.scanId?c}">
    <div class="scan_link" id="scan_link_${scan.scanId?c}">Scan ${scan.scanId?c}, 
    <#if (scan.msExponent==1)>MS<#elseif (scan.msExponent==2)>MS/MS<#else>MS<sup>${scan.msExponent}</sup></#if>
    <#if (scan.msExponent>1)>, base peak m/z: ${scan.basePeakMz}</#if>
    </div>
    <@show_scan_nodes scans=scan.childScans parentScanId=scan.scanId?c />
    <#assign a_scan_detail >
    <div id="scan_detail_${scan.scanId?c}" class="scan_detail">
      <h2>Scan ${scan.scanId?c}
        <#if (scan.peakLabeleds.size()>0) >
        <@ecdb.actionlink class="ecdb_button" name="show_scan" params="scanId=${scan.scanId?c}" onclick="return ECDB.edit_acquisition_scan_peaklist_event(event);" >Show peaks</@>
        </#if>
        </h2>
      <@ecdb.scan_detail_brief scan=scan />
    </div>
    </#assign>
    <#assign scan_details = scan_details + [a_scan_detail] />
  </li>
  </#list>  
</ul>
</#if>
</#macro>
  
<#if (acquisition.scans?size>0)>
<#assign scan_details = []>
<div id="all_scans_container" class="no_sequence_selected">
<div id="all_scans" class="ygtv-highlight">
<@show_scan_nodes scans=acquisition.rootScans parentScanId='root'/>
</div>
<div id="scan_details_container">
  <#list scan_details as a_scan_detail>
  ${a_scan_detail}
  </#list>
</div>
<div style="clear: both; height: 0px; width: 100%;"></div>
</div>
</#if>

<script type="text/javascript">
connect(window,"onload",function() {
  ECDB.edit_acquisition_scan_peaklist_event = ECDB.AjaxFormSubmitter.InlineEventFactory('peaklist_table');

ECDB.AjaxFormSubmitter.PanelBasedFactory('show_annotation_link','annotation_list');
  new ECDB.ScanNavigator($('all_scans'));
});
</script>


<#include "/template/common/footer.ftl" />