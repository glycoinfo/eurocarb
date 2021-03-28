<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Acquisition Editing Page</#assign>
<#setting url_escaping_charset='ISO-8859-1'>

<@ecdb.use_js_lib name="${'AjaxFormSubmitter'}"/>
<@ecdb.use_js_lib name="${'DatePicker'}"/>
<@ecdb.use_js_lib name="${'YUI::TreeView'}"/>

<#include "/template/common/header.ftl" />

<style type="text/css">
div.acquisition_details > div
{
  position: relative;
  width: 45%;
  float: left;
  margin-left: 10px;
}
div.acquisition_details .short_glycan_sequence_context {
  font-size: 11px;
}
div.acquisition_details .metadata {
  display: none;
}
div.acquisition_parameter_details .wwgrp
{
  width: 45%;
  margin-left: 10px;
  float: left;  
}
div.acquisition_parameter_details .wwgrp select
{
  width: 100%;
}

div.scan_detail
{
  display: none;
  cursor: auto;
  color: #333333;
}

#all_scans_container {
  position: relative;
}

#all_scans {
  width: 40%;
  float: left;
  height: 300px;
  overflow: auto;
}

#scan_details_container {
  float: right;
  width: 59%;
  margin-left: 1%;
}

.ygtvcontent {
  padding-top: 3px !important;
  padding-bottom: 3px !important;
  padding-left: 5px !important;
  padding-right: 5px !important;
  border: solid #ffffff 1px;
  -webkit-border-top-right-radius: 10px;
  -webkit-border-bottom-right-radius: 10px;
  -moz-border-radius: 0px 10px 10px 0px;
  cursor: pointer;
}

.ygtvcontent:hover {
  background: #dddddd;
  border: #dddddd;
}

.ygtv-highlight1 .ygtvcontent {
  background: #9999CC !important;
  color: #ffffff;
  border: solid #666699 1px;
  -webkit-box-shadow: 2px 2px 2px rgba(0, 0, 0, 0.3);
  -moz-box-shadow: rgba(0, 0, 0, 0.3) 2px 2px 2px;
}
</style>
<h1>Acquisition Details for ${acquisition.acquisitionId}</h1>
<div class="acquisition_details">
<#if (acquisition.glycanSequenceContexts?exists && acquisition.glycanSequenceContexts?size>0) >
<div class="acquisition_context_details">
  <#list acquisition.glycanSequenceContexts as context >
    <@ecdb.short_glycan_sequence_context context=context />
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
      <#if (acquisition.filename?exists && acquisition.filename?size>0) >
      <a href="get_file.action?uri=${acquisition.filename?url}">download file</a>
      <#else>
      no file specified.
      </#if>
<@ww.form>
      <@ww.hidden name="acquisition.acquisitionId" />
      <@ww.select label="Device" list="devices" listValue="fullModelName" listKey="id" size="1" name="acquisition.device.deviceId" value="acquisition.device.deviceId" />
      <@ecdb.datepicker name="acquisition.dateObtained" value=acquisition.dateObtained label="Date obtained"/> 
      <@ww.submit value="Update" name="submitAction"/>
</@ww.form>
</div>
</div>

<div style="width: 100%; height: 0px; clear: both;"></div>

