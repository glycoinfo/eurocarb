/**
 * @fileoverview
 * Autocompletion library for ECDB. Use the factory to
 * create an autocomplete object that can be applied to
 * any text fields that you want to apply it to.
 *
 * Usage:
 * <pre>
 *		autocomplete_maker = new ECDB.AutoCompleter('http://autocomplete_url','taxonomy_name');
 *    autocomplete_maker.apply($('myinput_element'));
 * </pre>
 */

if ( typeof(ECDB) == 'undefined' ) {
  ECDB = {};
}

/**
 * ECDB.Autocompleter
 * @class
 */
if ( typeof(ECDB.AutoCompleter) == undefined ) {
	ECDB.Autocompleter = {};
}

ECDB.Autocompleter = function(autocomplete_url, autocomplete_key) {
  this._datasource = this.getDatasource(autocomplete_url);  
  this._autocomplete_key = autocomplete_key;
};

ECDB.Autocompleter.prototype.getDatasource = function(autocomplete_url) {
  if (! ECDB.Autocompleter.dataSource) {
    ECDB.Autocompleter._initDatasource(autocomplete_url);
  }
  return ECDB.Autocompleter.dataSource;
};

ECDB.Autocompleter.prototype.apply = function(element) {
  var md = MochiKit.DOM;
  if ( ! element ) {
      log("No element passed, returning");
      return;
  }

  result_container = md.DIV();
  if (element.nextSibling) {
      element.parentNode.insertBefore(result_container,element.nextSibling);
  } else {
      element.parentNode.appendChild(result_container);
  }
	
  var oAC = new YAHOO.widget.AutoComplete(element, result_container, this.getDatasource());
  
  oAC.queryDelay = 0.25;
  oAC.minQueryLength = 3;
  oAC.forceSelection = true;
  
  search_key = this._autocomplete_key;
  
  // We need to bind the function to this object, so we can get access to its
  // member variable (autocomplete_key)
  
  oAC.generateRequest = bind(function(sQuery) {
    return "?queryType="+this._autocomplete_key+"&queryString=" + sQuery ;
  },this);
  oAC.formatResult = function(oResultData, sQuery, sResultMatch) {
    counter = counter + 1;
    var alts = oResultData.alternates ? " <i>"+ oResultData.alternates + "</i>" : "";
    var result_string = oResultData.name + alts;
    
    if (oResultData.supplemental != '') {
        result_string = "<span>"+result_string+'</span><span class="supplemental">'+oResultData.supplemental+"</span>";
    }
    
    if (oResultData.resultclass != '') {
        return "<div style=\"width: 100%; height: 100%;\" class=\"autocomplete_"+oResultData.resultclass+"\">"+result_string+"</div>";
    }
    return result_string;
  };
  oAC.dataRequestEvent.subscribe(function(completer,query,req) {
     addElementClass(oAC.getInputEl(),'autocomplete_loading');
  });
  oAC.dataReturnEvent.subscribe(function(completer,query,req) {
     removeElementClass(oAC.getInputEl(),'autocomplete_loading');
  });  
  oAC.containerPopulateEvent.subscribe(function(completer){
        var lis = oAC.getListEl().childNodes;
        if ( ! lis ) {
            return;
        }
        var last_class = '';
        for (var li = lis[0]; li != null; li = li.nextSibling) {
          li.className = '';
          if(li.childNodes[0] && li.childNodes[0].className) {
              var new_class = li.childNodes[0].className;
              if (last_class != new_class) {
                  last_class = new_class;
                  md.addElementClass(li,"first_of_class");
                  if (li.previousSibling) {
                      md.addElementClass(li.previousSibling,"last_of_class");
                  }
              }              
              md.addElementClass(li,new_class);
          } else {
              if (last_class != '' && li.previousSibling) {
                  md.addElementClass(li.previousSibling,"last_of_class");
                  last_class = '';                  
              }
          }
        }
      },this);
      
  oAC.resultTypeList = false;
  
  return oAC;
};

ECDB.Autocompleter._initDatasource = function(autocomplete_url) {

  var oDS = new YAHOO.util.XHRDataSource(autocomplete_url);

  oDS.responseType = YAHOO.util.XHRDataSource.TYPE_TEXT;

  oDS.responseSchema = {
      recordDelim: "\n",
      fieldDelim: "\t",
      fields: ["name", "alternates","resultclass","supplemental"]
  };
  
  oDS.maxCacheEntries = 5;

  // Don't let the responses come out of order
  
  oDS.connXhrMode = "ignoreStaleResponses";
  
  this.dataSource = oDS;
};