<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>Acquisition Creation</#assign>

<@ecdb.use_js_lib name="${'DatePicker'}"/>

<#include "/template/common/header.ftl" />
<style type="text/css">
  .short_glycan_sequence_context {
    width: 300px;
    height: 75px;
    font-size: 0.75em;
    margin: 5px;
    float: left;
  }
  
</style>

<h1>Create Acquisition</h1>
<h2>Annotated too...</h2>
<#if glycanSequenceContext?exists>
<@ecdb.glycan_sequence_context context=glycanSequenceContext />
</#if>

<h3>Specify acquisition parameters: </h3>
<@ww.form method="post" enctype="multipart/form-data">
<#if glycanSequenceContext?exists>
<@ww.hidden name="glycanSequenceContext.glycanSequenceContextId"/>
</#if>
<@ww.file label="mzXML file" name="acquisitionFile"/>
<@ww.select label="Device" list="devices" listValue="fullModelName" listKey="id" size="1" name="acquisition.device.deviceId" />
<#assign dateVal=''/>
<#if acquisition?exists>
  <#assign dateVal=acquisition.dateObtained/>
</#if>
<@ecdb.datepicker name="acquisition.dateObtained" value=dateVal label="Date obtained"/> 
<@ww.submit value="Create" name="submitAction"/>
</@ww.form>

<script type="text/javascript">


</script>

<#include "/template/common/footer.ftl" />