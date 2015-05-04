<?php
/**
 * @file
 * araport_rfc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function araport_rfc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function araport_rfc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function araport_rfc_node_info() {
  $items = array(
    'request_for_comment' => array(
      'name' => t('Request for Comment'),
      'base' => 'node_content',
      'description' => t('A request for comment page. This type of page automatically has commenting enabled, for obvious reasons!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Requests for comment (RfC) is an informal process for requesting outside input concerning disputes, policies, guidelines or article content. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
