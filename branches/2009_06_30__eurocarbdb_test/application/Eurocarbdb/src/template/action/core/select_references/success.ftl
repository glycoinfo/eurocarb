<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<#assign title>References selected</#assign>
<#include "/template/common/header.ftl" />

<#import "/template/lib/TextUtils.lib.ftl" as text />

<h1>${title}</h1>

<#if (references?exists && references?size>0)>
  <ul>    
    <#list references as r >
      <li><@ecdb.reference ref=r/><li/>    
    </#list>
  </ul>
<#else/>
  <p>There are no selected references.</p>
</#if>

<#include "/template/common/footer.ftl" />