<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>CASPER</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<div>Please cite as: <i>
Sequence determination of oligosaccharides and regular polysaccharides using NMR spectroscopy and a novel Web-based version of the computer program CASPER</i>
<br/>
P.-E. Jansson, R. Stenutz and G. Widmalm;
<i>Carbohydr. Res.</i> <b>341</b> (2006), 1003-10; <a href="http://www.ncbi.nlm.nih.gov/sites/entrez?cmd=Retrieve&db=PubMed&dopt=AbstractPlus&list_uids=16564037">PubMed 16564037</a></div>
<br/>

<div>CASPER welcome page</div>

<p><@ww.a href="casper_simulate.action">Simulate Spectra</@ww.a></p>
<p><@ww.a href="casper_determine.action">Determine Structure</@ww.a></p>


<#include "/template/common/footer.ftl" />

