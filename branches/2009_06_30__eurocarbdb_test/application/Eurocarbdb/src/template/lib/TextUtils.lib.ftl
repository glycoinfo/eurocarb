<#--  
= TextUtils.lib.ftl =

== Description ==

A library of generic Freemarker text macros.

== Usage ==

To use this library in templates, use the following line:
    
    <#import "/template/lib/TextUtils.lib.ftl" as text />

...assuming that this file is located at "$WEBAPPLICATION_ROOT/template/lib". 

== Author ==

mjh <matt@ebi.ac.uk>

== Macros ==
-->

<#-------------------------------------------------------------------
=== macro: repeat ===

Repeats a given section of text a given number of times.    

Usage:

    <@repeat count > ... </@repeat>

Args:

    count  - number of times to repeat given content.
    
Example:

    <@repeat count=3 >RepeatMe!</@repeat>

prints:

    RepeatMe!RepeatMe!RepeatMe!
    
-->
<#macro repeat count ><#if (count <= 0)><#return><#else><#list 1..count as i><#nested></#list></#if></#macro>


<#macro join list by=", "><#if ((! list?exists) || (list?size == 0))><!-- (empty list) --><#return></#if><#list list as i>${i}<#if (i_index != list?size - 1)>${by}</#if></#list></#macro>


<#macro joinMap map joinEntriesBy=", " joinPairsBy=":" order=map?keys?sort ><#if ((! map?exists) || (map?size == 0))><!-- (empty map) --><#return></#if><#list order as key><#if (key_index > 0)>${joinEntriesBy}</#if>${key}${joinPairsBy}${map[key]}</#list></#macro>




<#------------------------------------------------------------------- 
=== macro: step_indent ===

Used to create an indented list of items.

Usage:
    <@step_indent count > ... </@step_indent>
    <@step_indent count indent > ... </@step_indent>
    <@step_indent count indent prefix > ... </@step_indent>

Args:
    count   - number of times to repeat ${indent}.
    indent  - string to use as indent. Default '&nbsp;&nbsp;'
    prefix  - string to use after indent and before item content. Default '-&gt;&nbsp;'.
              Note: does not print ${prefix} if ${count} == 0.  

Example:

    <#list 0..3 as i >
        <@step_indent count=3 >
            ${i}
        </@step_indent>
    </#list>

prints:

    0
      -> 1
        -> 2
          -> 3

Author: mjh

-->
<#macro step_indent  count indent="&nbsp;&nbsp;" prefix="-&gt;&nbsp;" >
    <#if (count <= 0) >
        <#nested>
    <#else>
        <#list (1..count) as i >${indent}</#list>${prefix}<#nested>
    </#if>
</#macro>




<#macro wikipedia 
    ><a class=" wikipedia " href="http://wikipedia.org/wiki/Special:Search?go=1&search=<#nested>" title="Search wikipedia for '<#nested>' (results not guaranteed)">Wikipedia</a></#macro>
    
    
<#macro ncbitaxonomy id ><a class=" ncbi " href="http://www.ncbi.nlm.nih.gov/Taxonomy/Browser/wwwtax.cgi?id=${id?c}"><#nested/></a></#macro>    

