<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<#assign title>Biological context search</#assign>

<@ecdb.use_js_lib name="${'YUI::Tabs'}"/>
<@ecdb.use_js_lib name="${'AutoCompleter'}" />

<#include "/template/common/header.ftl" />
<style type="text/css">
  .short_glycan_sequence_context {
    width: 300px;
    height: 75px;
    font-size: 0.75em;
    margin: 5px;
    float: left;
  }
  
  .short_glycan_sequence_context img {
    max-height: 50px !important;
  }
  
  .short_glycan_sequence_context:hover {
    cursor: pointer;
    background: #9999CC;
    border: solid #888888 1px;
  }
  
  .short_glycan_sequence_context:hover a {
    color: #ffffff !important;  
  }
</style>

<h1>Select the sequence you wish to add evidence to</h1>
<h2>Or, alternatively, <@ecdb.actionlink name="contribute_structure">create a new sequence</@></h2>
<div>
<#list glycanSequenceContexts as context >
  <@ecdb.short_glycan_sequence_context context=context />
</#list>
<div style="clear: both; width: 100%; height: 0px;"></div>
</div>
<script type="text/javascript">
connect(window,'onload',function() {
  var contexts = getElementsByTagAndClassName('*','short_glycan_sequence_context');
  for (var i = 0; i < contexts.length; i++) {
    var a_context = contexts[i];
    var re = /glycanSequenceContext(\d+)/
    if (a_context.className.match(re)) {
      var matched_id = RegExp.$1;
      connect(a_context,"onclick", partial(function(someid) {
        window.location=("?glycanSequenceContextId="+someid);
      },matched_id));
    }
  }
});
</script>

<#include "/template/common/footer.ftl" />