/**
 * @fileoverview
 * Common Javascripts for ECDB
 *
 * Usage:
 * <pre>
 * </pre>
 */

if ( typeof(ECDB) == 'undefined' ) {
  ECDB = {};
}

ECDB.PopupOpenIDFunction = function(provider,return_url,redirect_url) {
    var endpoint = null;
    var dimensions = [0,0];
    if (provider == 'google') {
        endpoint = 'https://www.google.com/accounts/o8/ud';
        dimensions = [400,400];
    }
    if (provider == 'yahoo') {
        endpoint = 'https://open.login.yahooapis.com/openid/op/auth';
        dimensions = [800,400];
    }
    
    if (this._getHostName(return_url) == null) {
        return_url = this._getHostName(window.location+"") + return_url;
    }
    
    if (endpoint != null) {
        var manager = popupManager.createPopupOpener({
            'realm': this._getHostName(return_url),
            'opEndpoint' : endpoint,
            'returnToUrl': return_url,
            'shouldEncodeUrls': true,
            'onCloseHandler': (function() { if (ECDB.login_success) window.location = redirect_url; return true; }),
        });
        return partial(manager.popup, dimensions[0], dimensions[1]);
    }
    log("No valid provider given to ECDB.PopupOpenIDFunction, returning a no-op function");
    return noop();
};

ECDB._getHostName = function (str) {
    var re = new RegExp('^((?:f|ht)tp(?:s)?\://[^/]+)', 'im');
    var matched = str.match(re);
    return matched ? matched[1].toString() : null;
};


ECDB.SetRenderingType = function(renderer) {

    var curr_selected = MochiKit.DOM.getElementsByTagAndClassName('*','selected',this.parentNode);
    for (var sel in curr_selected) {
        MochiKit.DOM.removeElementClass(curr_selected[sel],'selected');
    }

    MochiKit.DOM.addElementClass(this,'selected');

    ECDB._setCookie('sugarImageNotation',renderer);
    
    var all_images = $$("img[src]"); // This should be using the
                                     // selector properly to grab
                                     // the appropriate img elements
                                     // but MochiKit (1.4 at least)
                                     // is broken
    for (var image in all_images) {
        if (/get_sugar_image.action/.test(all_images[image].src)) {
            old_src = all_images[image].src;
            all_images[image].src = old_src+"&1=1";
        }
    }
};

ECDB.appendMultipleValues = function(key,input_el,target_div,completer) {
  var current_value = input_el.value;
  input_el.select();
  input_el.value = '';

  var md = MochiKit.DOM;
  var disease_div = md.DIV({'class': 'ac_mult_sel selected_'+key});

  var deleter = md.DIV({'class': 'ac_mult_sel_delete'},'X');
  connect(deleter,'onclick', function() {
    target_div.removeChild(disease_div);
  });
  disease_div.appendChild(deleter);    

  disease_div.appendChild(md.INPUT({'type': 'hidden', 'name': key+'Search', 'value': current_value }));
  
  disease_div.appendChild(md.DIV({'class': 'ac_mult_sel_label'},current_value));
  
  target_div.appendChild(disease_div);  
};


ECDB.windowLoadScript = function()
{
    ECDB._setupSectionToggles();
};




ECDB._setupSectionToggles = function()
{
    var md = MochiKit.DOM;
    var section_toggles = md.getElementsByTagAndClassName('div','section_toggle',document);
    for (var a_toggle_idx in section_toggles) {
        var a_toggle = section_toggles[a_toggle_idx];
        var section_toggle_head = md.getElementsByTagAndClassName('*','hd',a_toggle)[0];
        var section_toggle_body = md.getElementsByTagAndClassName('div','bd',a_toggle)[0];
        if ( ! section_toggle_head && ! section_toggle_body ) {
            log.error("Missing head or body element in toggle. Skipping");
            continue;
        }
        section_toggle_body.style.display = 'none';
        connect(section_toggle_head,'onclick',function() {
        if (section_toggle_body.style.display == 'none') {
          blindDown(section_toggle_body,{'duration': 0.25});
        } else {
          blindUp(section_toggle_body,{'duration': 0.25});
        }
        });        
    }
};

ECDB._setCookie = function(name,value)
{
    // set time, it's in milliseconds
    var today = new Date();
    today.setTime( today.getTime() );
    
    // expire in one month
    var expires = 30 * 1000 * 60 * 60 * 24; 
    var expires_date = new Date( today.getTime() + (expires) );
    
    // set cookie
    var cookie = name + "=" +escape( value ) + ";expires=" + expires_date.toGMTString();
    
    document.cookie = cookie;
};

ECDB.stop_event = function(event) {
    if (! event) event = window.event;
    event.cancelBubble = true;
    if (event.stopPropagation) event.stopPropagation();    
}

ECDB.getElementByIdXML = function(the_node,the_id) {
	//get all the tags in the doc
	node_tags = the_node.getElementsByTagName('*');
	for (i=0;i<node_tags.length;i++) {
	//is there an id attribute?
		if (node_tags[i].getAttribute('id') != null) {
			//if there is, test its value
			if (node_tags[i].getAttribute('id') == the_id) {
				//and return it if it matches
				return node_tags[i];
			}
		}
	}
};

