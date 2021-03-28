<#import "/template/lib/Eurocarb.lib.ftl" as ecdb />

<#assign title>Login</#assign>

<@ww.url action="acceptLogin.action" includeParams="none" id="openidPopupUrl">
  <@ww.param name="popup" value="true" />
</@ww.url>

<@ww.url value="/images/" includeParams="none" id="imagesUrl"/>

<@ecdb.use_js_lib name="${'Google::OpenIdLogin'}"/>

<#include "/template/common/header.ftl" />

<h1>${title}</h1>

<#if ( message?length > 0 )>
<div class="error_message">
  ${message}	
</div>
</#if>    

<script type="text/javascript">
</script>

<@ww.form theme="simple" method="post">
<table class="table_form">
  <tr><th>User name:</th><td><@ww.textfield name="username" /></td></tr>
  <tr><th>Password:</th><td><@ww.password label="Password" name="userpass" value="" /></td></tr>
  <tr><td><@ww.submit value="Login ->" /><!-- @ww.submit action="create_contributor" value="Register new user ->" /--></td></tr>
</table>
</@ww.form>

<p>
    Logins to the current version of EuroCarbDB are by invitation only. Please
    <a href="http://groups.google.com/group/eurocarb-users">join the users mailing list</a>
    and post a message requesting access if you would like a private login. Note that 
    only Contribute actions require logins: all Browse and Search functions do not 
    require a login.
</p>

<#-- temp disabled due to proxy issues

<img src="${imagesUrl}yahoo_openid.png" class="openid_button" id="login_yahoo" alt="Login using Yahoo account"/>
<img src="${imagesUrl}google_openid.png" class="openid_button" id="login_google" alt="Login using Google account"/>
<div class="section_toggle">
<a href="#" class="hd">Sign in with OpenID</a>
<div class="bd">
<@ww.form theme="simple" method="post">
Identifier <@ww.textfield name="openIdIdentifier" value="http://"/>
<@ww.submit value="Login ->"/>
</@ww.form>
</div>
</div>
--><#--
<script type="text/javascript">
<!--//

  connect(window,'onload',function() {
    var popup_func = ECDB.PopupOpenIDFunction('yahoo','${openidPopupUrl}','${redirectedUrl!"contribute.action"}');
    connect($('login_yahoo'),'onclick',popup_func);
  });
  
  connect(window,'onload',function() {
    var popup_func = ECDB.PopupOpenIDFunction('google','${openidPopupUrl}','${redirectedUrl!"contribute.action"}');
    connect($('login_google'),'onclick',popup_func);
  });
    
//- ->
</script>
-->

<#include "/template/common/footer.ftl" />
