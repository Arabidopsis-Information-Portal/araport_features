<?php
/**
 * @file
 * araport_community_links.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function araport_community_links_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_links_workflow'
  $field_bases['field_links_workflow'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_links_workflow',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '4 | (creation)
5 | Submitted
6 | Approved',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 3,
          4 => 4,
        ),
      ),
      'profile2_private' => FALSE,
      'watchdog_log' => 1,
      'wid' => 2,
      'widget' => array(
        'comment' => 1,
        'name_as_title' => 1,
        'options' => 'radios',
        'schedule' => 1,
        'schedule_timezone' => 1,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  // Exported field_base: 'field_url'
  $field_bases['field_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_url_description'
  $field_bases['field_url_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
