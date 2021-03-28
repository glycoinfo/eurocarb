<#--  Define the JS dependencies for the various ECDB libraries that
      we are writing for ECDB. Add a new macro that expands out to include
      the various dependencies for each page
-->

<#macro dependencies_for name="" >
  <#if name=="AjaxFormSubmitter">
    <@AjaxFormSubmitterDependencies/>  
  </#if>
  <#if name=="AlphabetisedTabbedList">
    <@AlphabetisedTabbedListDependencies/>
  </#if>
  <#if name=="AutoCompleter">
    <@AutoCompleterDependencies/>
  </#if>
  <#if name=="ContextImageSearcher">
    <@ContextImageSearcherDependencies/>
  </#if>
  <#if name=="DatePicker">
    <@DatePickerDependencies/>
  </#if>  
  <#if name=="TagVisualisation">
    <@TagVisualisationDependencies/>
  </#if>
  <#if name=="YUI::Tabs">
    <@YUITabsDependencies/>
  </#if>
  <#if name="YUI::TreeView">
    <@YUITreeViewDependencies/>
  </#if>
  <#if name="YUI::Calendar">
    <@YUICalendarDependencies/>
  </#if>
  <#if name=="Google::OpenIdLogin">
    <@GoogleOpenIdDependencies/>
  </#if>
</#macro>

<#macro AjaxFormSubmitterDependencies>
  <@YUIPanelDependencies/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/connection/connection-min.js"/>
</#macro>

<#macro AlphabetisedTabbedListDependencies>
  <@YUITabsDependencies/>
</#macro>

<#macro AutoCompleterDependencies>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/yahoo-dom-event/yahoo-dom-event.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/animation/animation-min.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/connection/connection-min.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/datasource/datasource-min.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/autocomplete/autocomplete-min.js"/>
  <@ecdb.include_css url="http://yui.yahooapis.com/combo?2.7.0/build/autocomplete/assets/skins/sam/autocomplete.css"/>
</#macro>

<#macro ContextImageSearcherDependencies>
  <@ecdb.include_js url="http://www.google.com/uds/api?file=uds.js&amp;v=1.0&amp;key=ABQIAAAAr_xtq1d2hA_VHp-TR9qd7hSFwAFaCaZ3JBS-01eY_iQW05e-xxSg73bWY_Vk6nhcDVq0hNLJ-n2AyQ"/>
</#macro>

<#macro DatePickerDependencies>
  <@YUICalendarDependencies/>
</#macro>

<#macro TagVisualisationDependencies>

</#macro>

<#macro GoogleOpenIdDependencies>
  <@ww.url value="/js/lib/google/popuplib.js" includeParams="none" id="url_to_add"/>
  <@ecdb.include_js url=url_to_add />
</#macro>

<#macro YUICalendarDependencies>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/yahoo-dom-event/yahoo-dom-event.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/calendar/calendar-min.js" />
  <@ecdb.include_css url="http://yui.yahooapis.com/2.7.0/build/calendar/assets/skins/sam/calendar.css"/>
</#macro>

<#macro YUITabsDependencies>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/yahoo-dom-event/yahoo-dom-event.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/element/element-min.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/tabview/tabview-min.js"/>
  <@ecdb.include_css url="http://yui.yahooapis.com/2.7.0/build/tabview/assets/tabview.css"/>
</#macro>

<#macro YUIPanelDependencies>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/yahoo-dom-event/yahoo-dom-event.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/container/container-min.js"/>
  <@ecdb.include_css url="http://yui.yahooapis.com/2.7.0/build/container/assets/skins/sam/container.css"/>
</#macro>

<#macro YUITreeViewDependencies>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/yahoo-dom-event/yahoo-dom-event.js"/>
  <@ecdb.include_js url="http://yui.yahooapis.com/2.7.0/build/treeview/treeview-min.js"/>
  <@ecdb.include_css url="http://yui.yahooapis.com/2.7.0/build/treeview/assets/skins/sam/treeview.css"/>
</#macro>

