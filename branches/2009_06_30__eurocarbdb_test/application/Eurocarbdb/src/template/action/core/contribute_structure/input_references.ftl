<#assign title>Add references</#assign>
<#import "/template/lib/FormInput.lib.ftl" as input />
<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<@ecdb.use_js_lib name="${'YUI::Tabs'}"/>

<#include "/template/common/header.ftl" />
<@ecdb.actionlink class="ecdb_button" name="contribute_structure_finish">Add to database</@>

<h1>${title}</h1>

<#include "/template/action/core/create_references/input.ftl"/>

<#include "/template/common/footer.ftl" />
