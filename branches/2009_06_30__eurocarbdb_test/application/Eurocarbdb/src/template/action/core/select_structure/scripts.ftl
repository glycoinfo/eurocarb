<script language="javascript">    
  connect(window,'onload',function() {
    this.wait_time = this.wait_time? this.wait_time : 1;
    
    if (!document.GlycanBuilder.isActive()) 
    {
      callLater(this.wait_time,partial(this,counter+1));
      this.wait_time = 2 * this.wait_time;
      return ;
    }
    
    <#if (sugarImageNotation?exists) >
    document.GlycanBuilder.setNotation("${sugarImageNotation}");
    </#if>
    <#if sequenceGWS?exists > 
    document.GlycanBuilder.setDocument("${sequenceGWS}");
    </#if>
  });

  function on_form_submit()
  {
    document.frmInput.sequenceGWS.value = document.GlycanBuilder.getDocument();
  }	
  
</script>
