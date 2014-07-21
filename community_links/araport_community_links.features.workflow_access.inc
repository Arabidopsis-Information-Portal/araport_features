<?php
/**
 * @file
 * araport_community_links.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function araport_community_links_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['approve_community_links'] = array();

  return $workflows;
}
