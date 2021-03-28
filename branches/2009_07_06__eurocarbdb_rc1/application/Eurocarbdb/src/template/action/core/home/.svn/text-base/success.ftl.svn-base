<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />
<@ecdb.header title="EuroCarbDB Home"/>

<@ecdb.context_box title="About EurocarbDB">
<p>
    EuroCarbDB is a repository of carbohydrate structures, experimental evidence, 
    and carbohydrate-oriented research and analysis tools.
    It is a <a target="_blank" href="http://cordis.europa.eu/infrastructures/activities.htm">
    Research Infrastructure</a> <a target="_blank" href="http://cordis.europa.eu/infrastructures/ds.htm">
    Design Study</a> funded by the 6th Research Framework Program of the European Union.
    <br/>
    <br/>
    <a href="${base}/about.action">more info</a>
</p>
</@ecdb.context_box>

<@ecdb.context_box title="Links">
<p>
    <a href="http://eurocarb.googlecode.com">EurocarbDB @ googlecode</a>:<br/>
    the epicentre of open-source EurocarbDB development<br/>
    <br/>
    <a href="http://eurocarbdb.org">eurocarbdb.org</a>:<br/> 
    official source of EurocarbDB reports and recommendations<br/>
</p>
</@ecdb.context_box>

<h1>Welcome to EuroCarbDB</h1>

<p>
    This database contains: 
    <ul>
        <li>${countAllStructures} unique glycan sequences</li> 
        <li>${countHplcEvidence} HPLC, ${countMsEvidence} Mass Spectrometry, and ${countNmrEvidence} NMR analyses</li> 
        <li>${countAllReferences} references, including ${countJournalReferences} journal references</li> 
        <li>${countTaxonomy} unique taxonomies, 
            ${countTissueTaxonomy} unique tissues, 
            ${countDisease} diseases, 
            ${countPerturbation} perturbations, and 
            ${countGlycoconjugate} glycoconjugates</li> 
    </ul>
</p>

<#if currentContributor.isLoggedIn() >
    <#assign changes = currentContributor.getMyRecentContributions(10) />
    <#if (changes?exists && changes?size > 0) >
    <h2>Your recent additions</h2>
    <p>
        (showing 10 most recent additions)
        <ul>
        <#list changes as x >
            <li>added <@ecdb.detail_link object=x text=x.type /> on ${x.dateEntered?date}</li>
            <#if ( x_index >= 10 ) ><#break/></#if>
        </#list>
        </ul>
    <#else/>
        <!-- user hasnt added anything yet! -->
    </#if>
    </p>
<#else/>
    <#assign changes = action.recentChanges />
    <h2>Recent additions</h2>
    <p>
    <#if (changes?exists && changes?size > 0) >
        (showing 10 most recent additions)
        <ul>
        <#list changes as x >
            <li>added <@ecdb.detail_link object=x text=x.type /> on ${x.dateEntered} by user '<@ecdb.contributor c=x.contributor />'</li>
            <#if ( x_index >= 10 ) ><#break/></#if>
        </#list>
        </ul>
    <#else/>
        (nothing recent)    
    </#if>
    </p>
</#if>

<!-- include google calendar -->
<h2>Recent and upcoming events</h2>
<iframe src="http://www.google.com/calendar/embed?showTitle=0&amp;showPrint=0&amp;showCalendars=0&amp;height=500&amp;wkst=2&amp;hl=en_GB&amp;bgcolor=%23ffffff&amp;src=g8hs8ts6g0i7em1p9i51ghemck%40group.calendar.google.com&amp;color=%23A32929&amp;ctz=Europe%2FLondon" style=" border-width:0 " width="700" height="500" frameborder="0" scrolling="no"></iframe>

<@ecdb.footer/>
