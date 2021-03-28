/**
 * @fileoverview
 * Scan navigator factory. Creates a scan navigator widget given an unordered 
 * list element
 *
 */

if ( typeof(ECDB) == 'undefined' ) {
  ECDB = {};
}

/**
 * ECDB.ScanNavigator
 * @class
 */
if ( typeof(ECDB.ScanNavigator) == undefined ) {
	ECDB.ScanNavigator = {};
}


ECDB.ScanNavigator = function( target_element, detail_id_prefix ) {
  if (target_element == null) {
    return;
  }
    
  if ( ! YAHOO || ! YAHOO.widget || ! YAHOO.widget.TreeView ) {
      log("Missing YAHOO libraries");
      return;
  }
  
  if (detail_id_prefix == null) {
      detail_id_prefix = 'scan_detail_';
  }
  
  addElementClass(target_element,'scan_navigator');
  
  treeview = new YAHOO.widget.TreeView(target_element);


  treeview.singleNodeHighlight = true;
  treeview.subscribe("clickEvent",treeview.onEventToggleHighlight);
  treeview.expandAll();
  treeview.render();
  treeview.subscribe("highlightEvent", function(node) {
    var nodes = [node];
    for (var a_node_idx in nodes) {
      var a_node = nodes[a_node_idx];
      if (a_node == null) {
        continue;
      }
      var scan_det_id = getElementsByTagAndClassName( '*',
                                    'scan_link',
                                    a_node.getContentEl()
                                  )[0].id.match(/\d+/);
      var scan_detail = $(detail_id_prefix+scan_det_id);
      if (scan_detail != null) {
        if (a_node.highlightState == 1) {
          showElement(scan_detail);
        } else {
          hideElement(scan_detail);
        }        
      }
      if ( ! this.detail_container ) {
          this.detail_container = scan_detail.parentNode;
          addElementClass(this.detail_container,'scan_navigator_detail_container');          
          this.detail_container.parentNode.style.position = 'relative';
      }
    }
  });
  if (treeview.getNodeByIndex(1) != null) {
    treeview.getNodeByIndex(1).toggleHighlight();
  }
};
