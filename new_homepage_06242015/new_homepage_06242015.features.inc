<?php
/**
 * @file
 * new_homepage_06242015.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function new_homepage_06242015_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "stylizer" && $api == "stylizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function new_homepage_06242015_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function new_homepage_06242015_node_info() {
  $items = array(
    'arabidopsis_first' => array(
      'name' => t('Arabidopsis First'),
      'base' => 'node_content',
      'description' => t('Custom forum topic'),
      'has_title' => '1',
      'title_label' => t('Discovery Title'),
      'help' => t('This topic captures responses to the question posed to the Newsgroup last month: "What are some seminal contributions to plant biology and to science in general coming first from Arabidopsis?" Comments and additions are welcome.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
