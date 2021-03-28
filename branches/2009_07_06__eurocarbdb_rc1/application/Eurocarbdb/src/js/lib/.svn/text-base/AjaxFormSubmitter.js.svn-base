/**
 * @fileoverview
 * AJAX form submission library for ECDB. 
 *
 * Usage:
 * <pre>
 * </pre>
 */

if ( typeof(ECDB) == 'undefined' ) {
  ECDB = {};
}

/**
 * ECDB.AjaxFormSubmitter
 * @class
 */
if ( typeof(ECDB.AjaxFormSubmitter) == 'undefined' ) {
	ECDB.AjaxFormSubmitter = {};
}

ECDB.AjaxFormSubmitter = function(target_form,data_converter)
{
    this._target_form = target_form;
    this._data_converter = data_converter;
    if (target_form.nodeName.toUpperCase() == 'A') {
        this._makeAjaxLink(target_form);
        return;
    } else if (target_form.nodeName.toUpperCase() == 'FORM') {
        for ( var i = 0; i < target_form.elements.length; i++ ) {
            if (target_form.elements[i].type == 'file') {
                this._makeAjaxFileUpload(target_form);
                return;
            }
        }
        this._makeAjaxForm(target_form);
        return;
    }
    log("Not given a link or form element, assuming this is a display only request");
};

ECDB.AjaxFormSubmitter.PanelBasedFactory = function(node,formName)
{
    var elements = [node];
    if (typeof(node) == 'string') {
        elements = getElementsByTagAndClassName('*',node);        
    }
    var data_importer = null;
    if (formName != null) {
        data_importer = partial(ECDB.AjaxFormSubmitter.FormImporter,formName);
    } else {
        data_importer = partial(ECDB.AjaxFormSubmitter.SignalSuccessImporter,null);
    }
    for (var i = 0; i < elements.length; i++) {
        var submitter = new ECDB.AjaxFormSubmitter(elements[i], data_importer);
        submitter.addPanelDisplay(document.body);
        connect(submitter,"success",function() { window.location.reload(); });        
    }
    
};

ECDB.AjaxFormSubmitter.PanelBasedSubPageFactory = function(node,fragmentId)
{
    var elements = [node];
    if (typeof(node) == 'string') {
        elements = getElementsByTagAndClassName('*',node);        
    }
    var data_importer = null;
    if (fragmentId != null) {
        data_importer = partial(ECDB.AjaxFormSubmitter.FormFragmentImporter,fragmentId);
    } else {
        data_importer = partial(ECDB.AjaxFormSubmitter.SignalSuccessImporter,null);
    }
    for (var i = 0; i < elements.length; i++) {
        var submitter = new ECDB.AjaxFormSubmitter(elements[i], data_importer);
        submitter.addPanelDisplay(document.body);
        connect(submitter,"success",function() { window.location.reload(); });        
    }    
}

ECDB.AjaxFormSubmitter.InlineEventFactory = function(form_name,callback)
{
    return function(event) {
        if (! event ) {
            event = window.event;
        }
        var targ = event.target || event.srcElement;

        if (callback != null && typeof(callback) == 'function')
        {
            if (! bind(callback,targ)()) {
                return false;
            }
        }

        if ( ! targ._submitter ) {
            targ._submitter = ECDB.AjaxFormSubmitter.PanelBasedFactory(targ,form_name);
        }
    
        signal(targ,"ajaxsubmit");
        return false;
  };
};

ECDB.AjaxFormSubmitter.prototype.repr = function()
{
    return "AjaxFormSubmitter [ "+this._target_form.action+(this._panel ? " Panel " : "")+" ]";
};

ECDB.AjaxFormSubmitter.prototype.addPanelDisplay = function(parent_element)
{
    var panel = new YAHOO.widget.Panel( "xhr"+(new Date()).getTime(), {
        draggable: false,
        width: '100%',
        height: '100%',
        modal: true,
        zindex: 4,
        visible: false,
        close: true,
        underlay: "shadow",
        constraintoviewport: true,
        fixedcenter: "contained",
    });
    panel.setBody(MochiKit.DOM.DIV());
    panel.render(parent_element);
    connect(this,"onsubmit", function() {
        var loading_div = MochiKit.DOM.DIV({'class': 'ajax_loading'});
        panel.setBody(loading_div);
        panel.body.style.height = '100%';
        panel.center();
        panel.show();
    } );
    connect(this,"ondata", function() {
        ECDB.NEED_TO_LOAD_SCRIPTS = true;
        disconnectAll(window,'onload');
        replaceChildNodes(panel.body,this.data);
        panel.body.style.background = '#ffffff';
        panel.body.style.height = '100%';
        panel.body.style.overflow = 'auto';
        panel.center();
        if (ECDB.NEED_TO_LOAD_SCRIPTS) {
            var scripts = panel.body.getElementsByTagName('script');
            for (var i = 0; i < scripts.length; i++) {
                eval(scripts[i].innerHTML);
            }
        }
        signal(window,'onload');
    });
    
    connect(this,"onerror", function(data) {
        log("There was an error during form submission");
    });
    
    this._panel = panel;
    
    return panel;
};


