<?php
/**
 * @file
 * araport_preview2.features.inc
 */

/**
 * Implements hook_views_api().
 */
function araport_preview2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function araport_preview2_node_info() {
  $items = array(
    'aip_release_note' => array(
      'name' => t('AIP Release Note'),
      'base' => 'node_content',
      'description' => t('Each release note can describe one or more software products made available by the Araport project'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'conference_or_event' => array(
      'name' => t('Conference or Event'),
      'base' => 'node_content',
      'description' => t('Community-sourced announcements of conferences and events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
