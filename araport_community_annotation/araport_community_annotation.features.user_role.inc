<?php
/**
 * @file
 * araport_community_annotation.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function araport_community_annotation_user_default_roles() {
  $roles = array();

  // Exported role: community curator.
  $roles['community curator'] = array(
    'name' => 'community curator',
    'weight' => 8,
  );

  return $roles;
}