ECDB.AjaxFormSubmitter.FormFragmentImporter = function(fragment_id,xml_data)
{
    var container_div = bind(ECDB.AjaxFormSubmitter.FormImporter,this)(fragment_id,xml_data);
    var forms = container_div.getElementsByTagName('form');
    for (var i = 0; i < forms.length; i++) {
        var new_submitter = new ECDB.AjaxFormSubmitter(forms[i], partial(ECDB.AjaxFormSubmitter.SignalSuccessImporter,this));
        connect(new_submitter,"onsubmit",bind(function() {
            signal(this,"onsubmit");
        },this));        
    }
    return container_div;
};

/**
 * Data importer method. When a form element is found in the received data, 
 * get it out of the DOM, and then attach a new AjaxFormSubmitter to it that
 * will trigger this object to signal a success if there are no errors on the
 * submission of that form
 */

ECDB.AjaxFormSubmitter.FormImporter = function(form_name,xml_data)
{
    var target_node = xml_data.getElementById? xml_data.getElementById(form_name) : ECDB.getElementByIdXML(xml_data,form_name);
    var imported_node = null;

    var error_el = this._hasError(xml_data);
    
    if (target_node == null) {
        if (error_el != null) {
          return this._importNode(error_el);
        }
    }

    var new_id = form_name+"_"+((new Date()).getTime());

    if (target_node.id) {
        target_node.id = new_id;
    } else {
        target_node.setAttribute('id', new_id);      
    }
    var imported_node = this._importNode(target_node);
    var container = imported_node;
    if (error_el != null) {
        var imported_error = this._importNode(error_el);
        container = MochiKit.DOM.DIV({});
        container.appendChild(imported_error);
        container.appendChild(imported_node);
    }

    var new_submitter = new ECDB.AjaxFormSubmitter(imported_node, partial(ECDB.AjaxFormSubmitter.SignalSuccessImporter,this));
    connect(new_submitter,"onsubmit",bind(function() {
        signal(this,"onsubmit");
    },this));
    return container;
};

/**
 * Data importer method. When attached to an existing form that has been opened
 * by another AjaxFormSubmitter, it will check for any errors, and if any are
 * found, signal to the original submitter that there is new data, appending
 * the error element.
 * If the action is successful, it signals a success, (which will trigger a 
 * close on panel based AjaxFormSubmitters).
 */

ECDB.AjaxFormSubmitter.SignalSuccessImporter = function(last_submitter, xml_data)
{
    log("Checking for the presence of ECDB errors");
    var error_element = this._hasError(xml_data);
    if (error_element != null)
    {
        log("Have found ECDB errors");
        if (last_submitter == null) {
            return this._importNode(error_element);
        }
        if (last_submitter._data_converter != null) {
            last_submitter.data = last_submitter._data_converter(xml_data);
        } else {
            last_submitter.data = xml_data;
        }
        var new_data = MochiKit.DOM.DIV();

        new_data.appendChild(this._importNode(error_element));
        
        if (last_submitter.data != null) {
            new_data.appendChild(last_submitter.data);
        }
        
        last_submitter.data = new_data;
        signal(last_submitter,"ondata");
    } else {
        log("No ECDB errors found");
        if (last_submitter && last_submitter._panel) {
            last_submitter._panel.hide();
            last_submitter._panel.body = MochiKit.DOM.DIV();
            signal(last_submitter,"success");
            return;
        }
        if (this._panel) {
            this._panel.hide();
            this._panel.body = MochiKit.DOM.DIV();
            signal(this,"success");
        }
    }
};

ECDB.AjaxFormSubmitter.prototype._hasError = function(xml_data)
{
    return xml_data.getElementById? xml_data.getElementById('errors') : ECDB.getElementByIdXML(xml_data,'errors');
};

