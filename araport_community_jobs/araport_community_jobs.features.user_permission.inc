<?php
/**
 * @file
 * araport_community_jobs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function araport_community_jobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create job_posting content'.
  $permissions['create job_posting content'] = array(
    'name' => 'create job_posting content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_posting content'.
  $permissions['delete any job_posting content'] = array(
    'name' => 'delete any job_posting content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_posting content'.
  $permissions['delete own job_posting content'] = array(
    'name' => 'delete own job_posting content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_posting content'.
  $permissions['edit any job_posting content'] = array(
    'name' => 'edit any job_posting content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_posting content'.
  $permissions['edit own job_posting content'] = array(
    'name' => 'edit own job_posting content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
