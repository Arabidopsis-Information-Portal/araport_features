<?php
/**
 * @file
 * araport_rfc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function araport_rfc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_request_for_comment';
  $strongarm->value = 0;
  $export['comment_anonymous_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_request_for_comment';
  $strongarm->value = 1;
  $export['comment_default_mode_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_request_for_comment';
  $strongarm->value = '50';
  $export['comment_default_per_page_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_request_for_comment';
  $strongarm->value = 1;
  $export['comment_form_location_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_request_for_comment';
  $strongarm->value = '1';
  $export['comment_preview_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_request_for_comment';
  $strongarm->value = '2';
  $export['comment_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_request_for_comment';
  $strongarm->value = 1;
  $export['comment_subject_field_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_request_for_comment';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_request_for_comment';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_request_for_comment';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_request_for_comment';
  $strongarm->value = '1';
  $export['node_preview_request_for_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_request_for_comment';
  $strongarm->value = 0;
  $export['node_submitted_request_for_comment'] = $strongarm;

  return $export;
}
