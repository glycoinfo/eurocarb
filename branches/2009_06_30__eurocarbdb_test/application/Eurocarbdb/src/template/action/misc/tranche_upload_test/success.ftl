<#assign title>Tranche upload test</#assign>
<#include "/template/common/header.ftl" />

<p>A file with file length ${file.length()} Bytes
</p>
<p>This file has the hash: ${hash}
</p>
<p>To look at this file use: <a href="tranche_upload_test.action?hash=${hash?url('ISO-8859-1')}">this link</a>.
</p>

<#include "/template/common/footer.ftl" />