<?php
/**
 * @file
 * araport_community_annotation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function araport_community_annotation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
