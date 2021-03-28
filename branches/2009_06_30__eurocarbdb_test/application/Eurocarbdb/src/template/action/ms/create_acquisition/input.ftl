<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Acquisition Creation</#assign>

<@ecdb.use_js_lib name="${'DatePicker'}"/>

<#include "/template/common/header.ftl" />

<h1>Create Acquisition</h1>
<@ecdb.context_box title="Current Sequence">
<@ecdb.short_glycan_sequence_context context=glycanSequenceContext />
</@>

<h3>Specify acquisition parameters: </h3>

<@ww.form method="post" enctype="multipart/form-data">
<@ww.hidden name="glycanSequenceContext.glycanSequenceContextId"/>
<@ww.file label="mzXML file" name="acquisitionFile"/>
<@ww.select label="Device" list="devices" listValue="fullModelName" listKey="id" size="1" name="acquisition.device.deviceId" />
<#assign dateVal=''/>
<#if acquisition?exists>
  <#assign dateVal=acquisition.dateObtained/>
</#if>
<@ecdb.datepicker name="acquisition.dateObtained" value=dateVal label="Date obtained"/> 
      <@ww.submit value="Cancel" name="submitAction"/>
      <@ww.submit value="Create" name="submitAction"/>
</@ww.form>

<script type="text/javascript">


</script>

<#include "/template/common/footer.ftl" />