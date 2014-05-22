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

  // Exported permission: 'access workflow summary views'.
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow_views',
  );

  // Exported permission: 'administer workflow'.
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow_admin_ui',
  );

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

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
