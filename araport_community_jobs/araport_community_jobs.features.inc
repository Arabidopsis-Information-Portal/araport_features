<?php
/**
 * @file
 * araport_community_jobs.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function araport_community_jobs_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'approve_job_postings'
  $workflows['approve_job_postings'] = entity_import('Workflow', '{
    "name" : "approve_job_postings",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-19","sysid":"0","state":"Submitted","status":"1","name":"submitted"},
      "3" : {"sid":"3","wid":"1","weight":"-18","sysid":"0","state":"Approve","status":"1","name":"approve"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1},"wid":"1","name":"1_3","label":"","rdf_mapping":[]},
      "2" : {"tid":"2","sid":"1","target_sid":"3","roles":{"3":"3","4":"4"},"wid":"1","name":"1_2","label":"","rdf_mapping":[]},
      "3" : {"tid":"3","sid":"2","target_sid":"2","roles":{"-1":-1,"3":"3","4":"4"},"wid":"1","name":"3_3","label":"","rdf_mapping":[]},
      "4" : {"tid":"4","sid":"2","target_sid":"3","roles":{"3":"3","4":"4"},"wid":"1","name":"3_2","label":"","rdf_mapping":[]},
      "5" : {"tid":"5","sid":"3","target_sid":"2","roles":{"3":"3","4":"4"},"wid":"1","name":"2_3","label":"","rdf_mapping":[]},
      "6" : {"tid":"6","sid":"3","target_sid":"3","roles":{"-1":-1,"3":"3","4":"4"},"wid":"1","name":"2_2","label":"","rdf_mapping":[]}
    },
    "label" : "Approve Job Postings",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "1",
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
function araport_community_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function araport_community_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function araport_community_jobs_node_info() {
  $items = array(
    'job_posting' => array(
      'name' => t('Job Posting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
