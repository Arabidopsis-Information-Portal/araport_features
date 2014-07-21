<?php
/**
 * @file
 * araport_community_jobs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function araport_community_jobs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-post_job_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'post_job_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'community/jobs
community/jobs/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'araport_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'araport_theme',
        'weight' => -18,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-job_postings-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'job_postings-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community/jobs
community/jobs/*',
    'roles' => array(),
    'themes' => array(
      'araport_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'araport_theme',
        'weight' => -19,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
