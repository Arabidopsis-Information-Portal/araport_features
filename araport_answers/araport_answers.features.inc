<?php
/**
 * @file
 * araport_answers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function araport_answers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