ECDB.AjaxFormSubmitter.prototype._importNode = function(external_node)
{
    if ( document.importNode ) {
        return document.importNode(external_node,true);
    } else {
        var new_data = MochiKit.DOM.DIV();
        new_data.innerHTML = external_node.xml;
        return new_data.firstChild;
    }    
};

ECDB.AjaxFormSubmitter.prototype._makeAjaxLink = function(target_link)
{
    connect(target_link,'ajaxsubmit',this,partial(this._convertLinkToXHR,target_link));
    target_link.onclick = function() {
        signal(target_link,'ajaxsubmit');
        return false;
    }
};

ECDB.AjaxFormSubmitter.prototype._makeAjaxForm = function(target_form)
{
    connect(target_form,'ajaxsubmit',this,partial(this._convertFormToXHR,target_form));
    target_form.onsubmit = function() { 
        return false;
    };
    for (var i = 0; i < target_form.elements.length; i++) {
        if (target_form.elements[i].type == 'submit') {
            target_form.elements[i].onclick = function() {
                signal(this,'ajaxonclick');
                signal(target_form,'ajaxsubmit');
                return false;                
            };
        }
    }
};

ECDB.AjaxFormSubmitter.prototype._makeAjaxFileUpload = function(target_form)
{
    connect(target_form,'ajaxsubmit',this,partial(this._convertUploadToXHR,target_form));
    target_form.onsubmit = function() { 
        signal(target_form,'ajaxsubmit');
        return false;
    };
    for (var i = 0; i < target_form.elements.length; i++) {
        if (target_form.elements[i].type == 'submit') {
            target_form.elements[i].onclick = function(event) {
                ECDB.stop_event(event);
                signal(target_form,'ajaxsubmit');
                return false;                
            };
        }
    }
};

ECDB.AjaxFormSubmitter.prototype._convertUploadToXHR = function(target_form) {
    YAHOO.util.Connect.setForm(target_form, true);
    var myself = this;
    var uploadHandler = {
      upload: function(o) {
        myself._receivedData(o);
      },
      failure: function(o) {
        myself._errorOccurred(o);
      }
    };
    YAHOO.util.Connect.asyncRequest('POST', target_form.action, uploadHandler);
    signal(this,"onsubmit");
    return false;
}

ECDB.AjaxFormSubmitter.prototype._convertLinkToXHR = function(target_link) {
    var end_href = target_link.href;
    end_href += "&timestamp="+(new Date()).getTime();
    var deferred = doXHR(end_href, { mimeType: 'text/xml' });
    deferred.addCallbacks(bind(this._receivedData,this),bind(this._errorOccurred,this));
	signal(this,"onsubmit");
	return false;    
};

ECDB.AjaxFormSubmitter.prototype._convertFormToXHR = function(target_form) {
    var toSend = [];
    toSend['timestamp'] = (new Date()).getTime()+"";
	for( var i = 0; i < target_form.elements.length; i++) {	    
	    if (target_form.elements[i].type == "checkbox" && target_form.elements[i].checked == false) {
	        continue;
	    }
		toSend[target_form.elements[i].name] = target_form.elements[i].value;
	}
	var deferred = doXHR(target_form.action+"?"+queryString(toSend), { mimeType: 'text/xml' });
    deferred.addCallbacks(bind(this._receivedData,this),bind(this._errorOccurred,this));
	signal(this,"onsubmit");
	return false;
};

ECDB.AjaxFormSubmitter.prototype._receivedData = function(request)
{
    if (request.responseXML == null) {
        log("There was an error with the ajax request");
        signal(this,"onerror");
        return;
    }
    
    var returnedData = request.responseXML;
    
    if(document.all) {
        var doc=new ActiveXObject("Microsoft.XMLDOM");
        doc.async="false";
        var responseText = request.responseText+"";
        responseText = responseText.replace(/<!DOCTYPE.*">$/gm,'<?xml version="1.0"?>');
        doc.loadXML(responseText);
        returnedData = doc;
    }


    
    if (this._data_converter != null) {
        var converted_data = this._data_converter(returnedData)
        this.data = converted_data ? converted_data : this.data;
    } else {
        this.data = returnedData;
    }
    signal(this,"ondata");
};

ECDB.AjaxFormSubmitter.prototype._errorOccurred = function(request)
{
    signal(this,"onerror");
};