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
    } else {
        for ( var i = 0; i < target_form.elements.length; i++ ) {
            if (target_form.elements[i].type == 'file') {
                this._makeAjaxFileUpload(target_form);
                return;
            }
        }
        this._makeAjaxForm(target_form);
    }
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
        fixedcenter: true,
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
        replaceChildNodes(panel.body,this.data);
        panel.body.style.background = '#ffffff';
        panel.body.style.height = '100%';
        panel.center();
    });
    
    connect(this,"onerror", function(data) {
        log("There was an error during form submission");
    });
    
    this._panel = panel;
    
    return panel;
};

ECDB.AjaxFormSubmitter.prototype.hasError = function(xml_data)
{
    return xml_data.getElementById? xml_data.getElementById('errors') : ECDB.getElementByIdXML(xml_data,'errors');
};

ECDB.AjaxFormSubmitter.prototype.importNode = function(external_node)
{
    if ( document.importNode ) {
        return document.importNode(external_node,true);
    } else {
        var new_data = MochiKit.DOM.DIV();
        new_data.innerHTML = external_node.xml;
        return new_data.firstChild;
    }    
}

ECDB.AjaxFormSubmitter.CloseIfActionSucceeded = function(last_submitter, xml_data)
{
    log("Checking for the presence of ECDB errors");
    var error_element = this.hasError(xml_data);
    if (error_element != null)
    {
        log("Have found ECDB errors");
        if (last_submitter == null) {
            return this.importNode(error_element);
        }
        if (last_submitter._data_converter != null) {
            last_submitter.data = last_submitter._data_converter(xml_data);
        } else {
            last_submitter.data = xml_data;
        }
        var new_data = MochiKit.DOM.DIV();

        new_data.appendChild(this.importNode(error_element));

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