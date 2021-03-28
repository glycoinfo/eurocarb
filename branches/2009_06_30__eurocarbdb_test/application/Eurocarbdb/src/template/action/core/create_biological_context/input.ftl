<div class="yui-navset yui-skin-sam">
  <@ww.form id="biological_context" style="simple">
    <@ww.textfield name="taxonomySearch" label="Enter a taxonomy name" />
    <@ww.textfield name="tissueTaxonomySearch" label="Enter a tissue name" />
  
    <@ww.textfield name="diseaseDropdown" label="Enter a disease name" />
    <div id="seen_diseases"></div>
    <div style="clear:both; height: 0px;"></div>

    <@ww.textfield name="perturbationDropdown" label="Enter a perturbation name" />
    <div id="seen_perturbations"></div>
    <div style="clear:both; height: 0px;"></div>

    <@ww.submit value="Next" />
  </@ww.form>
</div>

<script type="text/javascript">

connect(window,'onload',function() {
  new ECDB.Autocompleter('user_autocompleter.action','taxonomy_name').apply($('biological_context_taxonomySearch'));
  new ECDB.Autocompleter('user_autocompleter.action','tissue_name').apply($('biological_context_tissueTaxonomySearch'));
  var disease_ac = new ECDB.Autocompleter('user_autocompleter.action','disease_name').apply($('biological_context_diseaseDropdown'));
  var perturbation_ac = new ECDB.Autocompleter('user_autocompleter.action','perturbation_name').apply($('biological_context_perturbationDropdown'));


  disease_ac.itemSelectEvent.subscribe(
    partial(
        ECDB.appendMultipleValues,
        'disease',
        $('biological_context_diseaseDropdown'),
        $('seen_diseases')
        )
  );

  perturbation_ac.itemSelectEvent.subscribe(
    partial(
        ECDB.appendMultipleValues,
        'perturbation',
        $('biological_context_perturbationDropdown'),
        $('seen_perturbations')
        )
  );

});

</script>