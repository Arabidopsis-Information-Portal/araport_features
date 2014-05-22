<?php
/**
 * @file
 * araport_community_jobs.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function araport_community_jobs_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['approve_job_postings'] = array();

  return $workflows;
}
