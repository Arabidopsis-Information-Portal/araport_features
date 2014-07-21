<?php
/**
 * @file
 * araport_community_links.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function araport_community_links_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'approve_community_links'
  $workflows['approve_community_links'] = entity_import('Workflow', '{
    "name" : "approve_community_links",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "4" : {"sid":"4","wid":"2","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "5" : {"sid":"5","wid":"2","weight":"-20","sysid":"0","state":"submitted","status":"1","name":"submitted"},
      "6" : {"sid":"6","wid":"2","weight":"-19","sysid":"0","state":"approved","status":"1","name":"approved"}
    },
    "transitions" : {
      "7" : {"tid":"7","sid":"4","target_sid":"5","roles":{"-1":-1},"wid":"2","name":"4_5","label":"","rdf_mapping":[]},
      "8" : {"tid":"8","sid":"4","target_sid":"6","roles":{"3":"3","4":"4"},"wid":"2","name":"4_6","label":"","rdf_mapping":[]},
      "9" : {"tid":"9","sid":"5","target_sid":"5","roles":{"-1":-1,"3":"3","4":"4"},"wid":"2","name":"5_5","label":"","rdf_mapping":[]},
      "10" : {"tid":"10","sid":"5","target_sid":"6","roles":{"3":"3","4":"4"},"wid":"2","name":"5_6","label":"","rdf_mapping":[]},
      "11" : {"tid":"11","sid":"6","target_sid":"5","roles":{"3":"3","4":"4"},"wid":"2","name":"6_5","label":"","rdf_mapping":[]},
      "12" : {"tid":"12","sid":"6","target_sid":"6","roles":{"-1":-1,"3":"3","4":"4"},"wid":"2","name":"6_6","label":"","rdf_mapping":[]}
    },
    "label" : "Approve Community Links",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "2",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "administrator",
      "4" : "content editor"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function araport_community_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function araport_community_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function araport_community_links_node_info() {
  $items = array(
    'aip_external_link' => array(
      'name' => t('AIP External Link'),
      'base' => 'node_content',
      'description' => t('A link to an external site, used to compile tables and other displays of 3rd party content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
