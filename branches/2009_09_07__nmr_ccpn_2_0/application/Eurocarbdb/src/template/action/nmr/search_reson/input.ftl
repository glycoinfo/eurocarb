<#import "/template/lib/Eurocarb.lib.ftl" as eurocarb />

<#assign title>Search By NMR Frequency</#assign>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<p>
Search for all monosaccharide units with the shifts in the range below
</p>

<@ww.form action="search_reson" method="post">

<!-- biological context search -->
<table>
  <thead>
    <tr>
      <td></td>
      <td>atom type [H,C]</td>
      <td>chemical shift [ppm]</td>
      <td>error margin [ppm]</td>      
    </tr>
  </thead>
  <tbody>      
  <tr>
     <td>1</td>
     <td><input name="element1" type="text"></td>
     <td><input name="freq1" type="text"></td>
     <td><input name="error1" type="text"></td>
  </tr>
  <tr>
     <td>2</td>
     <td><input name="element2" type="text"></td>
     <td><input name="freq2" type="text"></td>
     <td><input name="error2" type="text"></td>
  </tr>
  </tbody>      
</table>
<@ww.submit value="Search" name="submitAction"/>
</@ww.form>

<#include "/template/common/footer.ftl" />


