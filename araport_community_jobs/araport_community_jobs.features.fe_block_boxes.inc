<?php
/**
 * @file
 * araport_community_jobs.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function araport_community_jobs_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Post a job block';
  $fe_block_boxes->format = 'formatted_text';
  $fe_block_boxes->machine_name = 'post_job_block';
  $fe_block_boxes->body = '<a href="/node/add/job-posting" class="btn btn-lg btn-block btn-success"><i class="glyphicon glyphicon-plus"></i> Post a Job</a>';

  $export['post_job_block'] = $fe_block_boxes;

  return $export;
}
