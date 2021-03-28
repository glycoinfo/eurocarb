

<applet id="GlycanBuilder" name="GlycanBuilder" code="org.eurocarbdb.application.glycanbuilder.GlycanBuilderApplet.class" archive="GlycanBuilderApplet.jar" width="700" height="400" mayscript="true">
</applet>
<p>
<input type="submit" id="sel_seq" name="submitAction" value="Select sequence" />
</p>
<@ww.hidden name="sequenceGWS" value="" id="sequenceGWS" />

<script type="text/javascript">

  connect($('sel_seq'),'onclick',function() {
    $('sequenceGWS').value = document.GlycanBuilder.getDocument();
    return true;
  });

  connect($('sel_seq'),'ajaxonclick',function() {
    $('sequenceGWS').value = document.GlycanBuilder.getDocument();
    return true;
  });
  
  connect(window,'onload',function() {
    this.wait_time = this.wait_time? this.wait_time : 1;
    if (!document.GlycanBuilder.isActive()) 
    {
      callLater(this.wait_time,partial(arguments.callee));
      this.wait_time = 2 * this.wait_time;
      return ;
    }

    document.GlycanBuilder.setNotation(ECDB.GetRenderingType());

    connect(ECDB,"notationchange",function() {
      document.GlycanBuilder.setNotation(ECDB.GetRenderingType());      
    });

    <#if sequenceGWS?exists > 
    document.GlycanBuilder.setDocument("${sequenceGWS}");
    </#if>
  });

  ECDB.NEED_TO_LOAD_SCRIPTS=false;
  
</script>
 
