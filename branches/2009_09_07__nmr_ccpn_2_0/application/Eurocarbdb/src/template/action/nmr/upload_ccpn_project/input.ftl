<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>Upload NMR Project</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<div>
    ${message}
</div>

<p>
    Note: CCPN Projects consist of multiple files and have to be zipped (.zip or .tgz) prior to uploading.
<p>
    Note: Works with CCPN v 2 or later;
<p> 

<@ww.form theme="simple" method="post" enctype="multipart/form-data">
    <@ww.file label="mzXML file" name="projectFile"/>
    <br/><br/>
    <@ww.submit value="Upload" name="submitAction"/>
</@ww.form>

<#include "/template/common/footer.ftl" />

