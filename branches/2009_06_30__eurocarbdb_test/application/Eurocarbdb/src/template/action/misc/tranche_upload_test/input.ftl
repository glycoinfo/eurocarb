<#assign title>Tranche upload test</#assign>
<#include "/template/common/header.ftl" />

<h1>${title}</h1>
<form method="post" enctype="multipart/form-data">
  File: <input type="file" name="file"/>
  <input type="submit"/>
</form>

<#include "/template/common/footer.ftl" />