<h2>Scan Objects</h2>
<p>
<@ecdb.actionlink class="ecdb_button" id="create_scan_button" name="create_scan!input" params="acquisitionId=${acquisition.acquisitionId?c}">Add a scan</@>
</p>
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
    <div id="scan_detail_${scan.scanId?c}" class="scan_detail" onclick="ECDB.stop_event(event);">
      <a class="ecdb_button" onclick="return ECDB.edit_acquisition_scan_link_event(event);" href="edit_scan!input.action?scan.scanId=${scan.scanId?c}">Edit</a>
      <a class="ecdb_button" href="create_scan!input.action?acquisitionId=${acquisition.acquisitionId}&parentId=${scan.scanId?c}" onclick="return ECDB.edit_acquisition_scan_link_event(event);">Add</a>
      <a class="ecdb_button" onclick="return ECDB.edit_acquisition_scan_no_response_link_event(event);" href="delete_scan.action?scan.scanId=${scan.scanId?c}">Delete</a>
      <@ecdb.actionlink class="ecdb_button" name="create_peaklist" params="scan.scanId=${scan.scanId?c}" onclick="return ECDB.edit_acquisition_scan_link_event(event);">Upload peak list</@>
      <!--<@ecdb.actionlink name="create_scan_image" params="scan.scanId=${scan.scanId?c}">Append image</@>-->
      <!--<@ecdb.actionlink name="create_annotations" params="scan.scanId=${scan.scanId?c}">Append annotations</@>-->
      <@ecdb.actionlink class="ecdb_button" name="upload_annotations!input" params="scan.scanId=${scan.scanId?c}" onclick="return ECDB.edit_acquisition_scan_link_event(event);" >Upload annotations</@><br/>
      <h2>Scan ${scan.scanId?c}</h2>
      <@ecdb.short_scan scan=scan />
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
<div id="all_scans_container">
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
  var data_importer = function(xml_data) {
    var target_node = xml_data.getElementById? xml_data.getElementById('scan_form') : ECDB.getElementByIdXML(xml_data,'scan_form');
    var imported_node = null;
    
    if (target_node == null) {
      var error_el = this.hasError(xml_data);
      if (error_el != null) {
        return this.importNode(error_el);
      }
    }

    var new_id = "scan_form_"+((new Date()).getTime());

    if (target_node.id) {
      target_node.id = new_id;
    } else {
      target_node.setAttribute('id', new_id);      
    }
    var imported_node = this.importNode(target_node);

    new ECDB.AjaxFormSubmitter(imported_node, partial(ECDB.AjaxFormSubmitter.CloseIfActionSucceeded,this));
    return imported_node;
  };

  /* We need to create an inlineable function for the events
     found within the TreeWidget, since the widget uses
     innerHTML to copy the data elements across, and 
     leaves the document tree in a mess.
  */
  ECDB.edit_acquisition_scan_link_event = function(event) {
    if (! event ) {
      event = window.event;
    }
    var targ = event.target || event.srcElement;

    if ( ! targ._submitter ) {
      targ._submitter = new ECDB.AjaxFormSubmitter(targ,data_importer);
      targ._submitter.addPanelDisplay(document.body);
      connect(targ._submitter,"success",function() { window.location.reload(); });
    }
    
    signal(targ,"ajaxsubmit");
    return false;
  };

  ECDB.edit_acquisition_scan_no_response_link_event = function(event) {
    if (! event ) {
      event = window.event;
    }
    var targ = event.target || event.srcElement;
    
    if ( ! targ._submitter ) {
      targ._submitter = new ECDB.AjaxFormSubmitter(targ,partial(ECDB.AjaxFormSubmitter.CloseIfActionSucceeded,null));
      targ._submitter.addPanelDisplay(document.body);
      connect(targ._submitter,"success",function() { window.location.reload(); });
    }
    signal(targ,"ajaxsubmit");
    return false;    
  };

  var submitter = new ECDB.AjaxFormSubmitter($('create_scan_button'), data_importer );
  submitter.addPanelDisplay(document.body);
  connect(submitter,"success",function() { window.location.reload(); });
});

connect(window,"onload",function() {
  if ($('all_scans') == null) {
    return;
  }
  treeview = new YAHOO.widget.TreeView("all_scans");
  treeview.singleNodeHighlight = true;
  treeview.subscribe("clickEvent",treeview.onEventToggleHighlight);
  treeview.expandAll();
  treeview.render();
  treeview.subscribe("highlightEvent", function(node) {
    var nodes = [node];
    for (var a_node_idx in nodes) {
      var a_node = nodes[a_node_idx];
      if (a_node == null) {
        continue;
      }
      var scan_det_id = getElementsByTagAndClassName( '*',
                                    'scan_link',
                                    a_node.getContentEl()
                                  )[0].id.match(/\d+/);
      var scan_detail = $('scan_detail_'+scan_det_id);
      if (scan_detail != null) {
        if (a_node.highlightState == 1) {
          showElement(scan_detail);
        } else {
          hideElement(scan_detail);
        }        
      }      
    }
  });
});

</script>

<#include "/template/common/footer.ftl" />